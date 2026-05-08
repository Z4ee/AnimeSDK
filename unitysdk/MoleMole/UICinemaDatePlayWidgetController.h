#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_77ADBA378EFC2D41.h"
#include "unitysdk/Enum_3_DAEEC266DE5E805C.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_E5C5FCDBF5C3BDAC;
class Class_2_D0F43E2E93E0D88C;
namespace MoleMole { class UICinemaDatePlayWidgetContext; }
namespace MoleMole { class UICinemaPlayTimeLineWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CHANGEFAVOURPROGRESS_OFFSET UNITYSDK_OFFSET(0x16370F60)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLAMPTIMEPROCESSEND_OFFSET UNITYSDK_OFFSET(0x163721D0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARASSESSUI_OFFSET UNITYSDK_OFFSET(0x1636FFE0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARDATETIMELINEWIDGET_OFFSET UNITYSDK_OFFSET(0x16371DB0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARFAVOURTOKEN_OFFSET UNITYSDK_OFFSET(0x16370D50)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARPUSHTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x16371A40)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARSELECTTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x16371AB0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARTIMELINEICONEFFECT_OFFSET UNITYSDK_OFFSET(0x16372DC0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CONTROLTIMELINEICONVISIBLE_OFFSET UNITYSDK_OFFSET(0x16372E80)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_FASTPUSHPROCESSTIME_OFFSET UNITYSDK_OFFSET(0x16372050)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_FASTPUSHTOTRAGETTICK_OFFSET UNITYSDK_OFFSET(0x16372450)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_FASTTOTARGETPROCESSTIME_OFFSET UNITYSDK_OFFSET(0x16371F50)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_GENDATETIMELINEWIDGET_OFFSET UNITYSDK_OFFSET(0x16371B70)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_GETFAVOURCHANGEPOINT_OFFSET UNITYSDK_OFFSET(0x16371040)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x16373BB0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_HIDEASSESSDIALOG_OFFSET UNITYSDK_OFFSET(0x16370280)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_HIDEDATESELECTITEM_OFFSET UNITYSDK_OFFSET(0x16373F70)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_HIDESELECTTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x163727A0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_INITFAVOUR_OFFSET UNITYSDK_OFFSET(0x163702F0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_INITPROGRESSTIMELINE_OFFSET UNITYSDK_OFFSET(0x163715D0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_INITTUTORIALLIST_OFFSET UNITYSDK_OFFSET(0x163736E0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_INITUI_OFFSET UNITYSDK_OFFSET(0x16373680)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_NORMALPUSHPROGRESSTICK_OFFSET UNITYSDK_OFFSET(0x16372330)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16373910)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x163739A0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16373030)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16373500)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PAUSETOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x16372250)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PLAYFAVOURSCOREUP_OFFSET UNITYSDK_OFFSET(0x16371530)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PLAYPROGRESSLISTASYNC_OFFSET UNITYSDK_OFFSET(0x163711D0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PLAYRIGHTMOVIEEFFECT_OFFSET UNITYSDK_OFFSET(0x16371460)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PLAYSWITCHFAVOURLEVELIMAGE_OFFSET UNITYSDK_OFFSET(0x16371380)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_RESETALLREMARK_OFFSET UNITYSDK_OFFSET(0x16373C00)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_RESETUITIME_OFFSET UNITYSDK_OFFSET(0x16371740)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_RESETUI_OFFSET UNITYSDK_OFFSET(0x16373D90)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_RESUMETOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x163722A0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SELECTTICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x163728C0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETFAVORABILITYNUM_OFFSET UNITYSDK_OFFSET(0x16373FE0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETFAVOURLEVEL_OFFSET UNITYSDK_OFFSET(0x16371250)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETFAVOURPROGRESS_OFFSET UNITYSDK_OFFSET(0x16370DF0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETINFOUIVISIBLE_OFFSET UNITYSDK_OFFSET(0x16373DE0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETTICKPAUSE_OFFSET UNITYSDK_OFFSET(0x16373B60)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SHOWASSESSDIALOG_OFFSET UNITYSDK_OFFSET(0x163700B0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SHOWDATESELECTITEM_OFFSET UNITYSDK_OFFSET(0x16373EE0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SHOWFAVORTEXT_OFFSET UNITYSDK_OFFSET(0x16374060)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_STARTPUSHTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x16371EA0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_STARTSELECTTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x16372520)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SWITCHFAVOURLEVELIMAGE_OFFSET UNITYSDK_OFFSET(0x16370540)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_TRIGGERTIMELINEICONEFFECT_OFFSET UNITYSDK_OFFSET(0x16372D10)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16373AD0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x163740E0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__FASTTOTARGETPROCESSTIME_B__42_0_OFFSET UNITYSDK_OFFSET(0x16374140)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16374190)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16374220)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x163742B0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16374340)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController_TypeDefinitionIndex = 66983;

	class UICinemaDatePlayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Threading::CancellationTokenSource* assessToken; // 0x2B8
		::Class_1_E5C5FCDBF5C3BDAC* favourProgressBarHandler; // 0x2C0
		::Enum_3_77ADBA378EFC2D41 nowFavourLevelType; // 0x2C8
		::System::Threading::CancellationTokenSource* levelUpToken; // 0x2D0
		::System::Threading::CancellationTokenSource* switchLevelToken; // 0x2D8
		::System::Threading::CancellationTokenSource* progressListToken; // 0x2E0
		::System::Threading::CancellationTokenSource* favourTextTokenSource; // 0x2E8
		::System::Collections::Generic::List_1<::System::Int32>* scoreRangeList; // 0x2F0
		::System::Int32 uiFavourNum; // 0x2F8
		::System::Int32 uiFavourTargertNum; // 0x2FC
		::Class_1_E5C5FCDBF5C3BDAC* progressBarHandler; // 0x300
		::System::Single totalPassTime; // 0x308
		::System::Single totalTargetTime; // 0x30C
		::System::Single totalTime; // 0x310
		::System::Single totalDialation; // 0x314
		::System::Action* fastEndAction; // 0x318
		::System::Action* timeLineTickFunc; // 0x320
		::System::Single selectPassTime; // 0x328
		::System::Single selectTotalTime; // 0x32C
		::System::Action* selectTickFunc; // 0x330
		::System::Boolean selectTimeIsShow; // 0x338
		::System::Boolean selectTimeTrigger; // 0x339
		::Class_2_D0F43E2E93E0D88C* _view; // 0x340
		::MoleMole::UICinemaDatePlayWidgetContext* context; // 0x348
		::System::Boolean isPause; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UICinemaPlayTimeLineWidgetController*>* timeLineList; // 0x358
		::System::Collections::Generic::Dictionary_2<::Enum_3_DAEEC266DE5E805C, ::UnityEngine::RectTransform*>* remarkDict; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void ClearAssessUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARASSESSUI_OFFSET))(this);
		}

		::System::Void ShowAssessDialog(::System::String* title, ::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SHOWASSESSDIALOG_OFFSET))(this, title, content);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid HideAssessDialog()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_HIDEASSESSDIALOG_OFFSET))(this);
		}

		::System::Void InitFavour()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_INITFAVOUR_OFFSET))(this);
		}

		::System::Void ClearFavourToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARFAVOURTOKEN_OFFSET))(this);
		}

		::System::Void SetFavourProgress(::System::Int32 nowNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETFAVOURPROGRESS_OFFSET))(this, nowNum);
		}

		::System::Void ChangeFavourProgress(::System::Int32 oldNum, ::System::Int32 targetNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CHANGEFAVOURPROGRESS_OFFSET))(this, oldNum, targetNum);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetFavourChangePoint(::System::Int32 fromNum, ::System::Int32 toNum)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_GETFAVOURCHANGEPOINT_OFFSET))(this, fromNum, toNum);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid playProgressListAsync(::System::Collections::Generic::List_1<::System::Int32>* numPoints)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PLAYPROGRESSLISTASYNC_OFFSET))(this, numPoints);
		}

		::System::Void SetFavourLevel(::Enum_3_77ADBA378EFC2D41 favourLevel)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_77ADBA378EFC2D41))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETFAVOURLEVEL_OFFSET))(this, favourLevel);
		}

		::System::Void PlayRightMovieEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PLAYRIGHTMOVIEEFFECT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlaySwitchFavourLevelImage(::Enum_3_77ADBA378EFC2D41 favourLevel, ::System::Boolean resetProgress, ::System::Threading::CancellationTokenSource* tokenSource)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Enum_3_77ADBA378EFC2D41, ::System::Boolean, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PLAYSWITCHFAVOURLEVELIMAGE_OFFSET))(this, favourLevel, resetProgress, tokenSource);
		}

		::System::Void SwitchFavourLevelImage(::Enum_3_77ADBA378EFC2D41 favourLevel)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_77ADBA378EFC2D41))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SWITCHFAVOURLEVELIMAGE_OFFSET))(this, favourLevel);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFavourScoreUp(::System::Threading::CancellationTokenSource* tokenSource)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PLAYFAVOURSCOREUP_OFFSET))(this, tokenSource);
		}

		::System::Void InitProgressTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_INITPROGRESSTIMELINE_OFFSET))(this);
		}

		::System::Void ResetUITime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_RESETUITIME_OFFSET))(this);
		}

		::MoleMole::UICinemaPlayTimeLineWidgetController* GenDateTimelineWidget(::System::Single ratio)
		{
			return ((::MoleMole::UICinemaPlayTimeLineWidgetController*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_GENDATETIMELINEWIDGET_OFFSET))(this, ratio);
		}

		::System::Void ClearDateTimelineWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARDATETIMELINEWIDGET_OFFSET))(this);
		}

		::System::Void StartPushTotalProgress(::System::Single totalTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_STARTPUSHTOTALPROGRESS_OFFSET))(this, totalTime);
		}

		::System::Void ClearPushTotalProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARPUSHTOTALPROGRESS_OFFSET))(this);
		}

		::System::Void FastToTargetProcessTime(::System::Single targetTime, ::System::Int32 nowIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_FASTTOTARGETPROCESSTIME_OFFSET))(this, targetTime, nowIndex);
		}

		::System::Void FastPushProcessTime(::System::Single pushTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_FASTPUSHPROCESSTIME_OFFSET))(this, pushTime);
		}

		::System::Void PauseTotalProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_PAUSETOTALPROGRESS_OFFSET))(this);
		}

		::System::Void ResumeTotalProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_RESUMETOTALPROGRESS_OFFSET))(this);
		}

		::System::Void NormalPushProgressTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_NORMALPUSHPROGRESSTICK_OFFSET))(this);
		}

		::System::Void FastPushToTragetTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_FASTPUSHTOTRAGETTICK_OFFSET))(this);
		}

		::System::Void ClampTimeProcessEnd(::System::Single& targetTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLAMPTIMEPROCESSEND_OFFSET))(this, targetTime);
		}

		::System::Void StartSelectTimeLimit(::System::Single totalTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_STARTSELECTTIMELIMIT_OFFSET))(this, totalTime);
		}

		::System::Void ClearSelectTimeLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARSELECTTIMELIMIT_OFFSET))(this);
		}

		::System::Void HideSelectTimeLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_HIDESELECTTIMELIMIT_OFFSET))(this);
		}

		::System::Void SelectTickFunction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SELECTTICKFUNCTION_OFFSET))(this);
		}

		::System::Void TriggerTimelineIconEffect(::System::Int32 nowIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_TRIGGERTIMELINEICONEFFECT_OFFSET))(this, nowIndex);
		}

		::System::Void ClearTimelineIconEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CLEARTIMELINEICONEFFECT_OFFSET))(this);
		}

		::System::Void ControlTimelineIconVisible(::System::Int32 index, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_CONTROLTIMELINEICONVISIBLE_OFFSET))(this, index, isActive);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetTickPause(::System::Boolean isTick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETTICKPAUSE_OFFSET))(this, isTick);
		}

		::Class_2_D0F43E2E93E0D88C* GetView()
		{
			return ((::Class_2_D0F43E2E93E0D88C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void InitUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_INITUI_OFFSET))(this);
		}

		::System::Void ResetUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_RESETUI_OFFSET))(this);
		}

		::System::Void InitTutorialList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_INITTUTORIALLIST_OFFSET))(this);
		}

		::System::Void SetInfoUIVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETINFOUIVISIBLE_OFFSET))(this, isVisible);
		}

		::System::Void ShowDateSelectItem(::System::Int32 site, ::System::String* textContent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SHOWDATESELECTITEM_OFFSET))(this, site, textContent);
		}

		::System::Void HideDateSelectItem(::System::Int32 site)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_HIDEDATESELECTITEM_OFFSET))(this, site);
		}

		::System::Void SetFavorabilityNum(::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SETFAVORABILITYNUM_OFFSET))(this, num);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ShowFavorText(::Enum_3_DAEEC266DE5E805C remarkType)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Enum_3_DAEEC266DE5E805C))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_SHOWFAVORTEXT_OFFSET))(this, remarkType);
		}

		::System::Void ResetAllRemark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER_RESETALLREMARK_OFFSET))(this);
		}

		::System::Void _FastToTargetProcessTime_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__FASTTOTARGETPROCESSTIME_B__42_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
