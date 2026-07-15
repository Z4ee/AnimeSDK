#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define RPG_CLIENT_UILONGHOVERBUTTON_GET_ONLONGHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x17244960)
#define RPG_CLIENT_UILONGHOVERBUTTON_GET_ONLONGHOVER_OFFSET UNITYSDK_OFFSET(0x172448C0)
#define RPG_CLIENT_UILONGHOVERBUTTON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x17244AB0)
#define RPG_CLIENT_UILONGHOVERBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x17244A00)
#define RPG_CLIENT_UILONGHOVERBUTTON_SET_ONLONGHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x172449B0)
#define RPG_CLIENT_UILONGHOVERBUTTON_SET_ONLONGHOVER_OFFSET UNITYSDK_OFFSET(0x17244910)
#define RPG_CLIENT_UILONGHOVERBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x17244BC0)
#define RPG_CLIENT_UILONGHOVERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x17244F00)

namespace RPG::Client
{
	inline static constexpr unsigned int UILongHoverButton_TypeDefinitionIndex = 69440;

	class UILongHoverButton : public ::UnityEngine::UI::Button
	{
	public:
		::System::Boolean Field_8_0; // 0x110
		::UnityEngine::UI::Button_ButtonClickedEvent* Field_8_1; // 0x118
		::UnityEngine::UI::Button_ButtonClickedEvent* Field_8_2; // 0x120
		::System::Boolean Field_8_3; // 0x128
		::System::Single Field_8_4; // 0x12C
		::System::Single LongHoverDuration; // 0x130
		::System::Single HoverCenterToleratePixel; // 0x134
		::UnityEngine::Camera* Field_8_7; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILONGHOVERBUTTON__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Button_ButtonClickedEvent* get_onLongHover()
		{
			return ((::UnityEngine::UI::Button_ButtonClickedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILONGHOVERBUTTON_GET_ONLONGHOVER_OFFSET))(this);
		}

		::System::Void set_onLongHover(::UnityEngine::UI::Button_ButtonClickedEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button_ButtonClickedEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILONGHOVERBUTTON_SET_ONLONGHOVER_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Button_ButtonClickedEvent* get_onLongHoverExit()
		{
			return ((::UnityEngine::UI::Button_ButtonClickedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILONGHOVERBUTTON_GET_ONLONGHOVEREXIT_OFFSET))(this);
		}

		::System::Void set_onLongHoverExit(::UnityEngine::UI::Button_ButtonClickedEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button_ButtonClickedEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILONGHOVERBUTTON_SET_ONLONGHOVEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILONGHOVERBUTTON_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILONGHOVERBUTTON_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILONGHOVERBUTTON_UPDATE_OFFSET))(this);
		}
	};
}
