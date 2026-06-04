#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Slider.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0xA1786B0)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0xA1786C0)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA1786D0)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0xA1786A0)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA178770)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoSlider_TypeDefinitionIndex = 44078;

	class HoYoSlider : public ::UnityEngine::UI::Slider
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_AWAKE_OFFSET))(this);
		}
	};
}
