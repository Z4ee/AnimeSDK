#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_184914A34F13CC15_OFFSET UNITYSDK_OFFSET(0x19B509E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_9542FF55B621C93C_OFFSET UNITYSDK_OFFSET(0x19B5C520)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B50990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionDiffPersonaRoomCardNumConfig_TypeDefinitionIndex = 16931;

	class RogueModifierExecuteActionDiffPersonaRoomCardNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9542FF55B621C93C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_9542FF55B621C93C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_184914A34F13CC15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_METHOD_3_184914A34F13CC15_OFFSET))(a1, a2);
		}
	};
}
