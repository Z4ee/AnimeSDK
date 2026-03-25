#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x8558F90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CLOSE_B__1_OFFSET UNITYSDK_OFFSET(0x8559060)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CLOSE_B__2_OFFSET UNITYSDK_OFFSET(0x8559220)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CLOSE_B__3_OFFSET UNITYSDK_OFFSET(0x8559630)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8544840)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass168_0_TypeDefinitionIndex = 37310;

	class MiHoYoSDKWebViewManager___c__DisplayClass168_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* __4__this; // 0x18
		::System::IntPtr hGameWnd; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CTOR_OFFSET))(this);
		}

		::System::Void _Close_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CLOSE_B__0_OFFSET))(this);
		}

		::System::Void _Close_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CLOSE_B__1_OFFSET))(this);
		}

		::System::Void _Close_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CLOSE_B__2_OFFSET))(this);
		}

		::System::Void _Close_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS168_0__CLOSE_B__3_OFFSET))(this);
		}
	};
}
