#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS157_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB272D30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS157_0__PLAYWEBLOADFINISHEDANIMATIONFORISRCORE_B__0_OFFSET UNITYSDK_OFFSET(0xB272D40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS157_0__PLAYWEBLOADFINISHEDANIMATIONFORISRCORE_B__1_OFFSET UNITYSDK_OFFSET(0xB272F80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass157_0_TypeDefinitionIndex = 47086;

	class MiHoYoSDKWebViewManager___c__DisplayClass157_0 : public ::System::Object
	{
	public:
		::System::String* animationStage2; // 0x10
		::System::Action* __9__1; // 0x18
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* __4__this; // 0x20
		::System::Boolean hasStage2; // 0x28
		::System::Boolean showWebWhenFinished; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS157_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayWebLoadFinishedAnimationForISRCore_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS157_0__PLAYWEBLOADFINISHEDANIMATIONFORISRCORE_B__0_OFFSET))(this);
		}

		::System::Void _PlayWebLoadFinishedAnimationForISRCore_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS157_0__PLAYWEBLOADFINISHEDANIMATIONFORISRCORE_B__1_OFFSET))(this);
		}
	};
}
