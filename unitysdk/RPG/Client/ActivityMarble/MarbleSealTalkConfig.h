#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealTalkConfig_TypeDefinitionIndex = 61427;

	struct alignas(4) MarbleSealTalkConfig
	{
		::System::UInt32 TalkID; // 0x10
		::System::UInt32 TeamIndex; // 0x14

		::System::Void _ctor(::System::UInt32 talkID, ::System::UInt32 teamIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTALKCONFIG__CTOR_OFFSET))(this, talkID, teamIndex);
		}
	};
}
