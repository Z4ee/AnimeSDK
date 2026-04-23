#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_METHOD_6_B5D3AD7F5AD61134_OFFSET UNITYSDK_OFFSET(0x18CD5310)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_METHOD_6_FB0D6A0853446399_OFFSET UNITYSDK_OFFSET(0x18CD50F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD5230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueBattleConfig_TypeDefinitionIndex = 18637;

	class RogueActTriggerDialogueBattleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FB0D6A0853446399(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_METHOD_6_FB0D6A0853446399_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B5D3AD7F5AD61134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_METHOD_6_B5D3AD7F5AD61134_OFFSET))(a1, a2);
		}
	};
}
