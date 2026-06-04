#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A91D0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int AddNotifyCustomInviteAcceptedOptions_TypeDefinitionIndex = 43035;

	class AddNotifyCustomInviteAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
