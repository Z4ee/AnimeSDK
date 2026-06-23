#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D194A40)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int AddNotifyCustomInviteAcceptedOptions_TypeDefinitionIndex = 36014;

	class AddNotifyCustomInviteAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
