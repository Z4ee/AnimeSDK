#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongEnemyGroupConfig; }
namespace RPG::GameCore { class PingPongEnemyShootConfig; }
namespace RPG::GameCore { class PingPongEnemyStackConfig; }
namespace RPG::GameCore { class PingPongEnemyUnitConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYCONFIG_METHOD_2_F72D3CEE361FFD32_OFFSET UNITYSDK_OFFSET(0x174AF2C0)
#define RPG_GAMECORE_PINGPONGENEMYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174AF530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyConfig_TypeDefinitionIndex = 15559;

	class PingPongEnemyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::Il2CppArray<::RPG::GameCore::PingPongEnemyUnitConfig*>* UnitList; // 0x18
		::Il2CppArray<::RPG::GameCore::PingPongEnemyStackConfig*>* StackList; // 0x20
		::Il2CppArray<::RPG::GameCore::PingPongEnemyShootConfig*>* ShootList; // 0x28
		::Il2CppArray<::RPG::GameCore::PingPongEnemyGroupConfig*>* GroupList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F72D3CEE361FFD32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCONFIG_METHOD_2_F72D3CEE361FFD32_OFFSET))(a1, a2);
		}
	};
}
