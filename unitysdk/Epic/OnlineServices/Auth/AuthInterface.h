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

#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ADDNOTIFYLOGINSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C21DD20)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_COPYIDTOKEN_OFFSET UNITYSDK_OFFSET(0x1C21DFD0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_COPYUSERAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1C21E240)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_DELETEPERSISTENTAUTH_OFFSET UNITYSDK_OFFSET(0x1C21E570)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGGEDINACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C21E7E0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGGEDINACCOUNTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1C21E8D0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGINSTATUS_OFFSET UNITYSDK_OFFSET(0x1C21E950)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETMERGEDACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C21EAB0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETMERGEDACCOUNTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1C21EC40)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETSELECTEDACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1C21EDA0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C21EEF0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGIN_1_OFFSET UNITYSDK_OFFSET(0x1C21FD80)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGIN_OFFSET UNITYSDK_OFFSET(0x1C21F0D0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1C21F370)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONDELETEPERSISTENTAUTHCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C21D800)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C21D8A0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGINCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C21D940)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGINSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C21D9E0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGOUTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C21DA80)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONQUERYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C21DB20)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONVERIFYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C21DBC0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONVERIFYUSERAUTHCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1C21DC60)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_QUERYIDTOKEN_OFFSET UNITYSDK_OFFSET(0x1C21F5E0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_REMOVENOTIFYLOGINSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C21F7C0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_VERIFYIDTOKEN_OFFSET UNITYSDK_OFFSET(0x1C21F8A0)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_VERIFYUSERAUTH_OFFSET UNITYSDK_OFFSET(0x1C21FB10)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C21DD10)
#define EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C21DD00)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AuthInterface_TypeDefinitionIndex = 44020;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyLoginStatusChanged(::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ADDNOTIFYLOGINSTATUSCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result CopyIdToken(::Epic::OnlineServices::Auth::CopyIdTokenOptions* a1, ::Epic::OnlineServices::Auth::IdToken*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Auth::CopyIdTokenOptions*, ::Epic::OnlineServices::Auth::IdToken*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_COPYIDTOKEN_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyUserAuthToken(::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions* a1, ::Epic::OnlineServices::EpicAccountId* a2, ::Epic::OnlineServices::Auth::Token*& a3)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions*, ::Epic::OnlineServices::EpicAccountId*, ::Epic::OnlineServices::Auth::Token*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_COPYUSERAUTHTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeletePersistentAuth(::Epic::OnlineServices::Auth::DeletePersistentAuthOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::DeletePersistentAuthOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_DELETEPERSISTENTAUTH_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::EpicAccountId* GetLoggedInAccountByIndex(::System::Int32 a1)
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGGEDINACCOUNTBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetLoggedInAccountsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGGEDINACCOUNTSCOUNT_OFFSET))(this);
		}

		::Epic::OnlineServices::LoginStatus GetLoginStatus(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETLOGINSTATUS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* GetMergedAccountByIndex(::Epic::OnlineServices::EpicAccountId* a1, ::System::UInt32 a2)
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETMERGEDACCOUNTBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetMergedAccountsCount(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETMERGEDACCOUNTSCOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result GetSelectedAccountId(::Epic::OnlineServices::EpicAccountId* a1, ::Epic::OnlineServices::EpicAccountId*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*, ::Epic::OnlineServices::EpicAccountId*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_GETSELECTEDACCOUNTID_OFFSET))(this, a1, a2);
		}

		::System::Void LinkAccount(::Epic::OnlineServices::Auth::LinkAccountOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnLinkAccountCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LinkAccountOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLinkAccountCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LINKACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Login(::Epic::OnlineServices::Auth::LoginOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnLoginCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLoginCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Logout(::Epic::OnlineServices::Auth::LogoutOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnLogoutCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LogoutOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLogoutCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGOUT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryIdToken(::Epic::OnlineServices::Auth::QueryIdTokenOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::QueryIdTokenOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_QUERYIDTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyLoginStatusChanged(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_REMOVENOTIFYLOGINSTATUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void VerifyIdToken(::Epic::OnlineServices::Auth::VerifyIdTokenOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyIdTokenOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_VERIFYIDTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void VerifyUserAuth(::Epic::OnlineServices::Auth::VerifyUserAuthOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyUserAuthOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_VERIFYUSERAUTH_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnDeletePersistentAuthCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONDELETEPERSISTENTAUTHCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLinkAccountCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLINKACCOUNTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLoginCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGINCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLoginStatusChangedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGINSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLogoutCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONLOGOUTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryIdTokenCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONQUERYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnVerifyIdTokenCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONVERIFYIDTOKENCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnVerifyUserAuthCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_ONVERIFYUSERAUTHCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		::System::Void Login_1(::Epic::OnlineServices::Auth::IOSLoginOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Auth::OnLoginCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSLoginOptions*, ::System::Object*, ::Epic::OnlineServices::Auth::OnLoginCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_AUTHINTERFACE_LOGIN_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
