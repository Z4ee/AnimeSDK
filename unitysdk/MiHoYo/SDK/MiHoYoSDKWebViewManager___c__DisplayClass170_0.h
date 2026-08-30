#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CLOSE_B__0_OFFSET UNITYSDK_OFFSET(0xB273A00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CLOSE_B__1_OFFSET UNITYSDK_OFFSET(0xB273AD0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CLOSE_B__2_OFFSET UNITYSDK_OFFSET(0xB273B30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CLOSE_B__3_OFFSET UNITYSDK_OFFSET(0xB273F90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2739F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass170_0_TypeDefinitionIndex = 47088;

	class MiHoYoSDKWebViewManager___c__DisplayClass170_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* __4__this; // 0x10
		::System::Action* __9__3; // 0x18
		::System::IntPtr hGameWnd; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CTOR_OFFSET))(this);
		}

		::System::Void _Close_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CLOSE_B__0_OFFSET))(this);
		}

		::System::Void _Close_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CLOSE_B__1_OFFSET))(this);
		}

		::System::Void _Close_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CLOSE_B__2_OFFSET))(this);
		}

		::System::Void _Close_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS170_0__CLOSE_B__3_OFFSET))(this);
		}
	};
}
