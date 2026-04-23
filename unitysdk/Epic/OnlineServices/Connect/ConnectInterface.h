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

#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ADDNOTIFYAUTHEXPIRATION_OFFSET UNITYSDK_OFFSET(0x8E3EC90)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ADDNOTIFYLOGINSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x8E3EF10)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYIDTOKEN_OFFSET UNITYSDK_OFFSET(0x8E3F190)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTID_OFFSET UNITYSDK_OFFSET(0x8E3F400)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x8E3F600)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E3F890)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSERINFO_OFFSET UNITYSDK_OFFSET(0x8E3FB20)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_CREATEDEVICEID_OFFSET UNITYSDK_OFFSET(0x8E3FD90)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_CREATEUSER_OFFSET UNITYSDK_OFFSET(0x8E3FFE0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_DELETEDEVICEID_OFFSET UNITYSDK_OFFSET(0x8E40230)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETEXTERNALACCOUNTMAPPING_OFFSET UNITYSDK_OFFSET(0x8E404A0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGGEDINUSERBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E40600)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGGEDINUSERSCOUNT_OFFSET UNITYSDK_OFFSET(0x8E406F0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGINSTATUS_OFFSET UNITYSDK_OFFSET(0x8E40770)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETPRODUCTUSEREXTERNALACCOUNTCOUNT_OFFSET UNITYSDK_OFFSET(0x8E408D0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETPRODUCTUSERIDMAPPING_OFFSET UNITYSDK_OFFSET(0x8E40AD0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_LINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x8E40D90)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0x8E40F50)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONAUTHEXPIRATIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3E5B0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONCREATEDEVICEIDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3E640)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONCREATEUSERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3E6D0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONDELETEDEVICEIDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3E760)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3E7F0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLOGINCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3E880)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLOGINSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3E910)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONQUERYEXTERNALACCOUNTMAPPINGSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3E9A0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3EA30)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONTRANSFERDEVICEIDACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3EAC0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONUNLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3EB50)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONVERIFYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E3EBE0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_QUERYEXTERNALACCOUNTMAPPINGS_OFFSET UNITYSDK_OFFSET(0x8E41110)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_QUERYPRODUCTUSERIDMAPPINGS_OFFSET UNITYSDK_OFFSET(0x8E412D0)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_REMOVENOTIFYAUTHEXPIRATION_OFFSET UNITYSDK_OFFSET(0x8E41490)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_REMOVENOTIFYLOGINSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x8E41570)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_TRANSFERDEVICEIDACCOUNT_OFFSET UNITYSDK_OFFSET(0x8E41650)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_UNLINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x8E41810)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_VERIFYIDTOKEN_OFFSET UNITYSDK_OFFSET(0x8E41A60)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8E3EC80)
#define EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E3EC70)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int ConnectInterface_TypeDefinitionIndex = 42261;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyAuthExpiration(::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnAuthExpirationCallback* notification)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnAuthExpirationCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ADDNOTIFYAUTHEXPIRATION_OFFSET))(this, options, clientData, notification);
		}

		::System::UInt64 AddNotifyLoginStatusChanged(::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback* notification)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ADDNOTIFYLOGINSTATUSCHANGED_OFFSET))(this, options, clientData, notification);
		}

		::Epic::OnlineServices::Result CopyIdToken(::Epic::OnlineServices::Connect::CopyIdTokenOptions* options, ::Epic::OnlineServices::Connect::IdToken*& outIdToken)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyIdTokenOptions*, ::Epic::OnlineServices::Connect::IdToken*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYIDTOKEN_OFFSET))(this, options, outIdToken);
		}

		::Epic::OnlineServices::Result CopyProductUserExternalAccountByAccountId(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions* options, ::Epic::OnlineServices::Connect::ExternalAccountInfo*& outExternalAccountInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions*, ::Epic::OnlineServices::Connect::ExternalAccountInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTID_OFFSET))(this, options, outExternalAccountInfo);
		}

		::Epic::OnlineServices::Result CopyProductUserExternalAccountByAccountType(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions* options, ::Epic::OnlineServices::Connect::ExternalAccountInfo*& outExternalAccountInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions*, ::Epic::OnlineServices::Connect::ExternalAccountInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPE_OFFSET))(this, options, outExternalAccountInfo);
		}

		::Epic::OnlineServices::Result CopyProductUserExternalAccountByIndex(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions* options, ::Epic::OnlineServices::Connect::ExternalAccountInfo*& outExternalAccountInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions*, ::Epic::OnlineServices::Connect::ExternalAccountInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEX_OFFSET))(this, options, outExternalAccountInfo);
		}

		::Epic::OnlineServices::Result CopyProductUserInfo(::Epic::OnlineServices::Connect::CopyProductUserInfoOptions* options, ::Epic::OnlineServices::Connect::ExternalAccountInfo*& outExternalAccountInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserInfoOptions*, ::Epic::OnlineServices::Connect::ExternalAccountInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_COPYPRODUCTUSERINFO_OFFSET))(this, options, outExternalAccountInfo);
		}

		::System::Void CreateDeviceId(::Epic::OnlineServices::Connect::CreateDeviceIdOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateDeviceIdOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_CREATEDEVICEID_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void CreateUser(::Epic::OnlineServices::Connect::CreateUserOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnCreateUserCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateUserOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnCreateUserCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_CREATEUSER_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void DeleteDeviceId(::Epic::OnlineServices::Connect::DeleteDeviceIdOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::DeleteDeviceIdOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_DELETEDEVICEID_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::ProductUserId* GetExternalAccountMapping(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions* options)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETEXTERNALACCOUNTMAPPING_OFFSET))(this, options);
		}

		::Epic::OnlineServices::ProductUserId* GetLoggedInUserByIndex(::System::Int32 index)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGGEDINUSERBYINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetLoggedInUsersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGGEDINUSERSCOUNT_OFFSET))(this);
		}

		::Epic::OnlineServices::LoginStatus GetLoginStatus(::Epic::OnlineServices::ProductUserId* localUserId)
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETLOGINSTATUS_OFFSET))(this, localUserId);
		}

		::System::UInt32 GetProductUserExternalAccountCount(::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETPRODUCTUSEREXTERNALACCOUNTCOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result GetProductUserIdMapping(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions* options, ::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_GETPRODUCTUSERIDMAPPING_OFFSET))(this, options, outBuffer);
		}

		::System::Void LinkAccount(::Epic::OnlineServices::Connect::LinkAccountOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnLinkAccountCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LinkAccountOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnLinkAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_LINKACCOUNT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void Login(::Epic::OnlineServices::Connect::LoginOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnLoginCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LoginOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnLoginCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_LOGIN_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryExternalAccountMappings(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_QUERYEXTERNALACCOUNTMAPPINGS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryProductUserIdMappings(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_QUERYPRODUCTUSERIDMAPPINGS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyAuthExpiration(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_REMOVENOTIFYAUTHEXPIRATION_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyLoginStatusChanged(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_REMOVENOTIFYLOGINSTATUSCHANGED_OFFSET))(this, inId);
		}

		::System::Void TransferDeviceIdAccount(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_TRANSFERDEVICEIDACCOUNT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void UnlinkAccount(::Epic::OnlineServices::Connect::UnlinkAccountOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnUnlinkAccountCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UnlinkAccountOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnUnlinkAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_UNLINKACCOUNT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void VerifyIdToken(::Epic::OnlineServices::Connect::VerifyIdTokenOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::VerifyIdTokenOptions*, ::System::Object*, ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_VERIFYIDTOKEN_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnAuthExpirationCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONAUTHEXPIRATIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnCreateDeviceIdCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONCREATEDEVICEIDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnCreateUserCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONCREATEUSERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnDeleteDeviceIdCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONDELETEDEVICEIDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLinkAccountCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLoginCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLOGINCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLoginStatusChangedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONLOGINSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryExternalAccountMappingsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONQUERYEXTERNALACCOUNTMAPPINGSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryProductUserIdMappingsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONQUERYPRODUCTUSERIDMAPPINGSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnTransferDeviceIdAccountCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONTRANSFERDEVICEIDACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUnlinkAccountCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONUNLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnVerifyIdTokenCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CONNECTINTERFACE_ONVERIFYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
