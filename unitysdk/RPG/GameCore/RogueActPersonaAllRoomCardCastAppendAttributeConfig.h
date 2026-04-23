#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_AE42341798C3DBD5_OFFSET UNITYSDK_OFFSET(0x18CC5DE0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_CC027255DE08D528_OFFSET UNITYSDK_OFFSET(0x18CC6000)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC5F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastAppendAttributeConfig_TypeDefinitionIndex = 18742;

	class RogueActPersonaAllRoomCardCastAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_AE42341798C3DBD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_AE42341798C3DBD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_CC027255DE08D528(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_CC027255DE08D528_OFFSET))(a1, a2);
		}
	};
}
