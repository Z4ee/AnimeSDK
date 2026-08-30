#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::CustomInvites { class SendCustomInviteOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C339C0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C33940)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C33800)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C33930)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_SET_TARGETUSERIDS_OFFSET UNITYSDK_OFFSET(0x3C338C0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int SendCustomInviteOptionsInternal_TypeDefinitionIndex = 46098;

	struct alignas(8) SendCustomInviteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserIds; // 0x20
		::System::UInt32 m_TargetUserIdsCount; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_SET_TARGETUSERIDS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_SENDCUSTOMINVITEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
