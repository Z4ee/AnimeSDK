#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACETYPEANDATTRIBUTECONFIG_METHOD_6_B0E0A61F53314519_OFFSET UNITYSDK_OFFSET(0x1EE88070)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACETYPEANDATTRIBUTECONFIG_METHOD_6_E73A449CE5900415_OFFSET UNITYSDK_OFFSET(0x1EE88020)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACETYPEANDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE88060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastReplaceTypeAndAttributeConfig_TypeDefinitionIndex = 19503;

	class RogueActPersonaSelectRoomCardCastReplaceTypeAndAttributeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACETYPEANDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E73A449CE5900415(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastReplaceTypeAndAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastReplaceTypeAndAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACETYPEANDATTRIBUTECONFIG_METHOD_6_E73A449CE5900415_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B0E0A61F53314519(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastReplaceTypeAndAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastReplaceTypeAndAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACETYPEANDATTRIBUTECONFIG_METHOD_6_B0E0A61F53314519_OFFSET))(a1, a2);
		}
	};
}
