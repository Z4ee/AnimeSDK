#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83D0A30)
#define EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x83D0A50)
#define EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83D0A40)
#define EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x83D0A60)
#define EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83D0A70)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int CopyUserInfoOptions_TypeDefinitionIndex = 35272;

	class CopyUserInfoOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYUSERINFOOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
