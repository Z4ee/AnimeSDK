#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONS_GET_MAXSEARCHRESULTS_OFFSET UNITYSDK_OFFSET(0x1C17E790)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONS_SET_MAXSEARCHRESULTS_OFFSET UNITYSDK_OFFSET(0x1C17E7A0)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17E7B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CreateSessionSearchOptions_TypeDefinitionIndex = 42919;

	class CreateSessionSearchOptions : public ::System::Object
	{
	public:
		::System::UInt32 _MaxSearchResults_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxSearchResults()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONS_GET_MAXSEARCHRESULTS_OFFSET))(this);
		}

		::System::Void set_MaxSearchResults(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONSEARCHOPTIONS_SET_MAXSEARCHRESULTS_OFFSET))(this, a1);
		}
	};
}
