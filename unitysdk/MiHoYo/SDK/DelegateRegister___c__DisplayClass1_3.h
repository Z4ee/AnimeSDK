#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFBD010)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_3__REGISTERWEBFUNC_B__44_OFFSET UNITYSDK_OFFSET(0x1BFC01E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_3_TypeDefinitionIndex = 36656;

	class DelegateRegister___c__DisplayClass1_3 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_3__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__44(::MiHoYo::SDK::MiHoYoSDKWebView* w)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_3__REGISTERWEBFUNC_B__44_OFFSET))(this, w);
		}
	};
}
