#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA108470)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA108450)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA108480)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA108460)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA108490)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoByDisplayNameOptions_TypeDefinitionIndex = 41915;

	class QueryUserInfoByDisplayNameOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _DisplayName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONS_SET_DISPLAYNAME_OFFSET))(this, a1);
		}
	};
}
