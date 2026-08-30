#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WEB_WEBVIEWNATIVERESULTPAYLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB13D20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_WebViewNativeResultPayload_TypeDefinitionIndex = 8181;

	class Web_WebViewNativeResultPayload : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Int32 code; // 0x18
		::System::String* message; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_WEBVIEWNATIVERESULTPAYLOAD__CTOR_OFFSET))(this);
		}
	};
}
