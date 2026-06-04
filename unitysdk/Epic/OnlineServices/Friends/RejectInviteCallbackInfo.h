#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Friends/RejectInviteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2CA800)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2CA7A0)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2CA7C0)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2CA780)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2CA7E0)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2CAC80)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2CA7B0)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2CA7D0)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2CA820)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2CA790)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2CA7F0)
#define EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2CADB0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int RejectInviteCallbackInfo_TypeDefinitionIndex = 42929;

	class RejectInviteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Friends::RejectInviteCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Friends::RejectInviteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_REJECTINVITECALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
