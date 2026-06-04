#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/LoginStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class AddNotifyAuthExpirationOptions; }
namespace Epic::OnlineServices::Connect { class AddNotifyLoginStatusChangedOptions; }
namespace Epic::OnlineServices::Connect { class CopyIdTokenOptions; }
namespace Epic::OnlineServices::Connect { class CopyProductUserExternalAccountByAccountIdOptions; }
namespace Epic::OnlineServices::Connect { class CopyProductUserExternalAccountByAccountTypeOptions; }
namespace Epic::OnlineServices::Connect { class CopyProductUserExternalAccountByIndexOptions; }
namespace Epic::OnlineServices::Connect { class CopyProductUserInfoOptions; }
namespace Epic::OnlineServices::Connect { class CreateDeviceIdOptions; }
namespace Epic::OnlineServices::Connect { class CreateUserOptions; }
namespace Epic::OnlineServices::Connect { class DeleteDeviceIdOptions; }
namespace Epic::OnlineServices::Connect { class ExternalAccountInfo; }
namespace Epic::OnlineServices::Connect { class GetExternalAccountMappingsOptions; }
namespace Epic::OnlineServices::Connect { class GetProductUserExternalAccountCountOptions; }
namespace Epic::OnlineServices::Connect { class GetProductUserIdMappingOptions; }
namespace Epic::OnlineServices::Connect { class IdToken; }
namespace Epic::OnlineServices::Connect { class LinkAccountOptions; }
namespace Epic::OnlineServices::Connect { class LoginOptions; }
namespace Epic::OnlineServices::Connect { class OnAuthExpirationCallback; }
namespace Epic::OnlineServices::Connect { class OnCreateDeviceIdCallback; }
namespace Epic::OnlineServices::Connect { class OnCreateUserCallback; }
namespace Epic::OnlineServices::Connect { class OnDeleteDeviceIdCallback; }
namespace Epic::OnlineServices::Connect { class OnLinkAccountCallback; }
namespace Epic::OnlineServices::Connect { class OnLoginCallback; }
namespace Epic::OnlineServices::Connect { class OnLoginStatusChangedCallback; }
namespace Epic::OnlineServices::Connect { class OnQueryExternalAccountMappingsCallback; }
namespace Epic::OnlineServices::Connect { class OnQueryProductUserIdMappingsCallback; }
namespace Epic::OnlineServices::Connect { class OnTransferDeviceIdAccountCallback; }
namespace Epic::OnlineServices::Connect { class OnUnlinkAccountCallback; }
namespace Epic::OnlineServices::Connect { class OnVerifyIdTokenCallback; }
namespace Epic::OnlineServices::Connect { class QueryExternalAccountMappingsOptions; }
namespace Epic::OnlineServices::Connect { class QueryProductUserIdMappingsOptions; }
namespace Epic::OnlineServices::Connect { class TransferDeviceIdAccountOptions; }
namespace Epic::OnlineServices::Connect { class UnlinkAccountOptions; }
namespace Epic::OnlineServices::Connect { class VerifyIdTokenOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ADDNOTIFYAUTHEXPIRATION_OFFSET UNITYSDK_OFFSET(0xA298590)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ADDNOTIFYLOGINSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA298840)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYIDTOKEN_OFFSET UNITYSDK_OFFSET(0xA298AF0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA298D60)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xA298F60)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0xA2991F0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSERINFO_OFFSET UNITYSDK_OFFSET(0xA299480)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_CREATEDEVICEID_OFFSET UNITYSDK_OFFSET(0xA2996F0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_CREATEUSER_OFFSET UNITYSDK_OFFSET(0xA299960)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_DELETEDEVICEID_OFFSET UNITYSDK_OFFSET(0xA299BD0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETEXTERNALACCOUNTMAPPING_OFFSET UNITYSDK_OFFSET(0xA299E70)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGGEDINUSERBYINDEX_OFFSET UNITYSDK_OFFSET(0xA299FD0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGGEDINUSERSCOUNT_OFFSET UNITYSDK_OFFSET(0xA29A0C0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGINSTATUS_OFFSET UNITYSDK_OFFSET(0xA29A140)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETPRODUCTUSEREXTERNALACCOUNTCOUNT_OFFSET UNITYSDK_OFFSET(0xA29A2A0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETPRODUCTUSERIDMAPPING_OFFSET UNITYSDK_OFFSET(0xA29A4A0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_LINKACCOUNT_OFFSET UNITYSDK_OFFSET(0xA29A750)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0xA29A930)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONAUTHEXPIRATIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA297DF0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONCREATEDEVICEIDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA297E90)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONCREATEUSERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA297F30)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONDELETEDEVICEIDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA297FD0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA298070)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLOGINCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA298110)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLOGINSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2981B0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONQUERYEXTERNALACCOUNTMAPPINGSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA298250)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2982F0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONTRANSFERDEVICEIDACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA298390)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONUNLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA298430)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONVERIFYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2984D0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_QUERYEXTERNALACCOUNTMAPPINGS_OFFSET UNITYSDK_OFFSET(0xA29AB10)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_QUERYPRODUCTUSERIDMAPPINGS_OFFSET UNITYSDK_OFFSET(0xA29ACF0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_REMOVENOTIFYAUTHEXPIRATION_OFFSET UNITYSDK_OFFSET(0xA29AED0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_REMOVENOTIFYLOGINSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA29AFB0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_TRANSFERDEVICEIDACCOUNT_OFFSET UNITYSDK_OFFSET(0xA29B090)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_UNLINKACCOUNT_OFFSET UNITYSDK_OFFSET(0xA29B270)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_VERIFYIDTOKEN_OFFSET UNITYSDK_OFFSET(0xA29B4E0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA298580)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA298570)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int ConnectInterface_TypeDefinitionIndex = 43064;

	class ConnectInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifyauthexpirationApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyloginstatuschangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyidtokenApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyproductuserexternalaccountbyaccountidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyproductuserexternalaccountbyaccounttypeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyproductuserexternalaccountbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyproductuserinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CreatedeviceidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CreatedeviceidDevicemodelMaxLength = 0x40; // 0x0
		// static const ::System::Int32 CreateuserApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CredentialsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DeletedeviceidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ExternalAccountIdMaxLength = 0x100; // 0x0
		// static const ::System::Int32 ExternalaccountinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetexternalaccountmappingApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetexternalaccountmappingsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetproductuserexternalaccountcountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetproductuseridmappingApiLatest = 0x1; // 0x0
		// static const ::System::Int32 IdtokenApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LinkaccountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LoginApiLatest = 0x2; // 0x0
		// static const ::System::Int32 OnauthexpirationcallbackApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryexternalaccountmappingsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryexternalaccountmappingsMaxAccountIds = 0x80; // 0x0
		// static const ::System::Int32 QueryproductuseridmappingsApiLatest = 0x2; // 0x0
		// static const ::System::Int32 TimeUndefined = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 TransferdeviceidaccountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnlinkaccountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UserlogininfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UserlogininfoDisplaynameMaxLength = 0x20; // 0x0
		// static const ::System::Int32 VerifyidtokenApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyAuthExpiration(::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnAuthExpirationCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnAuthExpirationCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ADDNOTIFYAUTHEXPIRATION_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyLoginStatusChanged(::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ADDNOTIFYLOGINSTATUSCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result CopyIdToken(::Epic::OnlineServices::Connect::CopyIdTokenOptions* a1, ::Epic::OnlineServices::Connect::IdToken*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyIdTokenOptions*, ::Epic::OnlineServices::Connect::IdToken*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYIDTOKEN_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyProductUserExternalAccountByAccountId(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions* a1, ::Epic::OnlineServices::Connect::ExternalAccountInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions*, ::Epic::OnlineServices::Connect::ExternalAccountInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyProductUserExternalAccountByAccountType(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions* a1, ::Epic::OnlineServices::Connect::ExternalAccountInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions*, ::Epic::OnlineServices::Connect::ExternalAccountInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyProductUserExternalAccountByIndex(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions* a1, ::Epic::OnlineServices::Connect::ExternalAccountInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions*, ::Epic::OnlineServices::Connect::ExternalAccountInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyProductUserInfo(::Epic::OnlineServices::Connect::CopyProductUserInfoOptions* a1, ::Epic::OnlineServices::Connect::ExternalAccountInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserInfoOptions*, ::Epic::OnlineServices::Connect::ExternalAccountInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void CreateDeviceId(::Epic::OnlineServices::Connect::CreateDeviceIdOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateDeviceIdOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_CREATEDEVICEID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreateUser(::Epic::OnlineServices::Connect::CreateUserOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnCreateUserCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateUserOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnCreateUserCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_CREATEUSER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteDeviceId(::Epic::OnlineServices::Connect::DeleteDeviceIdOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::DeleteDeviceIdOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_DELETEDEVICEID_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::ProductUserId* GetExternalAccountMapping(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions* a1)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETEXTERNALACCOUNTMAPPING_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* GetLoggedInUserByIndex(::System::Int32 a1)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGGEDINUSERBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetLoggedInUsersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGGEDINUSERSCOUNT_OFFSET))(this);
		}

		::Epic::OnlineServices::LoginStatus GetLoginStatus(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGINSTATUS_OFFSET))(this, a1);
		}

		::System::UInt32 GetProductUserExternalAccountCount(::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETPRODUCTUSEREXTERNALACCOUNTCOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result GetProductUserIdMapping(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions* a1, ::System::String*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETPRODUCTUSERIDMAPPING_OFFSET))(this, a1, a2);
		}

		::System::Void LinkAccount(::Epic::OnlineServices::Connect::LinkAccountOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnLinkAccountCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LinkAccountOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnLinkAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_LINKACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Login(::Epic::OnlineServices::Connect::LoginOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnLoginCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LoginOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnLoginCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_LOGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryExternalAccountMappings(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_QUERYEXTERNALACCOUNTMAPPINGS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryProductUserIdMappings(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_QUERYPRODUCTUSERIDMAPPINGS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyAuthExpiration(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_REMOVENOTIFYAUTHEXPIRATION_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyLoginStatusChanged(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_REMOVENOTIFYLOGINSTATUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void TransferDeviceIdAccount(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_TRANSFERDEVICEIDACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnlinkAccount(::Epic::OnlineServices::Connect::UnlinkAccountOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnUnlinkAccountCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UnlinkAccountOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnUnlinkAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_UNLINKACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void VerifyIdToken(::Epic::OnlineServices::Connect::VerifyIdTokenOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::VerifyIdTokenOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_VERIFYIDTOKEN_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnAuthExpirationCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONAUTHEXPIRATIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnCreateDeviceIdCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONCREATEDEVICEIDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnCreateUserCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONCREATEUSERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnDeleteDeviceIdCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONDELETEDEVICEIDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLinkAccountCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLoginCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLOGINCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLoginStatusChangedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLOGINSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryExternalAccountMappingsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONQUERYEXTERNALACCOUNTMAPPINGSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryProductUserIdMappingsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnTransferDeviceIdAccountCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONTRANSFERDEVICEIDACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUnlinkAccountCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONUNLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnVerifyIdTokenCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONVERIFYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
