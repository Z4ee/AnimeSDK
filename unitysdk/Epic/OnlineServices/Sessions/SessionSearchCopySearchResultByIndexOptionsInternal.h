#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchCopySearchResultByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C29950)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCC9F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_SESSIONINDEX_OFFSET UNITYSDK_OFFSET(0xB596A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchCopySearchResultByIndexOptionsInternal_TypeDefinitionIndex = 45208;

	struct alignas(4) SessionSearchCopySearchResultByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_SessionIndex; // 0x14

		::System::Void set_SessionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_SESSIONINDEX_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
