#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD___C__DISPLAYCLASS15_0__CALLREMOTEFUNCTION_B__0_OFFSET UNITYSDK_OFFSET(0x853A2E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8539970)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewCloud___c__DisplayClass15_0_TypeDefinitionIndex = 37270;

	class MiHoYoSDKWebViewCloud___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* result; // 0x10
		::System::Boolean isResponse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _CallRemoteFunction_b__0(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD___C__DISPLAYCLASS15_0__CALLREMOTEFUNCTION_B__0_OFFSET))(this, message);
		}
	};
}
