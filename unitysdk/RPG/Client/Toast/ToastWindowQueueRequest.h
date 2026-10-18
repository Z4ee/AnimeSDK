#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }

#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_EXTRATAG_OFFSET UNITYSDK_OFFSET(0xE2A6040)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_INBATTLE_OFFSET UNITYSDK_OFFSET(0xE2A5FC0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDCHECKCONTINUOUSLOADING_OFFSET UNITYSDK_OFFSET(0xE2A6000)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDCHECKWAITINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE2A6020)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_NEEDWAITMAINPAGE_OFFSET UNITYSDK_OFFSET(0xE2A5FE0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE2A5F80)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_QUEUETAG_OFFSET UNITYSDK_OFFSET(0xE2A5F60)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_GET_WINDOW_OFFSET UNITYSDK_OFFSET(0xE2A5FA0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_EXTRATAG_OFFSET UNITYSDK_OFFSET(0xE2A6050)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_INBATTLE_OFFSET UNITYSDK_OFFSET(0xE2A5FD0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDCHECKCONTINUOUSLOADING_OFFSET UNITYSDK_OFFSET(0xE2A6010)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDCHECKWAITINGPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE2A6030)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_NEEDWAITMAINPAGE_OFFSET UNITYSDK_OFFSET(0xE2A5FF0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE2A5F90)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_QUEUETAG_OFFSET UNITYSDK_OFFSET(0xE2A5F70)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST_SET_WINDOW_OFFSET UNITYSDK_OFFSET(0xE2A5FB0)
#define RPG_CLIENT_TOAST_TOASTWINDOWQUEUEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE2A6060)

namespace RPG::Client::Toast
{
	inline static constexpr unsigned int ToastWindowQueueRequest_TypeDefinitionIndex = 79004;

	class ToastWindowQueueRequest : public ::System::Object
	{
	public:
		::Sofa::BaseSofaWindow* _Window_k__BackingField; // 0x10
		::System::String* _QueueTag_k__BackingField; // 0x18
		::System::String* _ExtraTag_k__BackingField; // 0x20
		::System::Boolean _InBattle_k__BackingField; // 0x28
		::System::Boolean _NeedWaitMainPage_k__BackingField; // 0x29
		::System::Boolean _NeedCheckContinuousLoading_k__BackingField; // 0x2A
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
