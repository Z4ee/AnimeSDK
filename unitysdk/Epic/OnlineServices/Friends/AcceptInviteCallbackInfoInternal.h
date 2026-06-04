#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x60D0)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x43340)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x43350)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x433C0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int AcceptInviteCallbackInfoInternal_TypeDefinitionIndex = 42900;

	struct alignas(8) AcceptInviteCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_TargetUserId; // 0x28

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET))(this);
		}
	};
}
