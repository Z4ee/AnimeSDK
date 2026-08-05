#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WEBVIEWREPORTBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E2940)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewReportBoxConfig_TypeDefinitionIndex = 20031;

	class WebViewReportBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean key; // 0x10
		::System::Boolean mouse; // 0x11
		::System::Boolean frame; // 0x12

		::System::Void _ctor(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWREPORTBOXCONFIG__CTOR_OFFSET))(this, dataString);
		}
	};
}
