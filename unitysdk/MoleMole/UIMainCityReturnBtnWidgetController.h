#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0B499AF5E84BC5BD.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_CEEFD4783074E63F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_CHECKSHOWRETURNBTN_OFFSET UNITYSDK_OFFSET(0x168BD390)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONBACKFLOWEND_OFFSET UNITYSDK_OFFSET(0x168BDC60)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONBACKFLOWSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x168BD980)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168BD820)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x168BD790)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x168BD2A0)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168BD8B0)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168BD0A0)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168BD230)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONUNLOCKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x168BD930)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_PLAYBLACKFLOWFADEOUTEFFECT_OFFSET UNITYSDK_OFFSET(0x168BD9D0)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_SETUIRENDERING_OFFSET UNITYSDK_OFFSET(0x168BDCB0)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168BDE10)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168BDE70)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x168BDF00)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x168BDF90)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168BE030)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168BE0C0)
#define MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168BE150)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityReturnBtnWidgetController_TypeDefinitionIndex = 58654;

	class UIMainCityReturnBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_CEEFD4783074E63F* _view; // 0x2C0
		::System::Boolean hasBackFlowMiniMenuEffect; // 0x2C8
		::Enum_3_0B499AF5E84BC5BD nowState; // 0x2CC
		::UnityEngine::Coroutine* BtnAnimCoroutine; // 0x2D0
		::MoleMole::UIMainCityMiniMenuButtonWidgetController* _buttonWidgetController; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUnlockStateChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONUNLOCKSTATECHANGED_OFFSET))(this, args);
		}

		::System::Void OnBackFlowStatusChanged(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONBACKFLOWSTATUSCHANGED_OFFSET))(this, obj);
		}

		::System::Void PlayBlackFlowFadeOutEffect(::Enum_3_0B499AF5E84BC5BD animState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0B499AF5E84BC5BD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_PLAYBLACKFLOWFADEOUTEFFECT_OFFSET))(this, animState);
		}

		::System::Void CheckShowReturnBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_CHECKSHOWRETURNBTN_OFFSET))(this);
		}

		::System::Void OnBackFlowEnd(::Class_1_D375C91CCE5D3999* backFlowData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_ONBACKFLOWEND_OFFSET))(this, backFlowData);
		}

		::System::Void SetUIRendering(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER_SETUIRENDERING_OFFSET))(this, show);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYRETURNBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
