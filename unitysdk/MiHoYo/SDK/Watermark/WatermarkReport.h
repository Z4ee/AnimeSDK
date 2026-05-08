#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WATERMARK_WATERMARKREPORT_ERROR_OFFSET UNITYSDK_OFFSET(0x197F4A70)
#define MIHOYO_SDK_WATERMARK_WATERMARKREPORT_INFO_OFFSET UNITYSDK_OFFSET(0x197F4980)
#define MIHOYO_SDK_WATERMARK_WATERMARKREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x197F4B50)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkReport_TypeDefinitionIndex = 19463;

	class WatermarkReport : public ::System::Object
	{
	public:
		// static const ::System::String* EVENT_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Info(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKREPORT_INFO_OFFSET))(message);
		}

		static ::System::Void Error(::System::String* message, ::System::Int32 code)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKREPORT_ERROR_OFFSET))(message, code);
		}
	};
}
