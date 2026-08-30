#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_6__CTOR_OFFSET UNITYSDK_OFFSET(0x16A96770)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_6__REGISTERWEBFUNC_B__48_OFFSET UNITYSDK_OFFSET(0x16A993B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_6_TypeDefinitionIndex = 46730;

	class DelegateRegister___c__DisplayClass1_6 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_6__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__48(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_6__REGISTERWEBFUNC_B__48_OFFSET))(this, a1, a2);
		}
	};
}
