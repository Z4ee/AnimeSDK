#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ScrollRect.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x1A816A00)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x1A816A10)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A816A20)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x1A8169F0)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A816A80)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoScrollRect_TypeDefinitionIndex = 35483;

	class HoYoScrollRect : public ::UnityEngine::UI::ScrollRect
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_AWAKE_OFFSET))(this);
		}
	};
}
