#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_4__CTOR_OFFSET UNITYSDK_OFFSET(0xA14E650)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_4__REGISTERWEBFUNC_B__45_OFFSET UNITYSDK_OFFSET(0xA1518D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_4_TypeDefinitionIndex = 43680;

	class DelegateRegister___c__DisplayClass1_4 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_4__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__45(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_4__REGISTERWEBFUNC_B__45_OFFSET))(this, a1);
		}
	};
}
