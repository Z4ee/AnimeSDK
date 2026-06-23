#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1CBDDBD0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CBDDB90)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1CBDDBB0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1CBDDBE0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CBDDBA0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1CBDDBC0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDDBF0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int CopyExternalUserInfoByAccountIdOptions_TypeDefinitionIndex = 34874;

	class CopyExternalUserInfoByAccountIdOptions : public ::System::Object
	{
	public:
		::System::String* _AccountId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_ACCOUNTID_OFFSET))(this, value);
		}
	};
}
