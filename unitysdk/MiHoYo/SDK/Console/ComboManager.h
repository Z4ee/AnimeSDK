#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x17421780)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x174218D0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUTWITHGAMENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x17422310)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x17421F50)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x17421F40)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x174234A0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x17423610)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONGETPING_OFFSET UNITYSDK_OFFSET(0x17424EF0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONMDKLOGIN_OFFSET UNITYSDK_OFFSET(0x17422740)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_PING_OFFSET UNITYSDK_OFFSET(0x17424C80)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_REQUESTPING_OFFSET UNITYSDK_OFFSET(0x17424CF0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_REQUESTREDPOINT_OFFSET UNITYSDK_OFFSET(0x174255D0)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_SIGNCOMBOBODY_OFFSET UNITYSDK_OFFSET(0x17422D90)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_STOPPING_OFFSET UNITYSDK_OFFSET(0x17424E20)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x17422500)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17425710)
#define MIHOYO_SDK_CONSOLE_COMBOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17425700)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ComboManager_TypeDefinitionIndex = 7725;

	class ComboManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::ComboManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ComboManager**)Il2CppClass::FromTypeDefinitionIndex(ComboManager_TypeDefinitionIndex)->GetStaticField(0x17730);
		}
		// static const ::System::Single MinPingTime; // 0x0
		::System::Action_1<::System::String*>* comboLoginCallback; // 0x10
		::UnityEngine::Coroutine* pingCoroutine; // 0x18
		::System::Int64 totalTime; // 0x20
		::System::Single pingTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Logout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUT_OFFSET))(this, callback);
		}

		::System::Void LogoutWithGameNotification(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUTWITHGAMENOTIFICATION_OFFSET))(this, callback);
		}

		::System::Void LogoutWithoutConfirm(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, callback);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_SWITCHROLE_OFFSET))(this, callback);
		}

		::System::Void OnMDKLogin(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::AccountModel* mdkUserData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONMDKLOGIN_OFFSET))(this, ret, msg, mdkUserData);
		}

		::System::Void OnComboLogin(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONCOMBOLOGIN_OFFSET))(this, response);
		}

		::System::Void OnComboLoginCallback(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::JSONNode* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET))(this, ret, msg, response);
		}

		::System::String* SignComboBody(::MiHoYo::SDK::JSONObject* content, ::System::String* secret)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_SIGNCOMBOBODY_OFFSET))(this, content, secret);
		}

		::System::Void Ping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_PING_OFFSET))(this);
		}

		::System::Void StopPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_STOPPING_OFFSET))(this);
		}

		::System::Void RequestPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_REQUESTPING_OFFSET))(this);
		}

		::System::Void OnGetPing(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_ONGETPING_OFFSET))(this, response);
		}

		::System::Void RequestRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_COMBOMANAGER_REQUESTREDPOINT_OFFSET))(this);
		}
	};
}
