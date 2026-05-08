#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkResponseData; }
namespace System { class String; }

#define MIHOYO_SDK_WATERMARK_WATERMARKRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A189930)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkResponse_TypeDefinitionIndex = 19462;

	class WatermarkResponse : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::String* message; // 0x18
		::MiHoYo::SDK::Watermark::WatermarkResponseData* data; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKRESPONSE__CTOR_OFFSET))(this);
		}
	};
}
