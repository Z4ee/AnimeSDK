#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchGetSearchResultCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x93EAA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8167E0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchGetSearchResultCountOptionsInternal_TypeDefinitionIndex = 33587;

	struct alignas(4) SessionSearchGetSearchResultCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
