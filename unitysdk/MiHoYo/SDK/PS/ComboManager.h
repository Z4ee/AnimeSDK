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

#define MIHOYO_SDK_PS_COMBOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x15F63D30)
#define MIHOYO_SDK_PS_COMBOMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x15F63D40)
#define MIHOYO_SDK_PS_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x15F64000)
#define MIHOYO_SDK_PS_COMBOMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x15F63FF0)
#define MIHOYO_SDK_PS_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F65340)
#define MIHOYO_SDK_PS_COMBOMANAGER_ONCOMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x15F654B0)
#define MIHOYO_SDK_PS_COMBOMANAGER_ONGETPING_OFFSET UNITYSDK_OFFSET(0x15F664E0)
#define MIHOYO_SDK_PS_COMBOMANAGER_ONMDKLOGIN_OFFSET UNITYSDK_OFFSET(0x15F646B0)
#define MIHOYO_SDK_PS_COMBOMANAGER_PING_OFFSET UNITYSDK_OFFSET(0x15F66270)
#define MIHOYO_SDK_PS_COMBOMANAGER_REQUESTPING_OFFSET UNITYSDK_OFFSET(0x15F662E0)
#define MIHOYO_SDK_PS_COMBOMANAGER_REQUESTREDPOINT_OFFSET UNITYSDK_OFFSET(0x15F66C80)
#define MIHOYO_SDK_PS_COMBOMANAGER_SIGNCOMBOBODY_OFFSET UNITYSDK_OFFSET(0x15F64C30)
#define MIHOYO_SDK_PS_COMBOMANAGER_STOPPING_OFFSET UNITYSDK_OFFSET(0x15F66410)
#define MIHOYO_SDK_PS_COMBOMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x15F64420)
#define MIHOYO_SDK_PS_COMBOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F66DC0)
#define MIHOYO_SDK_PS_COMBOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F66DB0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int ComboManager_TypeDefinitionIndex = 7521;

	class ComboManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::ComboManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::ComboManager**)Il2CppClass::FromTypeDefinitionIndex(ComboManager_TypeDefinitionIndex)->GetStaticField(0x15B10);
		}
		// static const ::System::Single MinPingTime; // 0x0
		::UnityEngine::Coroutine* pingCoroutine; // 0x10
		::System::Action_1<::System::String*>* comboLoginCallback; // 0x18
		::System::Int64 totalTime; // 0x20
		::System::Single pingTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Logout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_LOGOUT_OFFSET))(this, callback);
		}

		::System::Void LogoutWithoutConfirm(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_LOGOUTWITHOUTCONFIRM_OFFSET))(this, callback);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_SWITCHROLE_OFFSET))(this, callback);
		}

		::System::Void OnMDKLogin(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::AccountModel* mdkUserData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_ONMDKLOGIN_OFFSET))(this, ret, msg, mdkUserData);
		}

		::System::Void OnComboLogin(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_ONCOMBOLOGIN_OFFSET))(this, response);
		}

		::System::Void OnComboLoginCallback(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::JSONNode* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_ONCOMBOLOGINCALLBACK_OFFSET))(this, ret, msg, response);
		}

		::System::String* SignComboBody(::MiHoYo::SDK::JSONObject* content, ::System::String* secret)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_SIGNCOMBOBODY_OFFSET))(this, content, secret);
		}

		::System::Void Ping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_PING_OFFSET))(this);
		}

		::System::Void StopPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_STOPPING_OFFSET))(this);
		}

		::System::Void RequestPing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_REQUESTPING_OFFSET))(this);
		}

		::System::Void OnGetPing(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_ONGETPING_OFFSET))(this, response);
		}

		::System::Void RequestRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER_REQUESTREDPOINT_OFFSET))(this);
		}
	};
}
