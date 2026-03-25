#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_WEBRESPONSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x853A300)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewCloud_WebResponseData_TypeDefinitionIndex = 37268;

	class MiHoYoSDKWebViewCloud_WebResponseData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_WEBRESPONSEDATA__CTOR_OFFSET))(this);
		}
	};
}
