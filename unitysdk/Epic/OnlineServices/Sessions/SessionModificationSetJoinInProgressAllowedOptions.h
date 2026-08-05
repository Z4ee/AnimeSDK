#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONS_GET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x1DFF6AF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONS_SET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x1DFF6B00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6B10)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetJoinInProgressAllowedOptions_TypeDefinitionIndex = 35795;

	class SessionModificationSetJoinInProgressAllowedOptions : public ::System::Object
	{
	public:
		::System::Boolean _AllowJoinInProgress_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowJoinInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONS_GET_ALLOWJOININPROGRESS_OFFSET))(this);
		}

		::System::Void set_AllowJoinInProgress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONS_SET_ALLOWJOININPROGRESS_OFFSET))(this, value);
		}
	};
}
