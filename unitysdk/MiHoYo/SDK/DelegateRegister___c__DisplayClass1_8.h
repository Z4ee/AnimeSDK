#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_8__CTOR_OFFSET UNITYSDK_OFFSET(0xA14ED10)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_8__REGISTERWEBFUNC_B__49_OFFSET UNITYSDK_OFFSET(0xA1519D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_8_TypeDefinitionIndex = 43684;

	class DelegateRegister___c__DisplayClass1_8 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_8__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__49(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::MiHoYo::SDK::Web* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_8__REGISTERWEBFUNC_B__49_OFFSET))(this, a1, a2);
		}
	};
}
