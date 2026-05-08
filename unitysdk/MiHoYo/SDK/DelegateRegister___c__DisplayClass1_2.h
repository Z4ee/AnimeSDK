#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB0BD0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_2__REGISTERWEBFUNC_B__43_OFFSET UNITYSDK_OFFSET(0x19FB3F80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c__DisplayClass1_2_TypeDefinitionIndex = 35091;

	class DelegateRegister___c__DisplayClass1_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_2__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__43(::MiHoYo::SDK::MiHoYoSDKWebView* w, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__DISPLAYCLASS1_2__REGISTERWEBFUNC_B__43_OFFSET))(this, w, url, errorCode, errorMessage);
		}
	};
}
