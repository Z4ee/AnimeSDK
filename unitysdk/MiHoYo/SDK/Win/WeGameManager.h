#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class WeGameManager_WeGameAntiAddictionDelegate; }
namespace MiHoYo::SDK::Win { class WeGameManager_WeGameExitDelegate; }
namespace MiHoYo::SDK::Win { class WeGameSessionTicketModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ADD_WEGAMEANTIADDICTIONEVENT_OFFSET UNITYSDK_OFFSET(0x15EA3110)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ADD_WEGAMEEXITEVENT_OFFSET UNITYSDK_OFFSET(0x15EA3010)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15EA3380)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x15EA32D0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_CREATORDER_OFFSET UNITYSDK_OFFSET(0x15EA3B80)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x15EA5990)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x15EA3580)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15EA3210)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x15EA3610)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EA5750)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x15EA5210)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15EA3480)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONGETWEGAMESESSIONTICKET_OFFSET UNITYSDK_OFFSET(0x15EA5AA0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x15EA5950)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x15EA3B70)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x15EA5970)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONWEGAMEANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x15EA5C60)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONWEGAMEEXIT_OFFSET UNITYSDK_OFFSET(0x15EA61C0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x15EA36C0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_REMOVE_WEGAMEANTIADDICTIONEVENT_OFFSET UNITYSDK_OFFSET(0x15EA3190)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_REMOVE_WEGAMEEXITEVENT_OFFSET UNITYSDK_OFFSET(0x15EA3090)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_SETNOTIFYWINDOWENABLE_OFFSET UNITYSDK_OFFSET(0x15EA3590)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_START_OFFSET UNITYSDK_OFFSET(0x15EA3400)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15EA3500)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA64C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_TypeDefinitionIndex = 8084;

	class WeGameManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Win::WeGameManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Win::WeGameManager**)Il2CppClass::FromTypeDefinitionIndex(WeGameManager_TypeDefinitionIndex)->GetStaticField(0x17AE0);
		}
		::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate* WeGameExitEvent; // 0x18
		::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate* WeGameAntiAddictionEvent; // 0x20
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* loginCallback; // 0x28
		::System::Action_1<::System::String*>* payCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void add_WeGameExitEvent(::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ADD_WEGAMEEXITEVENT_OFFSET))(this, value);
		}

		::System::Void remove_WeGameExitEvent(::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_REMOVE_WEGAMEEXITEVENT_OFFSET))(this, value);
		}

		::System::Void add_WeGameAntiAddictionEvent(::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ADD_WEGAMEANTIADDICTIONEVENT_OFFSET))(this, value);
		}

		::System::Void remove_WeGameAntiAddictionEvent(::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_REMOVE_WEGAMEANTIADDICTIONEVENT_OFFSET))(this, value);
		}

		static ::MiHoYo::SDK::Win::WeGameManager* Instance()
		{
			return ((::MiHoYo::SDK::Win::WeGameManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_INSTANCE_OFFSET))();
		}

		static ::System::Boolean CheckChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_CHECKCHANNEL_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void SetNotifyWindowEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_SETNOTIFYWINDOWENABLE_OFFSET))(this, enable);
		}

		::System::Void Login(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void CreatOrder(::MiHoYo::SDK::JSONNode* payInfo, ::MiHoYo::SDK::JSONNode* specialInfo, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_CREATORDER_OFFSET))(this, payInfo, specialInfo, callback);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONCREATEORDER_OFFSET))(this, response);
		}

		static ::System::Void OnPayFail(::System::Action_1<::System::String*>* callback, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYFAIL_OFFSET))(callback, msg);
		}

		static ::System::Void OnPayCancel(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYCANCEL_OFFSET))(callback);
		}

		static ::System::Void OnPaySuccess(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYSUCCESS_OFFSET))(callback);
		}

		static ::System::Void OnCallback(::System::Int32 ret, ::System::String* msg, ::System::Action_1<::System::String*>* callback, ::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONCALLBACK_OFFSET))(ret, msg, callback, data);
		}

		static ::System::Void HandleLoginFlowNotification(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>* responseModel)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET))(responseModel);
		}

		::System::Void OnGetWeGameSessionTicket(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONGETWEGAMESESSIONTICKET_OFFSET))(this, responseModel);
		}

		::System::Void OnWeGameAntiAddiction(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONWEGAMEANTIADDICTION_OFFSET))(this, responseString);
		}

		::System::Void OnWeGameExit(::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONWEGAMEEXIT_OFFSET))(this, code);
		}
	};
}
