#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_METHOD_6_BF8D3543DC5D9C32_OFFSET UNITYSDK_OFFSET(0x1EE87700)
#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_METHOD_6_C7E4F6305712604E_OFFSET UNITYSDK_OFFSET(0x1EE87750)
#define RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE87740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaReplaceRoomCardByCompositionTypeConfig_TypeDefinitionIndex = 19544;

	class RogueActPersonaReplaceRoomCardByCompositionTypeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BF8D3543DC5D9C32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_METHOD_6_BF8D3543DC5D9C32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C7E4F6305712604E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaReplaceRoomCardByCompositionTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREPLACEROOMCARDBYCOMPOSITIONTYPECONFIG_METHOD_6_C7E4F6305712604E_OFFSET))(a1, a2);
		}
	};
}
