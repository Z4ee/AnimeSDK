#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOIMAGE_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0xB206690)
#define MIHOYO_SDK_HOYOUI_HOYOIMAGE_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0xB2068B0)
#define MIHOYO_SDK_HOYOUI_HOYOIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB206AA0)
#define MIHOYO_SDK_HOYOUI_HOYOIMAGE_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0xB206680)
#define MIHOYO_SDK_HOYOUI_HOYOIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB206AD0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoImage_TypeDefinitionIndex = 47169;

	class HoYoImage : public ::UnityEngine::UI::Image
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x1E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOIMAGE__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOIMAGE_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOIMAGE_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOIMAGE_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOIMAGE_AWAKE_OFFSET))(this);
		}
	};
}
