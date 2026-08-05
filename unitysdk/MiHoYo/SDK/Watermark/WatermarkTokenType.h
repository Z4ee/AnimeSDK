#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WATERMARK_WATERMARKTOKENTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D2220)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkTokenType_TypeDefinitionIndex = 20966;

	class WatermarkTokenType : public ::System::Object
	{
	public:
		// static const ::System::String* STOKEN; // 0x0
		// static const ::System::String* GTOKEN; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKTOKENTYPE__CTOR_OFFSET))(this);
		}
	};
}
