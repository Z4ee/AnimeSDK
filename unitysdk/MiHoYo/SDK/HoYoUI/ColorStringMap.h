#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONObject.h"

#define MIHOYO_SDK_HOYOUI_COLORSTRINGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x84E9B80)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int ColorStringMap_TypeDefinitionIndex = 37409;

	class ColorStringMap : public ::MiHoYo::SDK::JSONObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_COLORSTRINGMAP__CTOR_OFFSET))(this);
		}
	};
}
