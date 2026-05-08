#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ColorState.h"
#include "unitysdk/UnityEngine/UI/ColorBlock.h"
#include "unitysdk/UnityEngine/UI/Text.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOTEXT_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x19FB4CF0)
#define MIHOYO_SDK_HOYOUI_HOYOTEXT_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x19FB5400)
#define MIHOYO_SDK_HOYOUI_HOYOTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x19FB5510)
#define MIHOYO_SDK_HOYOUI_HOYOTEXT_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x19FB4CA0)
#define MIHOYO_SDK_HOYOUI_HOYOTEXT_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x19FB4C90)
#define MIHOYO_SDK_HOYOUI_HOYOTEXT_UPDATETEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x19FB5570)
#define MIHOYO_SDK_HOYOUI_HOYOTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB55F0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoText_TypeDefinitionIndex = 35486;

	class HoYoText : public ::UnityEngine::UI::Text
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x138
		::UnityEngine::UI::ColorBlock m_Colors; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTEXT__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTEXT_GET_UIMETA_OFFSET))(this);
		}

		::UnityEngine::UI::ColorBlock get_colors()
		{
			return ((::UnityEngine::UI::ColorBlock(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTEXT_GET_COLORS_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTEXT_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTEXT_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTEXT_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateTextColor(::MiHoYo::SDK::ColorState state)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ColorState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTEXT_UPDATETEXTCOLOR_OFFSET))(this, state);
		}
	};
}
