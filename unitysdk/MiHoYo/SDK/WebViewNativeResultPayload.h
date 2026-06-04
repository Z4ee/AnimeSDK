#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WEBVIEWNATIVERESULTPAYLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0xA22BAC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewNativeResultPayload_TypeDefinitionIndex = 43967;

	class WebViewNativeResultPayload : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Int32 code; // 0x18
		::System::String* message; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWNATIVERESULTPAYLOAD__CTOR_OFFSET))(this);
		}
	};
}
