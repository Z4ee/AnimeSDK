#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/SerializableDictionary_2.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF5860)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int FontSizeValueMap_TypeDefinitionIndex = 35494;

	class FontSizeValueMap : public ::MiHoYo::SDK::HoYoUI::SerializableDictionary_2<::System::String*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP__CTOR_OFFSET))(this);
		}
	};
}
