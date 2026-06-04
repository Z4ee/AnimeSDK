#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WEBVIEWRENDERMETHODBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18467570)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewRenderMethodBoxConfig_TypeDefinitionIndex = 7869;

	class WebViewRenderMethodBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean useLegacy; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWRENDERMETHODBOXCONFIG__CTOR_OFFSET))(this, a1);
		}
	};
}
