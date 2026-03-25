#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongEnemyShootOverrideConfig; }

#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_METHOD_3_4E51FE38368E8A61_OFFSET UNITYSDK_OFFSET(0x174B05D0)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_METHOD_3_DB1DB5F7EEFA00BD_OFFSET UNITYSDK_OFFSET(0x174B0660)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174B0640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyShootOverrideCmptConfig_TypeDefinitionIndex = 17373;

	class PingPongEnemyShootOverrideCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongEnemyShootOverrideConfig*>* OverrideList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E51FE38368E8A61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_METHOD_3_4E51FE38368E8A61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB1DB5F7EEFA00BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_METHOD_3_DB1DB5F7EEFA00BD_OFFSET))(a1, a2);
		}
	};
}
