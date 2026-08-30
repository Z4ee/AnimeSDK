#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DialogueUtil_DialogueTriggerReason.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_TALKTRIGGER_DIALOGUEGROUPINFO_RESET_OFFSET UNITYSDK_OFFSET(0x39AA0C0)
#define RPG_GAMECORE_TALKTRIGGER_DIALOGUEGROUPINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39AA110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkTrigger_DialogueGroupInfo_TypeDefinitionIndex = 57686;

	struct alignas(4) TalkTrigger_DialogueGroupInfo
	{
		::System::UInt32 DialogueGroupID; // 0x10
		::RPG::GameCore::DialogueUtil_DialogueTriggerReason TriggerReason; // 0x14
		::System::UInt32 MenuItemExtraInfo; // 0x18

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DIALOGUEGROUPINFO_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DIALOGUEGROUPINFO_TOSTRING_OFFSET))(this);
		}
	};
}
