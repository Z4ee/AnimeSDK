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

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ADD_WEGAMEANTIADDICTIONEVENT_OFFSET UNITYSDK_OFFSET(0x182D88D0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ADD_WEGAMEEXITEVENT_OFFSET UNITYSDK_OFFSET(0x182D87D0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x182D8B40)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x182D8A90)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_CREATORDER_OFFSET UNITYSDK_OFFSET(0x182D92C0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x182DB020)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x182D8D80)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x182D89D0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x182D8E10)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x182DAE40)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONCREATEORDER_OFFSET UNITYSDK_OFFSET(0x182DA950)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182D8C60)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONGETWEGAMESESSIONTICKET_OFFSET UNITYSDK_OFFSET(0x182DB130)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYCANCEL_OFFSET UNITYSDK_OFFSET(0x182DAFE0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYFAIL_OFFSET UNITYSDK_OFFSET(0x182D92B0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYSUCCESS_OFFSET UNITYSDK_OFFSET(0x182DB000)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONWEGAMEANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x182DB300)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ONWEGAMEEXIT_OFFSET UNITYSDK_OFFSET(0x182DB330)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x182D8EE0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_REMOVE_WEGAMEANTIADDICTIONEVENT_OFFSET UNITYSDK_OFFSET(0x182D8950)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_REMOVE_WEGAMEEXITEVENT_OFFSET UNITYSDK_OFFSET(0x182D8850)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_SETNOTIFYWINDOWENABLE_OFFSET UNITYSDK_OFFSET(0x182D8D90)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_START_OFFSET UNITYSDK_OFFSET(0x182D8BD0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x182D8CF0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x182DB360)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_TypeDefinitionIndex = 9133;

	class WeGameManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Win::WeGameManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Win::WeGameManager**)Il2CppClass::FromTypeDefinitionIndex(WeGameManager_TypeDefinitionIndex)->GetStaticField(0x830);
		}
		::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate* WeGameExitEvent; // 0x18
		::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate* WeGameAntiAddictionEvent; // 0x20
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* loginCallback; // 0x28
		::System::Action_1<::System::String*>* payCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void add_WeGameExitEvent(::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ADD_WEGAMEEXITEVENT_OFFSET))(this, a1);
		}

		::System::Void remove_WeGameExitEvent(::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::WeGameManager_WeGameExitDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_REMOVE_WEGAMEEXITEVENT_OFFSET))(this, a1);
		}

		::System::Void add_WeGameAntiAddictionEvent(::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ADD_WEGAMEANTIADDICTIONEVENT_OFFSET))(this, a1);
		}

		::System::Void remove_WeGameAntiAddictionEvent(::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::WeGameManager_WeGameAntiAddictionDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_REMOVE_WEGAMEANTIADDICTIONEVENT_OFFSET))(this, a1);
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

		::System::Void SetNotifyWindowEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_SETNOTIFYWINDOWENABLE_OFFSET))(this, a1);
		}

		::System::Void Login(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_LOGIN_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void CreatOrder(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_CREATORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONCREATEORDER_OFFSET))(this, a1);
		}

		static ::System::Void OnPayFail(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYFAIL_OFFSET))(a1, a2);
		}

		static ::System::Void OnPayCancel(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYCANCEL_OFFSET))(a1);
		}

		static ::System::Void OnPaySuccess(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONPAYSUCCESS_OFFSET))(a1);
		}

		static ::System::Void OnCallback(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3, ::MiHoYo::SDK::JSONNode* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HandleLoginFlowNotification(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_HANDLELOGINFLOWNOTIFICATION_OFFSET))(a1);
		}

		::System::Void OnGetWeGameSessionTicket(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONGETWEGAMESESSIONTICKET_OFFSET))(this, a1);
		}

		::System::Void OnWeGameAntiAddiction(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONWEGAMEANTIADDICTION_OFFSET))(this, a1);
		}

		::System::Void OnWeGameExit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ONWEGAMEEXIT_OFFSET))(this, a1);
		}
	};
}
