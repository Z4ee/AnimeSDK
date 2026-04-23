#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/LoginStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class AddNotifyLoginStatusChangedOptions; }
namespace Epic::OnlineServices::Auth { class CopyIdTokenOptions; }
namespace Epic::OnlineServices::Auth { class CopyUserAuthTokenOptions; }
namespace Epic::OnlineServices::Auth { class DeletePersistentAuthOptions; }
namespace Epic::OnlineServices::Auth { class IOSLoginOptions; }
namespace Epic::OnlineServices::Auth { class IdToken; }
namespace Epic::OnlineServices::Auth { class LinkAccountOptions; }
namespace Epic::OnlineServices::Auth { class LoginOptions; }
namespace Epic::OnlineServices::Auth { class LogoutOptions; }
namespace Epic::OnlineServices::Auth { class OnDeletePersistentAuthCallback; }
namespace Epic::OnlineServices::Auth { class OnLinkAccountCallback; }
namespace Epic::OnlineServices::Auth { class OnLoginCallback; }
namespace Epic::OnlineServices::Auth { class OnLoginStatusChangedCallback; }
namespace Epic::OnlineServices::Auth { class OnLogoutCallback; }
namespace Epic::OnlineServices::Auth { class OnQueryIdTokenCallback; }
namespace Epic::OnlineServices::Auth { class OnVerifyIdTokenCallback; }
namespace Epic::OnlineServices::Auth { class OnVerifyUserAuthCallback; }
namespace Epic::OnlineServices::Auth { class QueryIdTokenOptions; }
namespace Epic::OnlineServices::Auth { class Token; }
namespace Epic::OnlineServices::Auth { class VerifyIdTokenOptions; }
namespace Epic::OnlineServices::Auth { class VerifyUserAuthOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ADDNOTIFYLOGINSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x8BBE510)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_COPYIDTOKEN_OFFSET UNITYSDK_OFFSET(0x8BBE790)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_COPYUSERAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x8BBEA00)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_DELETEPERSISTENTAUTH_OFFSET UNITYSDK_OFFSET(0x8BBED10)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGGEDINACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x8BBEF60)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGGEDINACCOUNTSCOUNT_OFFSET UNITYSDK_OFFSET(0x8BBF050)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGINSTATUS_OFFSET UNITYSDK_OFFSET(0x8BBF0D0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETMERGEDACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x8BBF230)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETMERGEDACCOUNTSCOUNT_OFFSET UNITYSDK_OFFSET(0x8BBF3C0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETSELECTEDACCOUNTID_OFFSET UNITYSDK_OFFSET(0x8BBF520)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x8BBF670)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGIN_1_OFFSET UNITYSDK_OFFSET(0x8BC0320)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0x8BBF830)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x8BBFAB0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONDELETEPERSISTENTAUTHCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BBE070)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BBE100)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGINCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BBE190)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGINSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BBE220)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGOUTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BBE2B0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONQUERYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BBE340)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONVERIFYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BBE3D0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONVERIFYUSERAUTHCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8BBE460)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_QUERYIDTOKEN_OFFSET UNITYSDK_OFFSET(0x8BBFD00)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_REMOVENOTIFYLOGINSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x8BBFEC0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_VERIFYIDTOKEN_OFFSET UNITYSDK_OFFSET(0x8BBFFA0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_VERIFYUSERAUTH_OFFSET UNITYSDK_OFFSET(0x8BC0160)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8BBE500)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8BBE4F0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AuthInterface_TypeDefinitionIndex = 42356;

	class AuthInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AccountfeaturerestrictedinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyloginstatuschangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyidtokenApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyuserauthtokenApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CredentialsApiLatest = 0x3; // 0x0
		// static const ::System::Int32 DeletepersistentauthApiLatest = 0x2; // 0x0
		// static const ::System::Int32 IdtokenApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LinkaccountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LoginApiLatest = 0x2; // 0x0
		// static const ::System::Int32 LogoutApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PingrantinfoApiLatest = 0x2; // 0x0
		// static const ::System::Int32 QueryidtokenApiLatest = 0x1; // 0x0
		// static const ::System::Int32 TokenApiLatest = 0x2; // 0x0
		// static const ::System::Int32 VerifyidtokenApiLatest = 0x1; // 0x0
		// static const ::System::Int32 VerifyuserauthApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AuthIoscredentialssystemauthcredentialsoptionsApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyLoginStatusChanged(::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback* notification)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ADDNOTIFYLOGINSTATUSCHANGED_OFFSET))(this, options, clientData, notification);
		}

		::Epic::OnlineServices::Result CopyIdToken(::Epic::OnlineServices::Auth::CopyIdTokenOptions* options, ::Epic::OnlineServices::Auth::IdToken*& outIdToken)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Auth::CopyIdTokenOptions*, ::Epic::OnlineServices::Auth::IdToken*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_COPYIDTOKEN_OFFSET))(this, options, outIdToken);
		}

		::Epic::OnlineServices::Result CopyUserAuthToken(::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions* options, ::Epic::OnlineServices::EpicAccountId* localUserId, ::Epic::OnlineServices::Auth::Token*& outUserAuthToken)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions*, ::Epic::OnlineServices::EpicAccountId*, ::Epic::OnlineServices::Auth::Token*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_COPYUSERAUTHTOKEN_OFFSET))(this, options, localUserId, outUserAuthToken);
		}

		::System::Void DeletePersistentAuth(::Epic::OnlineServices::Auth::DeletePersistentAuthOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::DeletePersistentAuthOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_DELETEPERSISTENTAUTH_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::EpicAccountId* GetLoggedInAccountByIndex(::System::Int32 index)
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGGEDINACCOUNTBYINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetLoggedInAccountsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGGEDINACCOUNTSCOUNT_OFFSET))(this);
		}

		::Epic::OnlineServices::LoginStatus GetLoginStatus(::Epic::OnlineServices::EpicAccountId* localUserId)
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGINSTATUS_OFFSET))(this, localUserId);
		}

		::Epic::OnlineServices::EpicAccountId* GetMergedAccountByIndex(::Epic::OnlineServices::EpicAccountId* localUserId, ::System::UInt32 index)
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETMERGEDACCOUNTBYINDEX_OFFSET))(this, localUserId, index);
		}

		::System::UInt32 GetMergedAccountsCount(::Epic::OnlineServices::EpicAccountId* localUserId)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETMERGEDACCOUNTSCOUNT_OFFSET))(this, localUserId);
		}

		::Epic::OnlineServices::Result GetSelectedAccountId(::Epic::OnlineServices::EpicAccountId* localUserId, ::Epic::OnlineServices::EpicAccountId*& outSelectedAccountId)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*, ::Epic::OnlineServices::EpicAccountId*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETSELECTEDACCOUNTID_OFFSET))(this, localUserId, outSelectedAccountId);
		}

		::System::Void LinkAccount(::Epic::OnlineServices::Auth::LinkAccountOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnLinkAccountCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LinkAccountOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLinkAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LINKACCOUNT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void Login(::Epic::OnlineServices::Auth::LoginOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnLoginCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLoginCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGIN_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void Logout(::Epic::OnlineServices::Auth::LogoutOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnLogoutCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LogoutOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLogoutCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGOUT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryIdToken(::Epic::OnlineServices::Auth::QueryIdTokenOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::QueryIdTokenOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_QUERYIDTOKEN_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyLoginStatusChanged(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_REMOVENOTIFYLOGINSTATUSCHANGED_OFFSET))(this, inId);
		}

		::System::Void VerifyIdToken(::Epic::OnlineServices::Auth::VerifyIdTokenOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyIdTokenOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_VERIFYIDTOKEN_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void VerifyUserAuth(::Epic::OnlineServices::Auth::VerifyUserAuthOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyUserAuthOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_VERIFYUSERAUTH_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnDeletePersistentAuthCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONDELETEPERSISTENTAUTHCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLinkAccountCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLoginCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGINCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLoginStatusChangedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGINSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLogoutCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGOUTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryIdTokenCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONQUERYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnVerifyIdTokenCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONVERIFYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnVerifyUserAuthCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONVERIFYUSERAUTHCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		::System::Void Login_1(::Epic::OnlineServices::Auth::IOSLoginOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Auth::OnLoginCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSLoginOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLoginCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGIN_1_OFFSET))(this, options, clientData, completionDelegate);
		}
	};
}
