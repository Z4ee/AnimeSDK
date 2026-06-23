#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Friends/SendInviteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D2752D0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D275270)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D275290)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D275250)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1D2752B0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1D275560)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D275280)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D2752A0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1D2752F0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D275260)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1D2752C0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2756A0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int SendInviteCallbackInfo_TypeDefinitionIndex = 35912;

	class SendInviteCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Friends::SendInviteCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Friends::SendInviteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
