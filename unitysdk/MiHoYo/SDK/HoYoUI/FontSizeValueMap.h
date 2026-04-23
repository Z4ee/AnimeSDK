#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/SerializableDictionary_2.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1D360)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int FontSizeValueMap_TypeDefinitionIndex = 43284;

	class FontSizeValueMap : public ::MiHoYo::SDK::HoYoUI::SerializableDictionary_2<::System::String*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP__CTOR_OFFSET))(this);
		}
	};
}
