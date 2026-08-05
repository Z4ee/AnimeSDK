#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"
#include "unitysdk/UnityEngine/UI/Selectable_SelectionState.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x1DF82E70)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x1DF83540)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF837C0)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1DF836E0)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x1DF82E60)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON_START_OFFSET UNITYSDK_OFFSET(0x1DF83550)
#define MIHOYO_SDK_HOYOUI_HOYOBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF837F0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoButton_TypeDefinitionIndex = 37736;

	class HoYoButton : public ::UnityEngine::UI::Button
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x100

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

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_START_OFFSET))(this);
		}

		::System::Void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, ::System::Boolean instant)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable_SelectionState, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_DOSTATETRANSITION_OFFSET))(this, state, instant);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOBUTTON_AWAKE_OFFSET))(this);
		}
	};
}
