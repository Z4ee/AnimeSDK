#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x8D1F2D0)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x8D1F5F0)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0x8D1F600)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x8D1F2C0)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1F760)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoInputField_TypeDefinitionIndex = 43269;

	class HoYoInputField : public ::UnityEngine::UI::InputField
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x240

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_AWAKE_OFFSET))(this);
		}
	};
}
