#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFBD550)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_6__REGISTERWEBFUNC_B__47_OFFSET UNITYSDK_OFFSET(0x1BFC0270)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_6_TypeDefinitionIndex = 36659;

	class DelegateRegister___c__DisplayClass1_6 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_6__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__47(::MiHoYo::SDK::MiHoYoSDKWebView* w, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_6__REGISTERWEBFUNC_B__47_OFFSET))(this, w, enabled);
		}
	};
}
