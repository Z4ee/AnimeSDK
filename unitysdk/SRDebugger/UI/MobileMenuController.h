#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Other { class SRTab; }
namespace SRDebugger::UI::Other { class SRTabController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }

#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_CLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x19E92FB0)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x19E92FF0)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_CREATECLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x19E926D0)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_GET_MAXMENUWIDTH_OFFSET UNITYSDK_OFFSET(0x19E92080)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_GET_PEEKAMOUNT_OFFSET UNITYSDK_OFFSET(0x19E92070)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19E92C60)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19E92090)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_OPEN_OFFSET UNITYSDK_OFFSET(0x19E93330)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_SETRECTSIZE_OFFSET UNITYSDK_OFFSET(0x19E92EE0)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_TABCONTROLLERONACTIVETABCHANGED_OFFSET UNITYSDK_OFFSET(0x19E932F0)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E93030)
#define SRDEBUGGER_UI_MOBILEMENUCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E933A0)

namespace SRDebugger::UI
{
	inline static constexpr unsigned int MobileMenuController_TypeDefinitionIndex = 35350;

	class MobileMenuController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::UI::Button* _closeButton; // 0x48
		::System::Single _maxMenuWidth; // 0x50
		::System::Single _peekAmount; // 0x54
		::System::Single _targetXPosition; // 0x58
		::UnityEngine::RectTransform* Content; // 0x60
		::UnityEngine::RectTransform* Menu; // 0x68
		::UnityEngine::UI::Button* OpenButton; // 0x70
		::SRDebugger::UI::Other::SRTabController* TabController; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Single get_PeekAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_GET_PEEKAMOUNT_OFFSET))(this);
		}

		::System::Single get_MaxMenuWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_GET_MAXMENUWIDTH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void CreateCloseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_CREATECLOSEBUTTON_OFFSET))(this);
		}

		::System::Void SetRectSize(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_SETRECTSIZE_OFFSET))(this, rect);
		}

		::System::Void CloseButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_CLOSEBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void TabControllerOnActiveTabChanged(::SRDebugger::UI::Other::SRTabController* srTabController, ::SRDebugger::UI::Other::SRTab* srTab)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::SRTabController*, ::SRDebugger::UI::Other::SRTab*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_TABCONTROLLERONACTIVETABCHANGED_OFFSET))(this, srTabController, srTab);
		}

		::System::Void Open()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_OPEN_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_MOBILEMENUCONTROLLER_CLOSE_OFFSET))(this);
		}
	};
}
