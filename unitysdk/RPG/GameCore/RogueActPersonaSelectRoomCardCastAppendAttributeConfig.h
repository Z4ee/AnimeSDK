#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_762F727E3FEF927D_OFFSET UNITYSDK_OFFSET(0x19AF1620)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_A0F253921FF4D1A0_OFFSET UNITYSDK_OFFSET(0x19AF1400)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF1540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastAppendAttributeConfig_TypeDefinitionIndex = 18687;

	class RogueActPersonaSelectRoomCardCastAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_A0F253921FF4D1A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastAppendAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastAppendAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_A0F253921FF4D1A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_762F727E3FEF927D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_762F727E3FEF927D_OFFSET))(a1, a2);
		}
	};
}
