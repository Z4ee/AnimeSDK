#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_153;
class Class_3_DB4CE4A742A69D50_1;
namespace MoleMole { class MonoBPLevelAnimation; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ANIMATEEXPNUMBER_OFFSET UNITYSDK_OFFSET(0x158B2690)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_INITLEVELWIDGET_OFFSET UNITYSDK_OFFSET(0x158B0DE0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONBPPURCHASEDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0x158B2620)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158B11D0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONFIRSTINCREASEEND_OFFSET UNITYSDK_OFFSET(0x158B2BB0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x158B1260)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONLEVELINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x158B2400)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158B1160)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158B1330)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158B0B40)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158B10F0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETBPLEVELINFO_OFFSET UNITYSDK_OFFSET(0x158B1850)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETFINALSTATEVALUE_OFFSET UNITYSDK_OFFSET(0x158B3010)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETLEVELTEXT_OFFSET UNITYSDK_OFFSET(0x158B1AD0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x158B1E00)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETUPPEREXPNUM_OFFSET UNITYSDK_OFFSET(0x158B18C0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTBUYPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x158B1F30)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTSECONDINCREASE_OFFSET UNITYSDK_OFFSET(0x158B2F20)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_STARTUPPEREXPPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x158B21C0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SYNCBPMODELINFO_OFFSET UNITYSDK_OFFSET(0x158B2460)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x158B30D0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__ONFIRSTINCREASEEND_B__33_0_OFFSET UNITYSDK_OFFSET(0x158B3180)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER__STARTSECONDINCREASE_B__34_0_OFFSET UNITYSDK_OFFSET(0x158B32E0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158B3570)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x158B3600)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158B3690)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158B3730)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158B37C0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158B3850)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPLevelRowWidgetController_TypeDefinitionIndex = 78158;

	class UIBPLevelRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_153* _view; // 0x2B8
		::System::Int32 showLevel; // 0x2C0
		::System::Int32 weeklyExp; // 0x2C4
		::System::Int32 exp; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle animHandle; // 0x2CC
		::Foundation::Coroutine::CoroutineHandle secondAnimHandle; // 0x2D0
		::MoleMole::MonoBPLevelAnimation* bpLevelAnimation; // 0x2D8
		::System::Single preExpRatio; // 0x2E0
		::System::Single showExpRatio; // 0x2E4
		::System::Int32 startExpResidue; // 0x2E8
		::System::Single animTime; // 0x2EC
		::System::Single animProgress; // 0x2F0
		::System::Int32 animExpResidue; // 0x2F4
		::System::Int32 animNextLevel; // 0x2F8
		::System::Boolean expChangedDuringPurhcase; // 0x2FC
		::System::Boolean isInPurchaseDialog; // 0x2FD

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

		::System::Void InitLevelWidget(::Class_3_DB4CE4A742A69D50_1* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DB4CE4A742A69D50_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_INITLEVELWIDGET_OFFSET))(this, levelInfo);
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

		::System::Void SetBPLevelInfo(::Class_3_DB4CE4A742A69D50_1* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DB4CE4A742A69D50_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER_SETBPLEVELINFO_OFFSET))(this, levelInfo);
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
