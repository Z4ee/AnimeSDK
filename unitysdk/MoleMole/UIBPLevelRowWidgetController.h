#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_262;
class Class_3_DB4CE4A742A69D50_3;
namespace MoleMole { class MonoBPLevelAnimation; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ANIMATEEXPNUMBER_OFFSET UNITYSDK_OFFSET(0x19561010)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_INITLEVELWIDGET_OFFSET UNITYSDK_OFFSET(0x1955F740)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONBPPURCHASEDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x19560FA0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1955FB30)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONFIRSTINCREASEEND_OFFSET UNITYSDK_OFFSET(0x19561540)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1955FBC0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONLEVELINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x19560D80)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1955FAC0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1955FCA0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1955F4A0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1955FA50)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETBPLEVELINFO_OFFSET UNITYSDK_OFFSET(0x195601C0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETFINALSTATEVALUE_OFFSET UNITYSDK_OFFSET(0x195619A0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETLEVELTEXT_OFFSET UNITYSDK_OFFSET(0x19560440)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x19560780)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETUPPEREXPNUM_OFFSET UNITYSDK_OFFSET(0x19560230)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTBUYPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x195608B0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTSECONDINCREASE_OFFSET UNITYSDK_OFFSET(0x195618B0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTUPPEREXPPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x19560B40)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SYNCBPMODELINFO_OFFSET UNITYSDK_OFFSET(0x19560DE0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19561A60)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__ONFIRSTINCREASEEND_B__33_0_OFFSET UNITYSDK_OFFSET(0x19561B10)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__STARTSECONDINCREASE_B__34_0_OFFSET UNITYSDK_OFFSET(0x19561C70)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19561F00)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19561F90)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19562020)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x195620C0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19562150)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x195621E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPLevelRowWidgetController_TypeDefinitionIndex = 79586;

	class UIBPLevelRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_262* _view; // 0x2C0
		::System::Int32 showLevel; // 0x2C8
		::System::Int32 weeklyExp; // 0x2CC
		::System::Int32 exp; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle animHandle; // 0x2D4
		::Foundation::Coroutine::CoroutineHandle secondAnimHandle; // 0x2D8
		::MoleMole::MonoBPLevelAnimation* bpLevelAnimation; // 0x2E0
		::System::Single preExpRatio; // 0x2E8
		::System::Single showExpRatio; // 0x2EC
		::System::Int32 startExpResidue; // 0x2F0
		::System::Single animTime; // 0x2F4
		::System::Single animProgress; // 0x2F8
		::System::Int32 animExpResidue; // 0x2FC
		::System::Int32 animNextLevel; // 0x300
		::System::Boolean expChangedDuringPurhcase; // 0x304
		::System::Boolean isInPurchaseDialog; // 0x305

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitLevelWidget(::Class_3_DB4CE4A742A69D50_3* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DB4CE4A742A69D50_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_INITLEVELWIDGET_OFFSET))(this, levelInfo);
		}

		::System::Void StartBuyPopWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTBUYPOPWINDOW_OFFSET))(this);
		}

		::System::Void StartUpperExpPopWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTUPPEREXPPOPWINDOW_OFFSET))(this);
		}

		::System::Void OnLevelInfoChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONLEVELINFOCHANGED_OFFSET))(this);
		}

		::System::Void OnBPPurchaseDialogClose(::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONBPPURCHASEDIALOGCLOSE_OFFSET))(this, isOpen);
		}

		::System::Void SyncBPModelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SYNCBPMODELINFO_OFFSET))(this);
		}

		::System::Void SetBPLevelInfo(::Class_3_DB4CE4A742A69D50_3* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DB4CE4A742A69D50_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETBPLEVELINFO_OFFSET))(this, levelInfo);
		}

		::System::Void SetUpperExpNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETUPPEREXPNUM_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, progress);
		}

		::System::Void AnimateExpNumber(::System::Single progress, ::System::Int32 expResidue, ::System::Int32 nextLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ANIMATEEXPNUMBER_OFFSET))(this, progress, expResidue, nextLevel);
		}

		::System::Void OnFirstIncreaseEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONFIRSTINCREASEEND_OFFSET))(this);
		}

		::System::Void StartSecondIncrease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTSECONDINCREASE_OFFSET))(this);
		}

		::System::Void SetLevelText(::System::Int32 nowLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETLEVELTEXT_OFFSET))(this, nowLevel);
		}

		::System::Void SetFinalStateValue(::System::Single expRatio, ::System::Int32 expResidue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETFINALSTATEVALUE_OFFSET))(this, expRatio, expResidue);
		}

		::System::Void _OnFirstIncreaseEnd_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__ONFIRSTINCREASEEND_B__33_0_OFFSET))(this);
		}

		::System::Void _StartSecondIncrease_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__STARTSECONDINCREASE_B__34_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
