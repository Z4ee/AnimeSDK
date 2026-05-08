#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class ActiveSessionGetRegisteredPlayerByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x876160)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x86F730)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONSINTERNAL_SET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x5B6810)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSessionGetRegisteredPlayerByIndexOptionsInternal_TypeDefinitionIndex = 33449;

	struct alignas(4) ActiveSessionGetRegisteredPlayerByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_PlayerIndex; // 0x14

		::System::Void set_PlayerIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONSINTERNAL_SET_PLAYERINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONGETREGISTEREDPLAYERBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
