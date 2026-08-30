#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_LOGINMANAGER_CHECKANDSHOWCHANNELPRECOMBOLOGINPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1BA36520)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_CREATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA36A30)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BA358D0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x1BA35B00)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1BA35A00)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_ONLOGIN_OFFSET UNITYSDK_OFFSET(0x1BA36720)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_REFRESHACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1BA36390)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_REQUESTLOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x1BA35E30)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_SHOWLOGINSTATEINVALID_OFFSET UNITYSDK_OFFSET(0x1BA361B0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1BA35C00)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA36AB0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA36AA0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 8647;

	class LoginManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::LoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::LoginManager**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0x219E0);
		}
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* loginCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Login(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGIN_OFFSET))(this, a1);
		}

		::System::Void Logout(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGOUT_OFFSET))(this, a1);
		}

		::System::Void LogoutWithoutConfirm(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, a1);
		}

		::System::Void SwitchRole(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_SWITCHROLE_OFFSET))(this, a1);
		}

		::System::Void RequestLoginByAuthTicket(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_REQUESTLOGINBYAUTHTICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowLoginStateInvalid(::System::String* a1, ::MiHoYo::SDK::ReportType a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ReportType, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_SHOWLOGINSTATEINVALID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshAccountInfo(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_REFRESHACCOUNTINFO_OFFSET))(this, a1);
		}

		::System::Boolean CheckAndShowChannelPreComboLoginProtocol(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_CHECKANDSHOWCHANNELPRECOMBOLOGINPROTOCOL_OFFSET))(this, a1, a2);
		}

		::System::Void OnLogin(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_ONLOGIN_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* CreateCallback(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER_CREATECALLBACK_OFFSET))(this, a1, a2, a3);
		}
	};
}
