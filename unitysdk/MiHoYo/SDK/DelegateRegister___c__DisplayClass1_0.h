#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKUniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15378420)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_0__REGISTERWEBFUNC_B__41_OFFSET UNITYSDK_OFFSET(0x1537BC70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_0_TypeDefinitionIndex = 44538;

	class DelegateRegister___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__41(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_0__REGISTERWEBFUNC_B__41_OFFSET))(this, a1, a2);
		}
	};
}
