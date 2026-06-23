#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WATERMARK_WATERMARKRESPONSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E8380)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkResponseData_TypeDefinitionIndex = 20622;

	class WatermarkResponseData : public ::System::Object
	{
	public:
		::System::String* url; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKRESPONSEDATA__CTOR_OFFSET))(this);
		}
	};
}
