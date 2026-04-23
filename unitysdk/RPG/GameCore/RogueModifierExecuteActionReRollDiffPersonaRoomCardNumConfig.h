#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_7798021D6110E1D3_OFFSET UNITYSDK_OFFSET(0x18D3EA40)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_90FE2365CDF6141A_OFFSET UNITYSDK_OFFSET(0x18D3E970)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3E9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig_TypeDefinitionIndex = 16917;

	class RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90FE2365CDF6141A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_90FE2365CDF6141A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7798021D6110E1D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_7798021D6110E1D3_OFFSET))(a1, a2);
		}
	};
}
