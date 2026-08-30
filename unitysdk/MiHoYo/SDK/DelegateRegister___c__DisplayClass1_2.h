#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C5150)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_2__REGISTERWEBFUNC_B__44_OFFSET UNITYSDK_OFFSET(0xB1C8350)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_2_TypeDefinitionIndex = 46726;

	class DelegateRegister___c__DisplayClass1_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_2__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__44(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_2__REGISTERWEBFUNC_B__44_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
