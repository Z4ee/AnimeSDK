#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Friends { class SendInviteOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9964B0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x996290)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x995F40)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9960C0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x996000)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int SendInviteOptionsInternal_TypeDefinitionIndex = 36574;

	struct alignas(8) SendInviteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Friends::SendInviteOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::SendInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
