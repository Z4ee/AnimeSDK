#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }

#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_EXTRATAG_OFFSET UNITYSDK_OFFSET(0xE22B060)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_INBATTLE_OFFSET UNITYSDK_OFFSET(0xE22AFE0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDCHECKCONTINUOUSLOADING_OFFSET UNITYSDK_OFFSET(0xE22B020)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDCHECKWAITINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE22B040)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDWAITMAINPAGE_OFFSET UNITYSDK_OFFSET(0xE22B000)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE22AFA0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_QUEUETAG_OFFSET UNITYSDK_OFFSET(0xE22AF80)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_WINDOW_OFFSET UNITYSDK_OFFSET(0xE22AFC0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_EXTRATAG_OFFSET UNITYSDK_OFFSET(0xE22B070)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_INBATTLE_OFFSET UNITYSDK_OFFSET(0xE22AFF0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDCHECKCONTINUOUSLOADING_OFFSET UNITYSDK_OFFSET(0xE22B030)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDCHECKWAITINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE22B050)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDWAITMAINPAGE_OFFSET UNITYSDK_OFFSET(0xE22B010)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE22AFB0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_QUEUETAG_OFFSET UNITYSDK_OFFSET(0xE22AF90)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_WINDOW_OFFSET UNITYSDK_OFFSET(0xE22AFD0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE22B080)

namespace RPG::Client::Toast
{
	inline static constexpr unsigned int ToastWindowQueueRequest_TypeDefinitionIndex = 78534;

	class ToastWindowQueueRequest : public ::System::Object
	{
	public:
		::System::String* _QueueTag_k__BackingField; // 0x10
		::Sofa::BaseSofaWindow* _Window_k__BackingField; // 0x18
		::System::String* _ExtraTag_k__BackingField; // 0x20
		::System::Boolean _NeedWaitMainPage_k__BackingField; // 0x28
		::System::Boolean _NeedCheckContinuousLoading_k__BackingField; // 0x29
		::System::Boolean _InBattle_k__BackingField; // 0x2A
		::System::Boolean _NeedCheckWaitingPerformance_k__BackingField; // 0x2B
		::System::Int32 _Priority_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST__CTOR_OFFSET))(this);
		}

		::System::String* get_QueueTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_QUEUETAG_OFFSET))(this);
		}

		::System::Void set_QueueTag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_QUEUETAG_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_PRIORITY_OFFSET))(this, a1);
		}

		::Sofa::BaseSofaWindow* get_Window()
		{
			return ((::Sofa::BaseSofaWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_WINDOW_OFFSET))(this);
		}

		::System::Void set_Window(::Sofa::BaseSofaWindow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_WINDOW_OFFSET))(this, a1);
		}

		::System::Boolean get_InBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_INBATTLE_OFFSET))(this);
		}

		::System::Void set_InBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_INBATTLE_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedWaitMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDWAITMAINPAGE_OFFSET))(this);
		}

		::System::Void set_NeedWaitMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDWAITMAINPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedCheckContinuousLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDCHECKCONTINUOUSLOADING_OFFSET))(this);
		}

		::System::Void set_NeedCheckContinuousLoading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDCHECKCONTINUOUSLOADING_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedCheckWaitingPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDCHECKWAITINGPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_NeedCheckWaitingPerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDCHECKWAITINGPERFORMANCE_OFFSET))(this, a1);
		}

		::System::String* get_ExtraTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_EXTRATAG_OFFSET))(this);
		}

		::System::Void set_ExtraTag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_EXTRATAG_OFFSET))(this, a1);
		}
	};
}
