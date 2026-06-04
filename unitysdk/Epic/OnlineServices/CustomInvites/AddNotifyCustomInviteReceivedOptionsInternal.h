#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::CustomInvites { class AddNotifyCustomInviteReceivedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x39480)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITERECEIVEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EB0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int AddNotifyCustomInviteReceivedOptionsInternal_TypeDefinitionIndex = 43038;

	struct alignas(4) AddNotifyCustomInviteReceivedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITERECEIVEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ADDNOTIFYCUSTOMINVITERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
