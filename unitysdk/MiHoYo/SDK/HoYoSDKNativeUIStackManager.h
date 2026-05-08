#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_DOLOGGER_OFFSET UNITYSDK_OFFSET(0x1A1E79B0)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A1E76E0)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_GETNATIVEUICOUNT_OFFSET UNITYSDK_OFFSET(0x1A1E7FD0)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ISINSTACKTOP_OFFSET UNITYSDK_OFFSET(0x1A1E7FF0)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_NOTIFYNATIVEUIHIDE_OFFSET UNITYSDK_OFFSET(0x1A1E7F90)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_NOTIFYNATIVEUISHOW_OFFSET UNITYSDK_OFFSET(0x1A1E7C40)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ONHIDENATIVEUI_OFFSET UNITYSDK_OFFSET(0x1A1E7C80)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ONSHOWNATIVEUI_OFFSET UNITYSDK_OFFSET(0x1A1E7850)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_SENDNATIVEUINOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1A1E8100)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E83C0)
#define MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E77D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNativeUIStackManager_TypeDefinitionIndex = 35074;

	class HoYoSDKNativeUIStackManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKNativeUIStackManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoSDKNativeUIStackManager**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKNativeUIStackManager_TypeDefinitionIndex)->GetStaticField(0x261B0);
		}
		::System::Collections::Generic::List_1<::System::String*>* m_lstNativeUI; // 0x10
		::System::UInt32 m_nLogIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoSDKNativeUIStackManager* GetInstance()
		{
			return ((::MiHoYo::SDK::HoYoSDKNativeUIStackManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_GETINSTANCE_OFFSET))();
		}

		::System::Void OnShowNativeUI(::System::String* strUIName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ONSHOWNATIVEUI_OFFSET))(this, strUIName, strParams);
		}

		::System::Void OnHideNativeUI(::System::String* strUIName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ONHIDENATIVEUI_OFFSET))(this, strUIName, strParams);
		}

		::System::Int32 GetNativeUICount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_GETNATIVEUICOUNT_OFFSET))(this);
		}

		::System::Boolean IsInStackTop(::System::String* strUIName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_ISINSTACKTOP_OFFSET))(this, strUIName);
		}

		::System::Void NotifyNativeUIShow(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_NOTIFYNATIVEUISHOW_OFFSET))(this, strUIName);
		}

		::System::Void NotifyNativeUIHide(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_NOTIFYNATIVEUIHIDE_OFFSET))(this, strUIName);
		}

		::System::Void SendNativeUINotification(::System::String* strEventName, ::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_SENDNATIVEUINOTIFICATION_OFFSET))(this, strEventName, strUIName);
		}

		::System::Void DoLogger(::System::String* strLoggerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNATIVEUISTACKMANAGER_DOLOGGER_OFFSET))(this, strLoggerInfo);
		}
	};
}
