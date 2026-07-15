#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_7798021D6110E1D3_OFFSET UNITYSDK_OFFSET(0x1CFC0FD0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_80614617D4FB620F_OFFSET UNITYSDK_OFFSET(0x1CFC0F80)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC0FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig_TypeDefinitionIndex = 17094;

	class RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80614617D4FB620F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_80614617D4FB620F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7798021D6110E1D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_7798021D6110E1D3_OFFSET))(a1, a2);
		}
	};
}
