#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/SerializableDictionary_2.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_COLORVALUEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xA1753F0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int ColorValueMap_TypeDefinitionIndex = 44088;

	class ColorValueMap : public ::MiHoYo::SDK::HoYoUI::SerializableDictionary_2<::System::String*, ::UnityEngine::Color>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_COLORVALUEMAP__CTOR_OFFSET))(this);
		}
	};
}
