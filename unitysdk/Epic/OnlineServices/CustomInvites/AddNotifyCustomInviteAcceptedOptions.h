#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E647F0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int AddNotifyCustomInviteAcceptedOptions_TypeDefinitionIndex = 42232;

	class AddNotifyCustomInviteAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
