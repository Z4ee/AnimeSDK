#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_1824EF69C8E376A3;
class Class_2_1C00730466C60BCB_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ANIMATIONFINISH_OFFSET UNITYSDK_OFFSET(0x147FE0F0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x147FE5D0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GETCANVASINFO_OFFSET UNITYSDK_OFFSET(0x147FE170)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GETFADEININFO_OFFSET UNITYSDK_OFFSET(0x147FE070)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x147FD280)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_INITUIANIMATION_OFFSET UNITYSDK_OFFSET(0x147FD6F0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x147FD2E0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147FD8D0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x147FE4F0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147FE580)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147FD290)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147FE480)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x147FDEC0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETAVATARID_OFFSET UNITYSDK_OFFSET(0x147FDB30)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETCOMPLETEACT_OFFSET UNITYSDK_OFFSET(0x147FDA90)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETELEMENTCOLOR_OFFSET UNITYSDK_OFFSET(0x147FDBC0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETMIRRORX_OFFSET UNITYSDK_OFFSET(0x147FDF10)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETUISTOPACT_OFFSET UNITYSDK_OFFSET(0x147FDAE0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x147FD960)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147FEBF0)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147FEC00)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x147FEC90)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147FED50)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147FED60)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147FED70)
#define MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x147FEE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectFadeInChildWindowController_TypeDefinitionIndex = 58646;

	class UIRoleSelectFadeInChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single MORE_SIZE; // 0x0
		// static const ::System::Single POS_OFFSET; // 0x0
		// static const ::System::String* _animationName; // 0x0
		::UnityEngine::Vector2 _canvasSize; // 0x310
		::Class_2_1C00730466C60BCB_4* _view; // 0x318
		::System::Single _targetXPos; // 0x320
		::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* _curves; // 0x328
		::System::Single _totalTime; // 0x330
		::System::Single _sliderTimer1; // 0x334
		::System::Single _sliderTimer2; // 0x338
		::System::Single _sliderTimer3; // 0x33C
		::System::Single _timer; // 0x340
		::System::Boolean _startAni; // 0x344
		::System::Boolean _starSlider1; // 0x345
		::System::Boolean _starSlider2; // 0x346
		::System::Boolean _starSlider3; // 0x347
		::System::Boolean _finishSlider1; // 0x348
		::System::Boolean _finishSlider2; // 0x349
		::System::Boolean _finishSlider3; // 0x34A
		::UnityEngine::Vector2 _slider1InitPos; // 0x34C
		::UnityEngine::Vector2 _slider2InitPos; // 0x354
		::UnityEngine::Vector2 _slider3InitPos; // 0x35C
		::UnityEngine::Vector2 _slider1TargetPos; // 0x364
		::UnityEngine::Vector2 _slider2TargetPos; // 0x36C
		::UnityEngine::Vector2 _slider3TargetPos; // 0x374
		::System::Action* _AnimationCompleteAct; // 0x380
		::System::Action* _UIStopAct; // 0x388
		::UnityEngine::Rect _canvasRect; // 0x390
		::System::Collections::Generic::List_1<::System::Single>* _delayTimes; // 0x3A0
		::System::Boolean _isFinish; // 0x3A8
		::System::Single _finishTime; // 0x3AC
		::System::Boolean _actFinish; // 0x3B0
		::UnityEngine::Animation* _animation; // 0x3B8
		::System::Single _AnimationTime; // 0x3C0
		::Class_2_1824EF69C8E376A3* _avatarItemData; // 0x3C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitUIAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_INITUIANIMATION_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void SetCompleteAct(::System::Action* CompleteAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETCOMPLETEACT_OFFSET))(this, CompleteAct);
		}

		::System::Void SetUIStopAct(::System::Action* UIStopAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETUISTOPACT_OFFSET))(this, UIStopAct);
		}

		::System::Void SetAvatarID(::Class_2_1824EF69C8E376A3* avatarItemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETAVATARID_OFFSET))(this, avatarItemData);
		}

		::System::Void SetMirrorX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETMIRRORX_OFFSET))(this);
		}

		::System::Void SetElementColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_SETELEMENTCOLOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* GetFadeInInfo()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GETFADEININFO_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* AnimationFinish()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ANIMATIONFINISH_OFFSET))(this);
		}

		::System::Void GetCanvasInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_GETCANVASINFO_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTFADEINCHILDWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
