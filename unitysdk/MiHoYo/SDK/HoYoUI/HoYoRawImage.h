#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/RawImage.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x1C8377F0)
#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x1C8379C0)
#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C837AD0)
#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x1C8377E0)
#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C837B30)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoRawImage_TypeDefinitionIndex = 37081;

	class HoYoRawImage : public ::UnityEngine::UI::RawImage
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_AWAKE_OFFSET))(this);
		}
	};
}
