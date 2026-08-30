#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONObject.h"

#define MIHOYO_SDK_HOYOUI_COLORSTRINGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F3E90)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int ColorStringMap_TypeDefinitionIndex = 47188;

	class ColorStringMap : public ::MiHoYo::SDK::JSONObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_COLORSTRINGMAP__CTOR_OFFSET))(this);
		}
	};
}
