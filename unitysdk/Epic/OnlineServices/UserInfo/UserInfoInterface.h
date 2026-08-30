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

#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1D44EA10)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x1D44EC10)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D44EE10)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYUSERINFO_OFFSET UNITYSDK_OFFSET(0x1D44F010)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_GETEXTERNALUSERINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x1D44F210)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D44E810)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D44E8B0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1D44E950)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFOBYDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D44F550)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFOBYEXTERNALACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D44F730)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFO_OFFSET UNITYSDK_OFFSET(0x1D44F370)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D44EA00)
#define EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D44E9F0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int UserInfoInterface_TypeDefinitionIndex = 44970;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyExternalUserInfoByAccountId(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions* a1, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions*, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYACCOUNTID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyExternalUserInfoByAccountType(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions* a1, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions*, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYACCOUNTTYPE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyExternalUserInfoByIndex(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions* a1, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions*, ::Epic::OnlineServices::UserInfo::ExternalUserInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYEXTERNALUSERINFOBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyUserInfo(::Epic::OnlineServices::UserInfo::CopyUserInfoOptions* a1, ::Epic::OnlineServices::UserInfo::UserInfoData*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyUserInfoOptions*, ::Epic::OnlineServices::UserInfo::UserInfoData*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_COPYUSERINFO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetExternalUserInfoCount(::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_GETEXTERNALUSERINFOCOUNT_OFFSET))(this, a1);
		}

		::System::Void QueryUserInfo(::Epic::OnlineServices::UserInfo::QueryUserInfoOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoOptions*, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryUserInfoByDisplayName(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions*, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFOBYDISPLAYNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryUserInfoByExternalAccount(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions*, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_QUERYUSERINFOBYEXTERNALACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnQueryUserInfoByDisplayNameCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryUserInfoByExternalAccountCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryUserInfoCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFOINTERFACE_ONQUERYUSERINFOCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
