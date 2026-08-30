#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define RPG_CLIENT_UILONGHOVERBUTTON_GET_ONLONGHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x1702CB70)
#define RPG_CLIENT_UILONGHOVERBUTTON_GET_ONLONGHOVER_OFFSET UNITYSDK_OFFSET(0x1702CAD0)
#define RPG_CLIENT_UILONGHOVERBUTTON_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1702CCC0)
#define RPG_CLIENT_UILONGHOVERBUTTON_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1702CC10)
#define RPG_CLIENT_UILONGHOVERBUTTON_SET_ONLONGHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x1702CBC0)
#define RPG_CLIENT_UILONGHOVERBUTTON_SET_ONLONGHOVER_OFFSET UNITYSDK_OFFSET(0x1702CB20)
#define RPG_CLIENT_UILONGHOVERBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0x1702CDD0)
#define RPG_CLIENT_UILONGHOVERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1702D140)

namespace RPG::Client
{
	inline static constexpr unsigned int UILongHoverButton_TypeDefinitionIndex = 72666;

	class UILongHoverButton : public ::UnityEngine::UI::Button
	{
	public:
		::System::Boolean DDAJGPLJNJI; // 0x110
		::UnityEngine::UI::Button_ButtonClickedEvent* GOGOLNMIMIB; // 0x118
		::UnityEngine::UI::Button_ButtonClickedEvent* MMCPGJGDHHB; // 0x120
		::System::Boolean GOHOPHGPLFA; // 0x128
		::System::Single BGFDMHAAOGL; // 0x12C
		::System::Single LongHoverDuration; // 0x130
		::System::Single HoverCenterToleratePixel; // 0x134
		::UnityEngine::Camera* AAOLNCMAHDN; // 0x138

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
