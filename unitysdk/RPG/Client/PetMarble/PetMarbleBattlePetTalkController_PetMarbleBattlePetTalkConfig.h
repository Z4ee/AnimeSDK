#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTalkTriggerType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_PETMARBLEBATTLEPETTALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD4130)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig_TypeDefinitionIndex = 74704;

	class PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig : public ::System::Object
	{
	public:
		::System::String* VoiceEvt; // 0x10
		::RPG::GameCore::PetMarbleTalkTriggerType TriggerType; // 0x18
		::System::UInt32 EntityID; // 0x1C
		::System::UInt32 TalkID; // 0x20
		::System::Single DurationTime; // 0x24
		::System::Single DelayTime; // 0x28
		::System::Boolean IsEmpty; // 0x2C
		::System::UInt32 PetID; // 0x30
		::RPG::Client::TextID TalkContent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_PETMARBLEBATTLEPETTALKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
