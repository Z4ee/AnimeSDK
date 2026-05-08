#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Dropdown.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoText; }
namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x19A38600)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x19A38610)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0x19A38620)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x19A38470)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x19A38540)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19A38830)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19A387A0)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x19A38480)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_START_OFFSET UNITYSDK_OFFSET(0x19A38350)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x19A388C0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoDropdown_TypeDefinitionIndex = 35477;

	class HoYoDropdown : public ::UnityEngine::UI::Dropdown
	{
	public:
		::System::Boolean IsConsoleInput; // 0x168
		::MiHoYo::SDK::HoYoUI::HoYoText* selectLabel; // 0x170
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_START_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_GET_UIMETA_OFFSET))(this);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONCANCEL_OFFSET))(this, eventData);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONDISABLE_OFFSET))(this);
		}
	};
}
