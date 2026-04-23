#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WATERMARK_WATERMARKHEADERKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x17689A00)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkHeaderKey_TypeDefinitionIndex = 7632;

	class WatermarkHeaderKey : public ::System::Object
	{
	public:
		// static const ::System::String* TOKEN_TYPE; // 0x0
		// static const ::System::String* TOKEN_VALUE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKHEADERKEY__CTOR_OFFSET))(this);
		}
	};
}
