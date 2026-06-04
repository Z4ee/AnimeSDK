#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Dropdown.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoText; }
namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0xA176440)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0xA176450)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0xA176460)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0xA176330)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xA1763C0)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA176840)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA176640)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA176340)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN_START_OFFSET UNITYSDK_OFFSET(0xA1761F0)
#define MIHOYO_SDK_HOYOUI_HOYODROPDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xA176960)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoDropdown_TypeDefinitionIndex = 44070;

	class HoYoDropdown : public ::UnityEngine::UI::Dropdown
	{
	public:
		::System::Boolean IsConsoleInput; // 0x180
		::MiHoYo::SDK::HoYoUI::HoYoText* selectLabel; // 0x188
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x190

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

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYODROPDOWN_ONCANCEL_OFFSET))(this, a1);
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
