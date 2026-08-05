#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30409CAE069D6997.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_344;
class Class_2_E5A1C01D15FD772B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaPerformance3DModelController; }
namespace MoleMole::Config { class ConfigGachaPerformMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x18585CF0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0x18588FD0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0x18588F70)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x18587E70)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ISMUTESPEEDUP_OFFSET UNITYSDK_OFFSET(0x18587A10)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ISNEXTITEMBTNPOINTDOWN_OFFSET UNITYSDK_OFFSET(0x18588FF0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ITEMNAMETEXTANIM_OFFSET UNITYSDK_OFFSET(0x18588FB0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ITEMNAMETEXT_OFFSET UNITYSDK_OFFSET(0x18588F90)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_SPEEDUPTIMER_OFFSET UNITYSDK_OFFSET(0x18588FE0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18585790)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_HANDLECMDWITHOUTPARAMS_OFFSET UNITYSDK_OFFSET(0x18588430)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18585B50)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18586BC0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNCLICK_OFFSET UNITYSDK_OFFSET(0x18587BC0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNPOINTDOWN_OFFSET UNITYSDK_OFFSET(0x185881F0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNPOINTUP_OFFSET UNITYSDK_OFFSET(0x18588310)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x185857A0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONSKIPALLBTNCLICK_OFFSET UNITYSDK_OFFSET(0x18587E80)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18586520)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185868E0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18585BE0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_PLAYNONGACHAFADEIN_OFFSET UNITYSDK_OFFSET(0x185883E0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SETSKIPALLBTN_OFFSET UNITYSDK_OFFSET(0x18588360)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18586880)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0x18585FF0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0x18588F80)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_ISNEXTITEMBTNPOINTDOWN_OFFSET UNITYSDK_OFFSET(0x18588240)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_SPEEDUPTIMER_OFFSET UNITYSDK_OFFSET(0x18587B20)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UNBIND_OFFSET UNITYSDK_OFFSET(0x185869A0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATEBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x185875C0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATENEXTITEMBTNPOINTDOWN_OFFSET UNITYSDK_OFFSET(0x185877D0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18586FD0)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18589070)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18589000)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18589080)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18589110)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18589140)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18589150)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18589210)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18589220)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18589230)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformancePageController_TypeDefinitionIndex = 48522;

	class UIGachaPerformancePageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Single* StaticGet_NON_GAHCA_BLACK_CURTAIN_KEEP_DURATION()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIGachaPerformancePageController_TypeDefinitionIndex)->GetStaticField(0xF900);
		}
		::Class_2_E5A1C01D15FD772B* _view; // 0x318
		::Foundation::Coroutine::CoroutineHandle _skillAllCoroutine; // 0x320
		::System::Single _nonGachaBlackCurtainKeepTimer; // 0x324
		::System::String* UITextPerformEnd; // 0x328
		::MoleMole::UIGachaPerformance3DModelController* _gachaPerformance3DModelController; // 0x330
		::System::Collections::Generic::List_1<::System::Int32>* ItemResults; // 0x338
		::System::Action* OnPlayEnd; // 0x340
		::System::Boolean IsNonGacha; // 0x348
		::System::Boolean SkipOpenning; // 0x349
		::System::Boolean AnimaCheckMode; // 0x34A
		::Enum_3_30409CAE069D6997 _GachaType_k__BackingField; // 0x34C
		::MoleMole::Config::ConfigGachaPerformMisc* GachaPerformMisc; // 0x350
		::Class_2_208CC9941471731A_344* GachaPerformTamplate; // 0x358
		::System::Boolean _skipAllBlackCurtainActive; // 0x360
		::System::Single _skipAllBlackCurtainTimer; // 0x364
		::UnityEngine::AnimationCurve* _skipAllBlackCurtainCurve; // 0x368
		::System::Single _nonGachaFadeOutBlackCurtainTimer; // 0x370
		::System::Boolean _nonGachaFadeInBlackCurtainActive; // 0x374
		::System::Single _nonGachaFadeInBlackCurtainTimer; // 0x378
		::UnityEngine::AnimationCurve* _nonGachaFadeInBlackCurtainCurve; // 0x380
		::System::Boolean _init; // 0x388
		::System::Action_1<::System::Single>* OnTimeScaleChanged; // 0x390
		::System::Single _curTimeScale; // 0x398
		::System::Single _speedUpTimer; // 0x39C
		::System::Boolean _isNextItemBtnPointDown; // 0x3A0
		::UnityEngine::AnimationCurve* _speedUpCurve; // 0x3A8
		::System::Boolean IsAnimatorSpeedCtrled; // 0x3B0
		::System::Action* _onUIClose; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateBlackCurtain(::System::Boolean& activeTag, ::UnityEngine::AnimationCurve* blackCurtainCurve, ::System::Single duration, ::System::Single& timer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATEBLACKCURTAIN_OFFSET))(this, activeTag, blackCurtainCurve, duration, timer);
		}

		::System::Void UpdateNextItemBtnPointDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UPDATENEXTITEMBTNPOINTDOWN_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnNextItemBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNCLICK_OFFSET))(this);
		}

		::System::Void OnSkipAllBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONSKIPALLBTNCLICK_OFFSET))(this);
		}

		::System::Void OnNextItemBtnPointDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNPOINTDOWN_OFFSET))(this);
		}

		::System::Void OnNextItemBtnPointUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_ONNEXTITEMBTNPOINTUP_OFFSET))(this);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_UNBIND_OFFSET))(this);
		}

		::System::Void SetSkipAllBtn(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SETSKIPALLBTN_OFFSET))(this, isActive);
		}

		::System::Void PlayNonGachaFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_PLAYNONGACHAFADEIN_OFFSET))(this);
		}

		::System::Void HandleCmdWithoutParams(::MoleMole::Config::ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType cmdType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_HANDLECMDWITHOUTPARAMS_OFFSET))(this, cmdType);
		}

		::Enum_3_30409CAE069D6997 get_GachaType()
		{
			return ((::Enum_3_30409CAE069D6997(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_GACHATYPE_OFFSET))(this);
		}

		::System::Void set_GachaType(::Enum_3_30409CAE069D6997 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_30409CAE069D6997))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_GACHATYPE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_ItemNameText()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ITEMNAMETEXT_OFFSET))(this);
		}

		::UnityEngine::Animation* get_ItemNameTextAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ITEMNAMETEXTANIM_OFFSET))(this);
		}

		::System::Single get_CurTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Void set_CurTimeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_CURTIMESCALE_OFFSET))(this, value);
		}

		::System::Single get_speedUpTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_SPEEDUPTIMER_OFFSET))(this);
		}

		::System::Void set_speedUpTimer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_SPEEDUPTIMER_OFFSET))(this, value);
		}

		::System::Boolean get_isNextItemBtnPointDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ISNEXTITEMBTNPOINTDOWN_OFFSET))(this);
		}

		::System::Void set_isNextItemBtnPointDown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_SET_ISNEXTITEMBTNPOINTDOWN_OFFSET))(this, value);
		}

		::System::Boolean get_isMuteSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER_GET_ISMUTESPEEDUP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
