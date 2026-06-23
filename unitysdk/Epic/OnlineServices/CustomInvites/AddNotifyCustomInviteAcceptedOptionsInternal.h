#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::CustomInvites { class AddNotifyCustomInviteAcceptedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9A9420)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B18C0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int AddNotifyCustomInviteAcceptedOptionsInternal_TypeDefinitionIndex = 36015;

	struct alignas(4) AddNotifyCustomInviteAcceptedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITEACCEPTEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
