#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Sessions { class SessionDetails; }
namespace Epic::OnlineServices::Sessions { class SessionSearchCopySearchResultByIndexOptions; }
namespace Epic::OnlineServices::Sessions { class SessionSearchFindOptions; }
namespace Epic::OnlineServices::Sessions { class SessionSearchGetSearchResultCountOptions; }
namespace Epic::OnlineServices::Sessions { class SessionSearchOnFindCallback; }
namespace Epic::OnlineServices::Sessions { class SessionSearchRemoveParameterOptions; }
namespace Epic::OnlineServices::Sessions { class SessionSearchSetMaxResultsOptions; }
namespace Epic::OnlineServices::Sessions { class SessionSearchSetParameterOptions; }
namespace Epic::OnlineServices::Sessions { class SessionSearchSetSessionIdOptions; }
namespace Epic::OnlineServices::Sessions { class SessionSearchSetTargetUserIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_COPYSEARCHRESULTBYINDEX_OFFSET UNITYSDK_OFFSET(0xA0EB070)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_FIND_OFFSET UNITYSDK_OFFSET(0xA0EB200)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_GETSEARCHRESULTCOUNT_OFFSET UNITYSDK_OFFSET(0xA0EB460)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_ONFINDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA0EAFB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_RELEASE_OFFSET UNITYSDK_OFFSET(0xA0EB6A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_REMOVEPARAMETER_OFFSET UNITYSDK_OFFSET(0xA0EB720)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_SETMAXRESULTS_OFFSET UNITYSDK_OFFSET(0xA0EB950)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_SETPARAMETER_OFFSET UNITYSDK_OFFSET(0xA0EBAB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_SETSESSIONID_OFFSET UNITYSDK_OFFSET(0xA0EBCE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_SETTARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA0EBEE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0EB060)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EB050)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearch_TypeDefinitionIndex = 42163;

	class SessionSearch : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 SessionsearchCopysearchresultbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionsearchFindApiLatest = 0x2; // 0x0
		// static const ::System::Int32 SessionsearchGetsearchresultcountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionsearchRemoveparameterApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionsearchSetmaxsearchresultsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionsearchSetparameterApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionsearchSetsessionidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionsearchSettargetuseridApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopySearchResultByIndex(::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions* a1, ::Epic::OnlineServices::Sessions::SessionDetails*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions*, ::Epic::OnlineServices::Sessions::SessionDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_COPYSEARCHRESULTBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Find(::Epic::OnlineServices::Sessions::SessionSearchFindOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchFindOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_FIND_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSearchResultCount(::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_GETSEARCHRESULTCOUNT_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result RemoveParameter(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_REMOVEPARAMETER_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetMaxResults(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_SETMAXRESULTS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetParameter(::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_SETPARAMETER_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetSessionId(::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_SETSESSIONID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetTargetUserId(::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_SETTARGETUSERID_OFFSET))(this, a1);
		}

		static ::System::Void OnFindCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCH_ONFINDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
