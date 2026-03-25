#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYSHOOTCONFIG_METHOD_2_614060E919C727A4_OFFSET UNITYSDK_OFFSET(0x174B03E0)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174B05C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyShootConfig_TypeDefinitionIndex = 15562;

	class PingPongEnemyShootConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ShootID; // 0x10
		::Il2CppArray<::System::String*>* UnitNameList; // 0x18
		::System::Single InitShootInterval; // 0x20
		::System::Single ShootInterval; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_614060E919C727A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyShootConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyShootConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTCONFIG_METHOD_2_614060E919C727A4_OFFSET))(a1, a2);
		}
	};
}
