#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS163_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D956140)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS163_0__PLAYSHOWWEBANIMATIONFORISR_B__0_OFFSET UNITYSDK_OFFSET(0x1D956150)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS163_0__PLAYSHOWWEBANIMATIONFORISR_B__1_OFFSET UNITYSDK_OFFSET(0x1D956190)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS163_0__PLAYSHOWWEBANIMATIONFORISR_B__2_OFFSET UNITYSDK_OFFSET(0x1D9567E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass163_0_TypeDefinitionIndex = 37658;

	class MiHoYoSDKWebViewManager___c__DisplayClass163_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* __4__this; // 0x18
		::System::String* animationStage2; // 0x20
		::System::Boolean needHideNaviBar; // 0x28
		::System::Boolean hasStage2; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS163_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayShowWebAnimationForISR_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS163_0__PLAYSHOWWEBANIMATIONFORISR_B__0_OFFSET))(this);
		}

		::System::Void _PlayShowWebAnimationForISR_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS163_0__PLAYSHOWWEBANIMATIONFORISR_B__1_OFFSET))(this);
		}

		::System::Void _PlayShowWebAnimationForISR_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS163_0__PLAYSHOWWEBANIMATIONFORISR_B__2_OFFSET))(this);
		}
	};
}
