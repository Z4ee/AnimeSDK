#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_METHOD_7_1DA8CB1EAC29B2AE_OFFSET UNITYSDK_OFFSET(0x1D3BA270)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_METHOD_7_37AA231C9DBD846A_OFFSET UNITYSDK_OFFSET(0x1D3B9F90)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B9F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig_TypeDefinitionIndex = 19497;

	class RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_1DA8CB1EAC29B2AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_METHOD_7_1DA8CB1EAC29B2AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_37AA231C9DBD846A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSameTypeLevelChangeAndAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSAMETYPELEVELCHANGEANDAPPENDATTRIBUTECONFIG_METHOD_7_37AA231C9DBD846A_OFFSET))(a1, a2);
		}
	};
}
