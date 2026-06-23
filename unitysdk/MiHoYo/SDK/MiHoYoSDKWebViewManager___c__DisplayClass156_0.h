#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE0B7C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__PLAYWEBLOADFINISHEDANIMATIONFORISRCORE_B__0_OFFSET UNITYSDK_OFFSET(0x1AE24730)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__PLAYWEBLOADFINISHEDANIMATIONFORISRCORE_B__1_OFFSET UNITYSDK_OFFSET(0x1AE248C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass156_0_TypeDefinitionIndex = 36996;

	class MiHoYoSDKWebViewManager___c__DisplayClass156_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::String* animationStage2; // 0x18
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* __4__this; // 0x20
		::System::Boolean showWebWhenFinished; // 0x28
		::System::Boolean hasStage2; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayWebLoadFinishedAnimationForISRCore_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__PLAYWEBLOADFINISHEDANIMATIONFORISRCORE_B__0_OFFSET))(this);
		}

		::System::Void _PlayWebLoadFinishedAnimationForISRCore_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__PLAYWEBLOADFINISHEDANIMATIONFORISRCORE_B__1_OFFSET))(this);
		}
	};
}
