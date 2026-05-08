#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchSetMaxResultsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x93EB10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_MAXSEARCHRESULTS_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x86F730)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetMaxResultsOptionsInternal_TypeDefinitionIndex = 33593;

	struct alignas(4) SessionSearchSetMaxResultsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_MaxSearchResults; // 0x14

		::System::Void set_MaxSearchResults(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_MAXSEARCHRESULTS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
