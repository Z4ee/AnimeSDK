#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA105A70)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA105A30)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA105A50)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA105A80)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA105A40)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA105A60)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA105A90)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int CopyExternalUserInfoByIndexOptions_TypeDefinitionIndex = 41899;

	class CopyExternalUserInfoByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::System::UInt32 _Index_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYINDEXOPTIONS_SET_INDEX_OFFSET))(this, a1);
		}
	};
}
