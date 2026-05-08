#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_C4CB11A2FD957208_Class_1_A983ED79C549CB78;
class Class_2_75FB4A09078427E5_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x145739D0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14573CB0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14573D40)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x145739E0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14573C40)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x14573F10)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_SETANIMMOVE_OFFSET UNITYSDK_OFFSET(0x14574360)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__CALLDELAYCLOSE_OFFSET UNITYSDK_OFFSET(0x14574180)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x145745C0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__ONDELAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x14574280)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__SETANIMMOVE_B__24_0_OFFSET UNITYSDK_OFFSET(0x145746A0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__SETANIMMOVE_B__24_1_OFFSET UNITYSDK_OFFSET(0x14574920)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14574B10)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14574BA0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14574C30)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14574CC0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___ONDELAYCALLBACK_B__23_0_OFFSET UNITYSDK_OFFSET(0x14574680)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardTipWidgetController_TypeDefinitionIndex = 47386;

	class UIRewardTipWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_75FB4A09078427E5_1* _view; // 0x2B8
		::System::Single _waitingTime; // 0x2C0
		::System::Boolean _isFinished; // 0x2C4
		::System::Boolean _isInDelaying; // 0x2C5
		::System::Single _waitingMarkTime; // 0x2C8
		::System::Boolean isFirstEnter; // 0x2CC
		::UnityEngine::Vector2 startAnchorPos; // 0x2D0
		::UnityEngine::Vector2 targetAnchorPos; // 0x2D8
		::UnityEngine::AnimationCurve* motionCurve; // 0x2E0
		::System::Single totalTime; // 0x2E8
		::System::Single passTime; // 0x2EC
		::UnityEngine::RectTransform* rectTrans; // 0x2F0
		::Foundation::Coroutine::CoroutineHandle moveCoroutine; // 0x2F8
		::System::Action* OnFnish; // 0x300
		::Class_1_C4CB11A2FD957208_Class_1_A983ED79C549CB78* _prevItem; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshUI(::Class_1_C4CB11A2FD957208_Class_1_A983ED79C549CB78* rewardTip, ::System::Int32 redirectCount, ::System::Action* OnFinishCb)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Class_1_A983ED79C549CB78*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_REFRESHUI_OFFSET))(this, rewardTip, redirectCount, OnFinishCb);
		}

		::System::Void _CallDelayClose(::System::Single delayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__CALLDELAYCLOSE_OFFSET))(this, delayTime);
		}

		::System::Void _OnDelayCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__ONDELAYCALLBACK_OFFSET))(this);
		}

		::System::Void SetAnimMove(::UnityEngine::Vector2 targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_SETANIMMOVE_OFFSET))(this, targetPos);
		}

		::System::Void __OnDelayCallback_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___ONDELAYCALLBACK_B__23_0_OFFSET))(this);
		}

		::System::Void _SetAnimMove_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__SETANIMMOVE_B__24_0_OFFSET))(this);
		}

		::System::Void _SetAnimMove_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__SETANIMMOVE_B__24_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
