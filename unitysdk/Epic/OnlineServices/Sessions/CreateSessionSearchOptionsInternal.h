#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class CreateSessionSearchOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x13170)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONSINTERNAL_SET_MAXSEARCHRESULTS_OFFSET UNITYSDK_OFFSET(0x2200)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2210)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CreateSessionSearchOptionsInternal_TypeDefinitionIndex = 45102;

	struct alignas(4) CreateSessionSearchOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_MaxSearchResults; // 0x14

		::System::Void set_MaxSearchResults(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONSINTERNAL_SET_MAXSEARCHRESULTS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::CreateSessionSearchOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::CreateSessionSearchOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
