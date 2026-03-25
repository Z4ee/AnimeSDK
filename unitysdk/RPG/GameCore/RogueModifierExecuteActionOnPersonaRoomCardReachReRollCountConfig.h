#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREACHREROLLCOUNTCONFIG_METHOD_3_6CC095AA50FF0D1B_OFFSET UNITYSDK_OFFSET(0x17631470)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREACHREROLLCOUNTCONFIG_METHOD_3_B6031DC65C533F82_OFFSET UNITYSDK_OFFSET(0x176313A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREACHREROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17631420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaRoomCardReachReRollCountConfig_TypeDefinitionIndex = 16404;

	class RogueModifierExecuteActionOnPersonaRoomCardReachReRollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREACHREROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6031DC65C533F82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardReachReRollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardReachReRollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREACHREROLLCOUNTCONFIG_METHOD_3_B6031DC65C533F82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CC095AA50FF0D1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardReachReRollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardReachReRollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREACHREROLLCOUNTCONFIG_METHOD_3_6CC095AA50FF0D1B_OFFSET))(a1, a2);
		}
	};
}
