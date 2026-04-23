#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchCopySearchResultByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x17EF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1D60)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_SESSIONINDEX_OFFSET UNITYSDK_OFFSET(0x1D50)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchCopySearchResultByIndexOptionsInternal_TypeDefinitionIndex = 41362;

	struct alignas(4) SessionSearchCopySearchResultByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_SessionIndex; // 0x14

		::System::Void set_SessionIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_SESSIONINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHCOPYSEARCHRESULTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
