#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WATERMARKDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD17A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WatermarkDefine_TypeDefinitionIndex = 19354;

	class WatermarkDefine : public ::System::Object
	{
	public:
		// static const ::System::String* PARAMTER_ENABLE; // 0x0
		// static const ::System::String* PARAMTER_ALPHA; // 0x0
		// static const ::System::String* PARAMTER_WIDTH; // 0x0
		// static const ::System::String* PARAMTER_HEIGHT; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARKDEFINE__CTOR_OFFSET))(this);
		}
	};
}
