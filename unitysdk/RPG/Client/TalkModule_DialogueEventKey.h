#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY_CLEAR_OFFSET UNITYSDK_OFFSET(0x3B7C550)
#define RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7C5A0)
#define RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule_DialogueEventKey_TypeDefinitionIndex = 68029;

	struct alignas(4) TalkModule_DialogueEventKey
	{
		::System::UInt32 RogueNPCID; // 0x10
		::System::UInt32 SubStoryGroupID; // 0x14
		::System::UInt32 SubStoryLayer; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TalkModule_DialogueEventKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TalkModule_DialogueEventKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_DIALOGUEEVENTKEY_EQUALS_OFFSET))(this, a1);
		}
	};
}
