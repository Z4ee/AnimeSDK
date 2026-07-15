#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_184914A34F13CC15_OFFSET UNITYSDK_OFFSET(0x1CFBFD70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_34F59CCAF32BD1F1_OFFSET UNITYSDK_OFFSET(0x1CFBFD20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBFD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionDiffPersonaRoomCardNumConfig_TypeDefinitionIndex = 17093;

	class RogueModifierExecuteActionDiffPersonaRoomCardNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34F59CCAF32BD1F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_34F59CCAF32BD1F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_184914A34F13CC15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_184914A34F13CC15_OFFSET))(a1, a2);
		}
	};
}
