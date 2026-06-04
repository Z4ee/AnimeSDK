#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0xA175520)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0xA175F20)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xA175F30)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0xA175510)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xA176120)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoButton_TypeDefinitionIndex = 44069;

	class HoYoButton : public ::UnityEngine::UI::Button
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_AWAKE_OFFSET))(this);
		}
	};
}
