#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA104D90)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA104D50)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA104D70)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA104DA0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA104D60)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA104D80)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA104DB0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int CopyExternalUserInfoByAccountIdOptions_TypeDefinitionIndex = 41895;

	class CopyExternalUserInfoByAccountIdOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _AccountId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONS_SET_ACCOUNTID_OFFSET))(this, a1);
		}
	};
}
