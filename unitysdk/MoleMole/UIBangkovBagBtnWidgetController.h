#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovBagBtnWidgetController_EarningsStage.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B4378B46E0020E85;
class Class_2_DA1B9EC8BE784CC4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_APPLYSTAGE_OFFSET UNITYSDK_OFFSET(0x18E425E0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_DRIVEEARNINGSLABEL_OFFSET UNITYSDK_OFFSET(0x18E42D50)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_DRIVESTYLEDEARNINGS_OFFSET UNITYSDK_OFFSET(0x18E42FD0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ENSURESTYLEDLABELS_OFFSET UNITYSDK_OFFSET(0x18E42970)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_GETALMOSTFULLRATIO_OFFSET UNITYSDK_OFFSET(0x18E43260)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x18E41210)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E419B0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONROUNDEARNINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x18E433A0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18E41910)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18E41A40)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E41BB0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E41230)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E41490)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_REFRESHBAGSTATUSICONS_OFFSET UNITYSDK_OFFSET(0x18E41C40)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_REFRESHEARNINGSTEXT_OFFSET UNITYSDK_OFFSET(0x18E41520)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_RESETRUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x18E41420)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_RESOLVESTAGE_OFFSET UNITYSDK_OFFSET(0x18E42560)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_SHOWEARNINGSDELTA_OFFSET UNITYSDK_OFFSET(0x18E43450)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_STOPEARNINGSJUMPS_OFFSET UNITYSDK_OFFSET(0x18E41AF0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E438A0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER__SHOWEARNINGSDELTA_B__30_0_OFFSET UNITYSDK_OFFSET(0x18E43910)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E43AB0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18E43B40)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18E43BE0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E43BF0)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E43C80)
#define MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E43D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagBtnWidgetController_TypeDefinitionIndex = 46943;

	class UIBangkovBagBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 TipsHideCoroutineTag = 0x3E9; // 0x0
		::Class_2_DA1B9EC8BE784CC4* _view; // 0x2C0
		::MoleMole::UIBangkovBagBtnWidgetController_EarningsStage _stage; // 0x2C8
		::System::Boolean _stageInitialized; // 0x2CC
		::System::Int64 _lastRawEarnings; // 0x2D0
		::UnityEngine::UI::Extension::UIDynamicNumberLabel* _fullLabel; // 0x2D8
		::UnityEngine::UI::Extension::UIDynamicNumberLabel* _almostLabel; // 0x2E0
		::System::Boolean _styledLabelsQueried; // 0x2E8
		::System::Boolean _isZenkov; // 0x2E9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_Button()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_GET_BUTTON_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void StopEarningsJumps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_STOPEARNINGSJUMPS_OFFSET))(this);
		}

		::System::Void ResetRuntimeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_RESETRUNTIMESTATE_OFFSET))(this);
		}

		::System::Void RefreshBagStatusIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_REFRESHBAGSTATUSICONS_OFFSET))(this);
		}

		::System::Void RefreshEarningsText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_REFRESHEARNINGSTEXT_OFFSET))(this);
		}

		::System::Void DriveEarningsLabel(::UnityEngine::UI::Extension::UIDynamicNumberLabel* label, ::System::Int64 prev, ::System::Int64 earnings, ::System::String* formatted, ::System::Boolean guardActive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int64, ::System::Int64, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_DRIVEEARNINGSLABEL_OFFSET))(this, label, prev, earnings, formatted, guardActive);
		}

		::System::Void DriveStyledEarnings(::UnityEngine::UI::Extension::UIDynamicNumberLabel* label, ::UnityEngine::UI::Extension::UILocalizationText* fallbackText, ::System::Int64 prev, ::System::Int64 earnings, ::System::String* formatted)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Int64, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_DRIVESTYLEDEARNINGS_OFFSET))(this, label, fallbackText, prev, earnings, formatted);
		}

		::System::Void EnsureStyledLabels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ENSURESTYLEDLABELS_OFFSET))(this);
		}

		static ::MoleMole::UIBangkovBagBtnWidgetController_EarningsStage ResolveStage(::System::Int64 earnings, ::System::Int64 threshold)
		{
			return ((::MoleMole::UIBangkovBagBtnWidgetController_EarningsStage(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_RESOLVESTAGE_OFFSET))(earnings, threshold);
		}

		static ::System::Single GetAlmostFullRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_GETALMOSTFULLRATIO_OFFSET))();
		}

		::System::Void ApplyStage(::MoleMole::UIBangkovBagBtnWidgetController_EarningsStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovBagBtnWidgetController_EarningsStage))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_APPLYSTAGE_OFFSET))(this, stage);
		}

		::System::Void OnRoundEarningsChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_ONROUNDEARNINGSCHANGED_OFFSET))(this, args);
		}

		::System::Void ShowEarningsDelta(::System::Int64 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER_SHOWEARNINGSDELTA_OFFSET))(this, delta);
		}

		::System::Void _ShowEarningsDelta_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER__SHOWEARNINGSDELTA_B__30_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
