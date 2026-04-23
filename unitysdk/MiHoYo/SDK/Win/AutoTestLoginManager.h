#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_COMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x176ADB80)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_COMBOLOGOUT_OFFSET UNITYSDK_OFFSET(0x176ADE50)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x176ADC90)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x176ADF60)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_ONCOMBOLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x176AD4C0)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_REQUESTCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x176AD340)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_SETLOGINACCOUNT_OFFSET UNITYSDK_OFFSET(0x176AE590)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x176AEA00)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x176AE9D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AutoTestLoginManager_TypeDefinitionIndex = 8021;

	class AutoTestLoginManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::AutoTestLoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::AutoTestLoginManager**)Il2CppClass::FromTypeDefinitionIndex(AutoTestLoginManager_TypeDefinitionIndex)->GetStaticField(0x26FE0);
		}
		::System::String* accountAutoTest; // 0x10
		::System::String* passwordAutoTest; // 0x18
		::System::Int32 tokenType; // 0x20
		::System::Boolean isAutoTest; // 0x24
		::System::Boolean isLoginRequest; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER__CCTOR_OFFSET))();
		}

		::System::Void RequestComboLogin(::System::String* body, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_REQUESTCOMBOLOGIN_OFFSET))(this, body, callback);
		}

		::System::Void OnComboLoginCallback(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* response, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_ONCOMBOLOGINCALLBACK_OFFSET))(this, response, callback);
		}

		::System::Void ComboLogin(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_COMBOLOGIN_OFFSET))(this, callback);
		}

		::System::Void ComboLogout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_COMBOLOGOUT_OFFSET))(this, callback);
		}

		::System::Void Login(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Logout(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_LOGOUT_OFFSET))(this, callback);
		}

		::System::Void SetLoginAccount(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER_SETLOGINACCOUNT_OFFSET))(this, jsonString);
		}
	};
}
