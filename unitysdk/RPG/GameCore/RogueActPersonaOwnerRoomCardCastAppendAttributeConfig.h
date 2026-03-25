#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_1579DD8FC98F8029_OFFSET UNITYSDK_OFFSET(0x175BCC80)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_2774D179C5DD0DC4_OFFSET UNITYSDK_OFFSET(0x175BCEA0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTAPPENDATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BCDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastAppendAttributeConfig_TypeDefinitionIndex = 18110;

	class RogueActPersonaOwnerRoomCardCastAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTAPPENDATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_1579DD8FC98F8029(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastAppendAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastAppendAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_1579DD8FC98F8029_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_2774D179C5DD0DC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTAPPENDATTRIBUTECONFIG_METHOD_7_2774D179C5DD0DC4_OFFSET))(a1, a2);
		}
	};
}
