#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITEACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D836750)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AddNotifySessionInviteAcceptedOptions_TypeDefinitionIndex = 35678;

	class AddNotifySessionInviteAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITEACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
