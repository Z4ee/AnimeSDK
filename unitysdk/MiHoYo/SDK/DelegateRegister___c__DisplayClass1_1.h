#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x153785D0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_1__REGISTERWEBFUNC_B__42_OFFSET UNITYSDK_OFFSET(0x1537BD00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_1_TypeDefinitionIndex = 44539;

	class DelegateRegister___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__42(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_1__REGISTERWEBFUNC_B__42_OFFSET))(this, a1, a2);
		}
	};
}
