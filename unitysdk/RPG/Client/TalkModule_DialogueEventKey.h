#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY_CLEAR_OFFSET UNITYSDK_OFFSET(0xDF030)
#define RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDF080)
#define RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xD3340)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule_DialogueEventKey_TypeDefinitionIndex = 62721;

	struct alignas(4) TalkModule_DialogueEventKey
	{
		::System::UInt32 RogueNPCID; // 0x10
		::System::UInt32 SubStoryGroupID; // 0x14
		::System::UInt32 SubStoryLayer; // 0x18

		::System::Void _ctor(::System::UInt32 rogueNPCID, ::System::UInt32 subStoryGroupID, ::System::UInt32 subStoryLayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY__CTOR_OFFSET))(this, rogueNPCID, subStoryGroupID, subStoryLayer);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TalkModule_DialogueEventKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TalkModule_DialogueEventKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY_EQUALS_OFFSET))(this, other);
		}
	};
}
