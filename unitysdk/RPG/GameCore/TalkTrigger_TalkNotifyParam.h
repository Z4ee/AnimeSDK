#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TalkTrigger_DialogueGroupInfo.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_TALKTRIGGER_TALKNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAA55040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkTrigger_TalkNotifyParam_TypeDefinitionIndex = 46360;

	class TalkTrigger_TalkNotifyParam : public ::System::Object
	{
	public:
		::RPG::GameCore::TalkTrigger_DialogueGroupInfo DialogueGroupInfo; // 0x10
		::System::UInt32 GuestRuntimeID; // 0x1C
		::System::UInt32 HostRuntimeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_TALKNOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
