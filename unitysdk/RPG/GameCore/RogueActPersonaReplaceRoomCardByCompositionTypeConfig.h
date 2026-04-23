#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_METHOD_6_2505FC283952908B_OFFSET UNITYSDK_OFFSET(0x18CCC7B0)
#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_METHOD_6_C7E4F6305712604E_OFFSET UNITYSDK_OFFSET(0x18CCC9D0)
#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCC8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaReplaceRoomCardByCompositionTypeConfig_TypeDefinitionIndex = 18770;

	class RogueActPersonaReplaceRoomCardByCompositionTypeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2505FC283952908B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_METHOD_6_2505FC283952908B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C7E4F6305712604E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_METHOD_6_C7E4F6305712604E_OFFSET))(a1, a2);
		}
	};
}
