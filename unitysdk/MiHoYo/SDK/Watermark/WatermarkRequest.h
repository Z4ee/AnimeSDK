#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WATERMARK_WATERMARKREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x160258A0)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkRequest_TypeDefinitionIndex = 7492;

	class WatermarkRequest : public ::System::Object
	{
	public:
		::System::String* app_id; // 0x10
		::System::String* content; // 0x18
		::System::Int32 height; // 0x20
		::System::Int32 width; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKREQUEST__CTOR_OFFSET))(this);
		}
	};
}
