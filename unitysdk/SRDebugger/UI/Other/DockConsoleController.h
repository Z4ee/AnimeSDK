#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/ConsoleAlignment.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::Services { class IConsoleService; }
namespace SRDebugger::UI::Controls { class ConsoleLogControl; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_CLEARBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1BDC53E0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_CONSOLEONUPDATED_OFFSET UNITYSDK_OFFSET(0x1BDC52D0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BDC4B70)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_MENUBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1BDC5310)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1BDC5550)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BDC5110)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BDC52B0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BDC5270)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1BDC5580)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1BDC54C0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1BDC54F0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_REFRESHALPHA_OFFSET UNITYSDK_OFFSET(0x1BDC50B0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1BDC4D70)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_SETALIGNMENTMODE_OFFSET UNITYSDK_OFFSET(0x1BDA5F90)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_SETDROPDOWNVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1BDA5E00)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BDA6460)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1BDC4BB0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_TOGGLEDROPDOWNVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BDC52E0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_TOGGLESUPDATED_OFFSET UNITYSDK_OFFSET(0x1BDC5440)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDC52C0)
#define SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC55C0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int DockConsoleController_TypeDefinitionIndex = 37310;

	class DockConsoleController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		// static const ::System::Single NonFocusOpacity; // 0x0
		::System::Boolean _isDirty; // 0x48
		::System::Boolean _isDragging; // 0x49
		::System::Int32 _pointersOver; // 0x4C
		::UnityEngine::GameObject* BottomHandle; // 0x50
		::UnityEngine::CanvasGroup* CanvasGroup; // 0x58
		::SRDebugger::UI::Controls::ConsoleLogControl* Console; // 0x60
		::UnityEngine::GameObject* Dropdown; // 0x68
		::UnityEngine::UI::Image* DropdownToggleSprite; // 0x70
		::UnityEngine::UI::Text* TextErrors; // 0x78
		::UnityEngine::UI::Text* TextInfo; // 0x80
		::UnityEngine::UI::Text* TextWarnings; // 0x88
		::UnityEngine::UI::Toggle* ToggleErrors; // 0x90
		::UnityEngine::UI::Toggle* ToggleInfo; // 0x98
		::UnityEngine::UI::Toggle* ToggleWarnings; // 0xA0
		::UnityEngine::GameObject* TopBar; // 0xA8
		::UnityEngine::GameObject* TopHandle; // 0xB0
		::UnityEngine::GameObject* TopSafeAreaSpacer; // 0xB8
		::UnityEngine::GameObject* BottomSafeAreaSpacer; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ConsoleOnUpdated(::SRDebugger::Services::IConsoleService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IConsoleService*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_CONSOLEONUPDATED_OFFSET))(this, a1);
		}

		::System::Void SetDropdownVisibility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_SETDROPDOWNVISIBILITY_OFFSET))(this, a1);
		}

		::System::Void SetAlignmentMode(::SRDebugger::ConsoleAlignment a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::ConsoleAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_SETALIGNMENTMODE_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void RefreshAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_REFRESHALPHA_OFFSET))(this);
		}

		::System::Void ToggleDropdownVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_TOGGLEDROPDOWNVISIBLE_OFFSET))(this);
		}

		::System::Void MenuButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_MENUBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void ClearButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_CLEARBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void TogglesUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_TOGGLESUPDATED_OFFSET))(this);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONBEGINDRAG_OFFSET))(this);
		}

		::System::Void OnEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_DOCKCONSOLECONTROLLER_ONENDDRAG_OFFSET))(this);
		}
	};
}
