#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_8014842511EEC689;
class Class_3_2CBAA1B7A86535B9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_DORESET_OFFSET UNITYSDK_OFFSET(0xEBA4EE0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GETCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0xEBA60E0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GETNODEROOT_OFFSET UNITYSDK_OFFSET(0xEBA5340)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GET_FADECURVE_OFFSET UNITYSDK_OFFSET(0xEBA3B10)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xEBA3AA0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_INITTRACK_OFFSET UNITYSDK_OFFSET(0xEBA4AA0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xEBA4760)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xEBA3B80)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xEBA44F0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEBA3CB0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEBA4220)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_ONWIN_OFFSET UNITYSDK_OFFSET(0xEBA5150)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_SETANIMATORLOCKED_OFFSET UNITYSDK_OFFSET(0xEBA4BA0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TOGGLEPLAYERHOLDSOUND_OFFSET UNITYSDK_OFFSET(0xEBA5880)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TOGGLEPLAYERHOLD_OFFSET UNITYSDK_OFFSET(0xEBA5740)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRIGGERCLICKANIM_OFFSET UNITYSDK_OFFSET(0xEBA5480)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRIGGERSPEEDBOOSTANIM_OFFSET UNITYSDK_OFFSET(0xEBA5500)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRYSWITCHTRACK_1_OFFSET UNITYSDK_OFFSET(0xEBA5B80)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_TRYSWITCHTRACK_OFFSET UNITYSDK_OFFSET(0xEBA59F0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA6470)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__INITVIEW_B__22_0_OFFSET UNITYSDK_OFFSET(0xEBA7070)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONUIINIT_B__19_0_OFFSET UNITYSDK_OFFSET(0xEBA64D0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONUIINIT_B__19_1_OFFSET UNITYSDK_OFFSET(0xEBA6C40)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__ONWIN_B__25_0_OFFSET UNITYSDK_OFFSET(0xEBA7160)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xEBA71D0)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xEBA7270)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEBA7280)
#define MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEBA7310)

namespace MoleMole
{
	inline static constexpr unsigned int UISimpleParkourGameWidgetController_TypeDefinitionIndex = 61724;

	class UISimpleParkourGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2B8
		::Class_1_48D56DACBE4271BC* _syncHelper_Model; // 0x2C0
		::Class_3_2CBAA1B7A86535B9* _model; // 0x2C8
		::System::Boolean _hasInited; // 0x2D0
		::System::Boolean _isHoldingAnim; // 0x2D1
		::System::Boolean _isHoldingSound; // 0x2D2
		::System::Boolean _isBoosting; // 0x2D3
		::System::Boolean _animatorLocked; // 0x2D4
		::UnityEngine::Animator* _playerAnimator; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle _trackSwitchCoroutine; // 0x2E0
		::System::Boolean _hasCalledWin; // 0x2E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_8014842511EEC689* get__viewModel()
		{
			return ((::Class_2_8014842511EEC689*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURGAMEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
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
