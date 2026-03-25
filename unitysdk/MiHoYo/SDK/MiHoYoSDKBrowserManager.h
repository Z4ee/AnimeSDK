#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKBrowser; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MIHOYO_SDK_MIHOYOSDKBROWSERMANAGER_CREATEBROWSER_OFFSET UNITYSDK_OFFSET(0x85084F0)
#define MIHOYO_SDK_MIHOYOSDKBROWSERMANAGER_DESTORY_OFFSET UNITYSDK_OFFSET(0x8508600)
#define MIHOYO_SDK_MIHOYOSDKBROWSERMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8508470)
#define MIHOYO_SDK_MIHOYOSDKBROWSERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x85084E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKBrowserManager_TypeDefinitionIndex = 37226;

	class MiHoYoSDKBrowserManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKBrowserManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKBrowserManager**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKBrowserManager_TypeDefinitionIndex)->GetStaticField(0x119D0);
		}
		// static const ::System::String* BrowserPath; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSERMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MiHoYoSDKBrowserManager* Instance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKBrowserManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSERMANAGER_INSTANCE_OFFSET))();
		}

		::MiHoYo::SDK::MiHoYoSDKBrowser* CreateBrowser(::UnityEngine::Transform* transform)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKBrowser*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSERMANAGER_CREATEBROWSER_OFFSET))(this, transform);
		}

		::System::Void Destory(::MiHoYo::SDK::MiHoYoSDKBrowser* browser)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKBrowser*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSERMANAGER_DESTORY_OFFSET))(this, browser);
		}
	};
}
