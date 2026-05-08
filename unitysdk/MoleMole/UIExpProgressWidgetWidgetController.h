#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D6646C12B5D25CB4;
class Class_3_AE02BC8285203464_8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_GET_ISPOPANIMWAITPROGRESSDONE_OFFSET UNITYSDK_OFFSET(0x15188790)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_GET_ISPOPEXPADDANIM_OFFSET UNITYSDK_OFFSET(0x15188770)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15187210)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151872A0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15187130)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15187190)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_PREPAREUI_1_OFFSET UNITYSDK_OFFSET(0x15187810)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_PREPAREUI_OFFSET UNITYSDK_OFFSET(0x151876A0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_SAMPLEANIM_OFFSET UNITYSDK_OFFSET(0x151886A0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_SET_ISPOPANIMWAITPROGRESSDONE_OFFSET UNITYSDK_OFFSET(0x151887A0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_SET_ISPOPEXPADDANIM_OFFSET UNITYSDK_OFFSET(0x15188780)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_SKIPEXPPROGRESS_OFFSET UNITYSDK_OFFSET(0x15188B20)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_STARTEXPPROGRESS_OFFSET UNITYSDK_OFFSET(0x151887B0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15188BA0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__GETLEVELTARGETEXP_OFFSET UNITYSDK_OFFSET(0x15187430)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__LOG_OFFSET UNITYSDK_OFFSET(0x15187660)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__PLAYADDEXPANI_OFFSET UNITYSDK_OFFSET(0x15188A10)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__PLAYUPGRADELVTEXTANIM_OFFSET UNITYSDK_OFFSET(0x15188550)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__REFRESHINITTARGETEXP_OFFSET UNITYSDK_OFFSET(0x15187EE0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x15187FD0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__UPGRADETOCURRLEVEL_OFFSET UNITYSDK_OFFSET(0x151883B0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15188C90)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15188D20)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15188DB0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15188E40)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___PLAYUPGRADELVTEXTANIM_B__20_0_OFFSET UNITYSDK_OFFSET(0x15188C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpProgressWidgetWidgetController_TypeDefinitionIndex = 43597;

	class UIExpProgressWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D6646C12B5D25CB4* _view; // 0x2B8
		::System::Int32 _lastAddExp; // 0x2C0
		::System::Int32 _startExp; // 0x2C4
		::System::Int32 _startLv; // 0x2C8
		::System::Int32 _toExp; // 0x2CC
		::System::Boolean _isUpLevel; // 0x2D0
		::System::Boolean _isMaxLevel; // 0x2D1
		::Class_3_AE02BC8285203464_8* _prevLvInfo; // 0x2D8
		::Class_3_AE02BC8285203464_8* _curLvInfo; // 0x2E0
		::System::Single startTime; // 0x2E8
		::System::Int32 totalProgressExpCount; // 0x2EC
		::System::Boolean _IsPopExpAddAnim_k__BackingField; // 0x2F0
		::System::Boolean _IsPopAnimWaitProgressDone_k__BackingField; // 0x2F1
		::UnityEngine::AnimationCurve* _lastCurve; // 0x2F8
		::System::Boolean _isStarted; // 0x300
		::System::Boolean _isPopAddWaitProg; // 0x301
		::System::Single _upgradePauseDuration; // 0x304
		::System::Action* _onPlayFinished; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 _GetLevelTargetExp(::System::Int32 level)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__GETLEVELTARGETEXP_OFFSET))(this, level);
		}

		static ::System::Void _Log(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__LOG_OFFSET))(content);
		}

		::System::Void PrepareUI(::System::Int32 addedExp, ::System::Int32 oldExp, ::System::Int32 oldTotalExp, ::System::Int32 newExp, ::System::Int32 newTotalExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_PREPAREUI_OFFSET))(this, addedExp, oldExp, oldTotalExp, newExp, newTotalExp);
		}

		::System::Void PrepareUI_1(::System::Int32 addedExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_PREPAREUI_1_OFFSET))(this, addedExp);
		}

		::System::Void _UpgradeToCurrLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__UPGRADETOCURRLEVEL_OFFSET))(this);
		}

		::System::Void _PlayUpgradeLvTextAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__PLAYUPGRADELVTEXTANIM_OFFSET))(this);
		}

		::System::Boolean get_IsPopExpAddAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_GET_ISPOPEXPADDANIM_OFFSET))(this);
		}

		::System::Void set_IsPopExpAddAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_SET_ISPOPEXPADDANIM_OFFSET))(this, value);
		}

		::System::Boolean get_IsPopAnimWaitProgressDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_GET_ISPOPANIMWAITPROGRESSDONE_OFFSET))(this);
		}

		::System::Void set_IsPopAnimWaitProgressDone(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_SET_ISPOPANIMWAITPROGRESSDONE_OFFSET))(this, value);
		}

		::System::Void StartExpProgress(::System::Single inFillDuration, ::System::Single upgradePauseDuration, ::System::Action* onFinished, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_STARTEXPPROGRESS_OFFSET))(this, inFillDuration, upgradePauseDuration, onFinished, curve);
		}

		::System::Void SkipExpProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_SKIPEXPPROGRESS_OFFSET))(this);
		}

		::System::Void _RefreshInitTargetExp(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__REFRESHINITTARGETEXP_OFFSET))(this, from, to);
		}

		::System::Void _RefreshProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__REFRESHPROGRESS_OFFSET))(this, value);
		}

		::System::Void _PlayAddExpAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER__PLAYADDEXPANI_OFFSET))(this);
		}

		::System::Void SampleAnim(::UnityEngine::Animation* anim, ::System::String* clipName, ::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER_SAMPLEANIM_OFFSET))(this, anim, clipName, normalizedTime);
		}

		::System::Void __PlayUpgradeLvTextAnim_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___PLAYUPGRADELVTEXTANIM_B__20_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
