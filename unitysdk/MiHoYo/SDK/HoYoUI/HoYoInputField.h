#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/InputField.h"
#include "unitysdk/UnityEngine/UI/Selectable_SelectionState.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x1D840270)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x1D8404A0)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D840790)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1D840640)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x1D840260)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_START_OFFSET UNITYSDK_OFFSET(0x1D8404B0)
#define MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D840960)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoInputField_TypeDefinitionIndex = 37739;

	class HoYoInputField : public ::UnityEngine::UI::InputField
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x210

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

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_START_OFFSET))(this);
		}

		::System::Void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, ::System::Boolean instant)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable_SelectionState, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_DOSTATETRANSITION_OFFSET))(this, state, instant);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOINPUTFIELD_AWAKE_OFFSET))(this);
		}
	};
}
