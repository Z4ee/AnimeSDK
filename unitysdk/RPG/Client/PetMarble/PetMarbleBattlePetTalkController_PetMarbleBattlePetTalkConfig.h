#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTalkTriggerType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_PETMARBLEBATTLEPETTALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDACA900)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig_TypeDefinitionIndex = 74703;

	class PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig : public ::System::Object
	{
	public:
		::System::String* VoiceEvt; // 0x10
		::RPG::Client::TextID TalkContent; // 0x18
		::System::UInt32 EntityID; // 0x28
		::System::Single DurationTime; // 0x2C
		::RPG::GameCore::PetMarbleTalkTriggerType TriggerType; // 0x30
		::System::UInt32 TalkID; // 0x34
		::System::Single DelayTime; // 0x38
		::System::Boolean IsEmpty; // 0x3C
		::System::UInt32 PetID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_PETMARBLEBATTLEPETTALKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
