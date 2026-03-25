#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Toggle.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x84EDB60)
#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x84EDB70)
#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x84EDB80)
#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x84EDB50)
#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x84EDC20)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoToggle_TypeDefinitionIndex = 37400;

	class HoYoToggle : public ::UnityEngine::UI::Toggle
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE_AWAKE_OFFSET))(this);
		}
	};
}
