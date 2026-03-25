#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8630EF0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int AddNotifyCustomInviteReceivedOptions_TypeDefinitionIndex = 36408;

	class AddNotifyCustomInviteReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
