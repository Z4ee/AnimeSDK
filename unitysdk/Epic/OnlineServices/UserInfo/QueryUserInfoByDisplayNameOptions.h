#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x83D43B0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83D4390)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x83D43C0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83D43A0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83D43D0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoByDisplayNameOptions_TypeDefinitionIndex = 35286;

	class QueryUserInfoByDisplayNameOptions : public ::System::Object
	{
	public:
		::System::String* _DisplayName_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_SET_DISPLAYNAME_OFFSET))(this, value);
		}
	};
}
