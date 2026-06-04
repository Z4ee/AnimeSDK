#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_DOLOGGER_OFFSET UNITYSDK_OFFSET(0xA16F600)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0xA16F170)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_GETNATIVEUICOUNT_OFFSET UNITYSDK_OFFSET(0xA16FD00)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ISINSTACKTOP_OFFSET UNITYSDK_OFFSET(0xA16FD20)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_NOTIFYNATIVEUIHIDE_OFFSET UNITYSDK_OFFSET(0xA16FCC0)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_NOTIFYNATIVEUISHOW_OFFSET UNITYSDK_OFFSET(0xA16F6D0)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ONHIDENATIVEUI_OFFSET UNITYSDK_OFFSET(0xA16F710)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ONSHOWNATIVEUI_OFFSET UNITYSDK_OFFSET(0xA16F220)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_SENDNATIVEUINOTIFICATION_OFFSET UNITYSDK_OFFSET(0xA16FEB0)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA16F1E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNativeUIStackManager_TypeDefinitionIndex = 43660;

	class HoYoSDKNativeUIStackManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKNativeUIStackManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoSDKNativeUIStackManager**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKNativeUIStackManager_TypeDefinitionIndex)->GetStaticField(0xD4D0);
		}
		::System::Collections::Generic::List_1<::System::String*>* m_lstNativeUI; // 0x10
		::System::UInt32 m_nLogIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoSDKNativeUIStackManager* GetInstance()
		{
			return ((::MiHoYo::SDK::HoYoSDKNativeUIStackManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_GETINSTANCE_OFFSET))();
		}

		::System::Void OnShowNativeUI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ONSHOWNATIVEUI_OFFSET))(this, a1, a2);
		}

		::System::Void OnHideNativeUI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ONHIDENATIVEUI_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetNativeUICount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_GETNATIVEUICOUNT_OFFSET))(this);
		}

		::System::Boolean IsInStackTop(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ISINSTACKTOP_OFFSET))(this, a1);
		}

		::System::Void NotifyNativeUIShow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_NOTIFYNATIVEUISHOW_OFFSET))(this, a1);
		}

		::System::Void NotifyNativeUIHide(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_NOTIFYNATIVEUIHIDE_OFFSET))(this, a1);
		}

		::System::Void SendNativeUINotification(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_SENDNATIVEUINOTIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Void DoLogger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_DOLOGGER_OFFSET))(this, a1);
		}
	};
}
