#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACEALLATTRIBUTECONFIG_METHOD_7_520AECE3AA43572C_OFFSET UNITYSDK_OFFSET(0x18CCED20)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACEALLATTRIBUTECONFIG_METHOD_7_838D4DFDDD9AB2B1_OFFSET UNITYSDK_OFFSET(0x18CCF8D0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACEALLATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCEC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastReplaceAllAttributeConfig_TypeDefinitionIndex = 18731;

	class RogueActPersonaSelectRoomCardCastReplaceAllAttributeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACEALLATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_838D4DFDDD9AB2B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastReplaceAllAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastReplaceAllAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACEALLATTRIBUTECONFIG_METHOD_7_838D4DFDDD9AB2B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_520AECE3AA43572C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastReplaceAllAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastReplaceAllAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREPLACEALLATTRIBUTECONFIG_METHOD_7_520AECE3AA43572C_OFFSET))(a1, a2);
		}
	};
}
