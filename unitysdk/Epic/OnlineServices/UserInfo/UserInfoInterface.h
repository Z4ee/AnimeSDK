#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::UserInfo { class CopyExternalUserInfoByAccountIdOptions; }
namespace Epic::OnlineServices::UserInfo { class CopyExternalUserInfoByAccountTypeOptions; }
namespace Epic::OnlineServices::UserInfo { class CopyExternalUserInfoByIndexOptions; }
namespace Epic::OnlineServices::UserInfo { class CopyUserInfoOptions; }
namespace Epic::OnlineServices::UserInfo { class ExternalUserInfo; }
namespace Epic::OnlineServices::UserInfo { class GetExternalUserInfoCountOptions; }
namespace Epic::OnlineServices::UserInfo { class OnQueryUserInfoByDisplayNameCallback; }
namespace Epic::OnlineServices::UserInfo { class OnQueryUserInfoByExternalAccountCallback; }
namespace Epic::OnlineServices::UserInfo { class OnQueryUserInfoCallback; }
namespace Epic::OnlineServices::UserInfo { class QueryUserInfoByDisplayNameOptions; }
namespace Epic::OnlineServices::UserInfo { class QueryUserInfoByExternalAccountOptions; }
namespace Epic::OnlineServices::UserInfo { class QueryUserInfoOptions; }
namespace Epic::OnlineServices::UserInfo { class UserInfoData; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1BF0A120)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x1BF0A320)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1BF0A520)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYUSERINFO_OFFSET UNITYSDK_OFFSET(0x1BF0A720)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_GETEXTERNALUSERINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x1BF0A920)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BF09F50)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BF09FE0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BF0A070)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFOBYDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1BF0AC40)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFOBYEXTERNALACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BF0AE00)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFO_OFFSET UNITYSDK_OFFSET(0x1BF0AA80)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF0A110)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0A100)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int UserInfoInterface_TypeDefinitionIndex = 34906;

	class UserInfoInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CopyexternaluserinfobyaccountidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyexternaluserinfobyaccounttypeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyexternaluserinfobyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyuserinfoApiLatest = 0x2; // 0x0
		// static const ::System::Int32 ExternaluserinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetexternaluserinfocountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 MaxDisplaynameCharacters = 0x10; // 0x0
		// static const ::System::Int32 MaxDisplaynameUtf8Length = 0x40; // 0x0
		// static const ::System::Int32 QueryuserinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryuserinfobydisplaynameApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryuserinfobyexternalaccountApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyExternalUserInfoByAccountId(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions* options, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*& outExternalUserInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions*, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYACCOUNTID_OFFSET))(this, options, outExternalUserInfo);
		}

		::Epic::OnlineServices::Result CopyExternalUserInfoByAccountType(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions* options, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*& outExternalUserInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions*, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYACCOUNTTYPE_OFFSET))(this, options, outExternalUserInfo);
		}

		::Epic::OnlineServices::Result CopyExternalUserInfoByIndex(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions* options, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*& outExternalUserInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions*, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYINDEX_OFFSET))(this, options, outExternalUserInfo);
		}

		::Epic::OnlineServices::Result CopyUserInfo(::Epic::OnlineServices::UserInfo::CopyUserInfoOptions* options, ::Epic::OnlineServices::UserInfo::UserInfoData*& outUserInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyUserInfoOptions*, ::Epic::OnlineServices::UserInfo::UserInfoData*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYUSERINFO_OFFSET))(this, options, outUserInfo);
		}

		::System::UInt32 GetExternalUserInfoCount(::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_GETEXTERNALUSERINFOCOUNT_OFFSET))(this, options);
		}

		::System::Void QueryUserInfo(::Epic::OnlineServices::UserInfo::QueryUserInfoOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoOptions*, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFO_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryUserInfoByDisplayName(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions*, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFOBYDISPLAYNAME_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryUserInfoByExternalAccount(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions*, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFOBYEXTERNALACCOUNT_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnQueryUserInfoByDisplayNameCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryUserInfoByExternalAccountCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryUserInfoCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
