#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define SRF_UI_LONGPRESSBUTTON_GET_ONLONGPRESS_OFFSET UNITYSDK_OFFSET(0x19EAE950)
#define SRF_UI_LONGPRESSBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x19EAEB50)
#define SRF_UI_LONGPRESSBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x19EAEA20)
#define SRF_UI_LONGPRESSBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x19EAE970)
#define SRF_UI_LONGPRESSBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19EAEA70)
#define SRF_UI_LONGPRESSBUTTON_SET_ONLONGPRESS_OFFSET UNITYSDK_OFFSET(0x19EAE960)
#define SRF_UI_LONGPRESSBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x19EAEB60)
#define SRF_UI_LONGPRESSBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAEBC0)

namespace SRF::UI
{
	inline static constexpr unsigned int LongPressButton_TypeDefinitionIndex = 33293;

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

		::System::Void set_onLongPress(::UnityEngine::UI::Button_ButtonClickedEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button_ButtonClickedEvent*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_SET_ONLONGPRESS_OFFSET))(this, value);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LONGPRESSBUTTON_UPDATE_OFFSET))(this);
		}
	};
}
