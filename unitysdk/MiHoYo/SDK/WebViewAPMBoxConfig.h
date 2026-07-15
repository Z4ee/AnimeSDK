#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WEBVIEWAPMBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15C27950)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewAPMBoxConfig_TypeDefinitionIndex = 7873;

	class WebViewAPMBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean crash_capture_enable; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWAPMBOXCONFIG__CTOR_OFFSET))(this, a1);
		}
	};
}
