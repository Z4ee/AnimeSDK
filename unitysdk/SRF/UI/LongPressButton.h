#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define SRF_UI_LONGPRESSBUTTON_GET_ONLONGPRESS_OFFSET UNITYSDK_OFFSET(0x1AD25670)
#define SRF_UI_LONGPRESSBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1AD25870)
#define SRF_UI_LONGPRESSBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1AD25740)
#define SRF_UI_LONGPRESSBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1AD25690)
#define SRF_UI_LONGPRESSBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1AD25790)
#define SRF_UI_LONGPRESSBUTTON_SET_ONLONGPRESS_OFFSET UNITYSDK_OFFSET(0x1AD25680)
#define SRF_UI_LONGPRESSBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD25880)
#define SRF_UI_LONGPRESSBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD258E0)

namespace SRF::UI
{
	inline static constexpr unsigned int LongPressButton_TypeDefinitionIndex = 33575;

	class LongPressButton : public ::UnityEngine::UI::Button
	{
	public:
		::System::Boolean _handled; // 0x110
		::UnityEngine::UI::Button_ButtonClickedEvent* _onLongPress; // 0x118
		::System::Boolean _pressed; // 0x120
		::System::Single _pressedTime; // 0x124
		::System::Single LongPressDuration; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Button_ButtonClickedEvent* get_onLongPress()
		{
			return ((::UnityEngine::UI::Button_ButtonClickedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_GET_ONLONGPRESS_OFFSET))(this);
		}

		::System::Void set_onLongPress(::UnityEngine::UI::Button_ButtonClickedEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button_ButtonClickedEvent*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_SET_ONLONGPRESS_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_UPDATE_OFFSET))(this);
		}
	};
}
