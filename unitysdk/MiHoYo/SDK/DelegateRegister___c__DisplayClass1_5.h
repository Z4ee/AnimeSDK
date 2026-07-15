#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_5__CTOR_OFFSET UNITYSDK_OFFSET(0x15378C90)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_5__REGISTERWEBFUNC_B__46_OFFSET UNITYSDK_OFFSET(0x1537BE00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_5_TypeDefinitionIndex = 44543;

	class DelegateRegister___c__DisplayClass1_5 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_5__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__46(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_5__REGISTERWEBFUNC_B__46_OFFSET))(this, a1);
		}
	};
}
