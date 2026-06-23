#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_9333BACDC00CE767;
class Class_3_2CBAA1B7A86535B9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_DORESET_OFFSET UNITYSDK_OFFSET(0x15F44170)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GETCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x15F45370)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GETNODEROOT_OFFSET UNITYSDK_OFFSET(0x15F445D0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GET_FADECURVE_OFFSET UNITYSDK_OFFSET(0x15F42DA0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F42D30)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_INITTRACK_OFFSET UNITYSDK_OFFSET(0x15F43D30)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15F439F0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F42E10)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15F43780)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F42F40)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F434B0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONWIN_OFFSET UNITYSDK_OFFSET(0x15F443E0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_SETANIMATORLOCKED_OFFSET UNITYSDK_OFFSET(0x15F43E30)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TOGGLEPLAYERHOLDSOUND_OFFSET UNITYSDK_OFFSET(0x15F44B10)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TOGGLEPLAYERHOLD_OFFSET UNITYSDK_OFFSET(0x15F449D0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRIGGERCLICKANIM_OFFSET UNITYSDK_OFFSET(0x15F44710)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRIGGERSPEEDBOOSTANIM_OFFSET UNITYSDK_OFFSET(0x15F44790)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRYSWITCHTRACK_1_OFFSET UNITYSDK_OFFSET(0x15F44E10)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRYSWITCHTRACK_OFFSET UNITYSDK_OFFSET(0x15F44C80)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F45700)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__INITVIEW_B__22_0_OFFSET UNITYSDK_OFFSET(0x15F462F0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONUIINIT_B__19_0_OFFSET UNITYSDK_OFFSET(0x15F45760)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONUIINIT_B__19_1_OFFSET UNITYSDK_OFFSET(0x15F45EC0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONWIN_B__25_0_OFFSET UNITYSDK_OFFSET(0x15F463E0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F46450)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15F464F0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F46500)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F46590)

namespace MoleMole
{
	inline static constexpr unsigned int UISimpleParkourGameWidgetController_TypeDefinitionIndex = 83828;

	class UISimpleParkourGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2C0
		::Class_1_48D56DACBE4271BC* _syncHelper_Model; // 0x2C8
		::Class_3_2CBAA1B7A86535B9* _model; // 0x2D0
		::System::Boolean _hasInited; // 0x2D8
		::System::Boolean _isHoldingAnim; // 0x2D9
		::System::Boolean _isHoldingSound; // 0x2DA
		::System::Boolean _isBoosting; // 0x2DB
		::System::Boolean _animatorLocked; // 0x2DC
		::UnityEngine::Animator* _playerAnimator; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle _trackSwitchCoroutine; // 0x2E8
		::System::Boolean _hasCalledWin; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_9333BACDC00CE767* get__viewModel()
		{
			return ((::Class_2_9333BACDC00CE767*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_FadeCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GET_FADECURVE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void DoReset(::System::Action* onAnimEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_DORESET_OFFSET))(this, onAnimEnd);
		}

		::System::Void OnWin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONWIN_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetNodeRoot(::MoleMole::MiniUIGame::SimpleParkour::ETrackType tracktype)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GETNODEROOT_OFFSET))(this, tracktype);
		}

		::System::Void TriggerClickAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRIGGERCLICKANIM_OFFSET))(this);
		}

		::System::Void TriggerSpeedBoostAnim(::System::Boolean isSpeedUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRIGGERSPEEDBOOSTANIM_OFFSET))(this, isSpeedUp);
		}

		::System::Void TogglePlayerHold(::System::Boolean isHolding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TOGGLEPLAYERHOLD_OFFSET))(this, isHolding);
		}

		::System::Void TogglePlayerHoldSound(::System::Boolean isHolding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TOGGLEPLAYERHOLDSOUND_OFFSET))(this, isHolding);
		}

		::System::Void TrySwitchTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRYSWITCHTRACK_OFFSET))(this);
		}

		::System::Void TrySwitchTrack_1(::MoleMole::MiniUIGame::SimpleParkour::ETrackType targetTrack, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRYSWITCHTRACK_1_OFFSET))(this, targetTrack, isInit);
		}

		::System::Void InitTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_INITTRACK_OFFSET))(this);
		}

		::System::Single GetClipLength(::System::String* clipName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GETCLIPLENGTH_OFFSET))(this, clipName);
		}

		::System::Void SetAnimatorLocked(::System::Boolean locked, ::System::Boolean resetParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_SETANIMATORLOCKED_OFFSET))(this, locked, resetParam);
		}

		::System::Void _OnUIInit_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONUIINIT_B__19_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONUIINIT_B__19_1_OFFSET))(this);
		}

		::System::Void _InitView_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__INITVIEW_B__22_0_OFFSET))(this);
		}

		::System::Void _OnWin_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONWIN_B__25_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
