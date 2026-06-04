#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA358D80)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AddNotifySessionInviteReceivedOptions_TypeDefinitionIndex = 42042;

	class AddNotifySessionInviteReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
