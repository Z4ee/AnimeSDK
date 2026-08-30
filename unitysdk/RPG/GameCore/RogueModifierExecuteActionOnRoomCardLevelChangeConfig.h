#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_METHOD_3_AC95E7BCBE9BACEB_OFFSET UNITYSDK_OFFSET(0x1EEF9770)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_METHOD_3_F193A074E7C3FFEF_OFFSET UNITYSDK_OFFSET(0x1EEF97C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF97B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRoomCardLevelChangeConfig_TypeDefinitionIndex = 17479;

	class RogueModifierExecuteActionOnRoomCardLevelChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AC95E7BCBE9BACEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_METHOD_3_AC95E7BCBE9BACEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F193A074E7C3FFEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_METHOD_3_F193A074E7C3FFEF_OFFSET))(a1, a2);
		}
	};
}
