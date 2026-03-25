#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Friends/AcceptInviteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x86514E0)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8651480)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86514A0)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8651460)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x86514C0)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8651960)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8651490)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86514B0)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8651500)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8651470)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x86514D0)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8651A90)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int AcceptInviteCallbackInfo_TypeDefinitionIndex = 36270;

	class AcceptInviteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Friends::AcceptInviteCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Friends::AcceptInviteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
