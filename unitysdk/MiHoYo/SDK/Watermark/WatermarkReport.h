#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WATERMARK_WATERMARKREPORT_ERROR_OFFSET UNITYSDK_OFFSET(0x1845C090)
#define MIHOYO_SDK_WATERMARK_WATERMARKREPORT_INFO_OFFSET UNITYSDK_OFFSET(0x1845C1A0)
#define MIHOYO_SDK_WATERMARK_WATERMARKREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x184607C0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkReport_TypeDefinitionIndex = 8539;

	class WatermarkReport : public ::System::Object
	{
	public:
		// static const ::System::String* EVENT_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Info(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKREPORT_INFO_OFFSET))(a1);
		}

		static ::System::Void Error(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKREPORT_ERROR_OFFSET))(a1, a2);
		}
	};
}
