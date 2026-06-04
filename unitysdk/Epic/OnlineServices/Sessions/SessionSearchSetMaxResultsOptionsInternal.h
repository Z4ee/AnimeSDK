#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchSetMaxResultsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x18750)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_MAXSEARCHRESULTS_OFFSET UNITYSDK_OFFSET(0x21F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2200)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetMaxResultsOptionsInternal_TypeDefinitionIndex = 42177;

	struct alignas(4) SessionSearchSetMaxResultsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_MaxSearchResults; // 0x14

		::System::Void set_MaxSearchResults(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_MAXSEARCHRESULTS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETMAXRESULTSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
