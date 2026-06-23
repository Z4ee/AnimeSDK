#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_HackEntrySubSystemMode.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BEAA93324417DF4;
class Class_2_79F6D62CE30E3F8E_9;
namespace MoleMole { class HackEntrySubSystem; }
namespace MoleMole { class HackEntrySubSystem_HackTarget; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIControllerExtension; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_APPLYMONOINPUTKEYLOGICEVENT_OFFSET UNITYSDK_OFFSET(0x181211E0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_BINDDATA_OFFSET UNITYSDK_OFFSET(0x1811CBA0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_CANCELROOTFADEBLOCK_OFFSET UNITYSDK_OFFSET(0x1811F410)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_COLLECTMONOINPUTKEYS_OFFSET UNITYSDK_OFFSET(0x1811C140)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ENSUREFOCUSDECORATIONREFS_OFFSET UNITYSDK_OFFSET(0x1811B090)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_FINISHROOTFADE_OFFSET UNITYSDK_OFFSET(0x1811F5B0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETHACKSCREENCENTERINPIXELS_OFFSET UNITYSDK_OFFSET(0x1811F010)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETHACKSCREENCENTERVIEWPORT_OFFSET UNITYSDK_OFFSET(0x18120F70)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETINDICATESCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1811F0B0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETINTERACTRANGEPARAM_OFFSET UNITYSDK_OFFSET(0x18120BF0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETPROGRESSVISIBLEFLAG_OFFSET UNITYSDK_OFFSET(0x18120860)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0x1811EFA0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0x1811F220)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1811ACD0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISCAMERASCANTARGET_OFFSET UNITYSDK_OFFSET(0x1811FD10)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISFOCUSSTYLETARGET_OFFSET UNITYSDK_OFFSET(0x1811FD70)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISSPECIALHACK_OFFSET UNITYSDK_OFFSET(0x1811FF50)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISTARGETPOINTINSIDESCREENRANGE_OFFSET UNITYSDK_OFFSET(0x1811EFB0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISTARGETPOINTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1811EF00)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_KILLROOTFADEANIMATION_OFFSET UNITYSDK_OFFSET(0x1811C6E0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1811F3B0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONCONTROLLABLEENDTRANS_OFFSET UNITYSDK_OFFSET(0x1811C300)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONCONTROLLABLESTARTTRANS_OFFSET UNITYSDK_OFFSET(0x1811C2B0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1811C3B0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1811C350)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONHACKSYSTEMMODECHANGED_OFFSET UNITYSDK_OFFSET(0x18121180)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1811EBF0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1811E150)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1811C440)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1811ACE0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1811C240)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1811E4F0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1811EAD0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_REFRESHHINTVISUALSTATE_OFFSET UNITYSDK_OFFSET(0x1811CCF0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_REFRESHLOCATIONTEXT_OFFSET UNITYSDK_OFFSET(0x1811DB80)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_REFRESHMONOINPUTKEYBYCURRENTMODE_OFFSET UNITYSDK_OFFSET(0x1811E080)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_RESETFOCUSDECORATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1811BF30)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_RESETPROGRESSSTATE_OFFSET UNITYSDK_OFFSET(0x1811BDC0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_RESETSCANINTERACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x1811C020)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETFOCUSDECORATIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1811E1C0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETPROGRESSVISIBLEFLAG_OFFSET UNITYSDK_OFFSET(0x181208C0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETPROGRESSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1811F620)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETROOTCANVASVISIBLE_OFFSET UNITYSDK_OFFSET(0x1811EC40)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETROOT_OFFSET UNITYSDK_OFFSET(0x1811C0B0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETSCANINTERACTIVEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1811E3B0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETSINGLEPROGRESSVISIBLE_OFFSET UNITYSDK_OFFSET(0x181202A0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETTIPSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1811BA80)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SHOULDSHOWTIPS_OFFSET UNITYSDK_OFFSET(0x1811FE20)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_STOPINTERACTAUDIO_OFFSET UNITYSDK_OFFSET(0x1811CA30)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_TRYCACHESUBSYSTEM_OFFSET UNITYSDK_OFFSET(0x1811EB60)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_TRYPLAYPROGRESSANIMATION_OFFSET UNITYSDK_OFFSET(0x18120930)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_TRYPLAYROOTFADE_OFFSET UNITYSDK_OFFSET(0x1811E560)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_TRYPLAYTIPSANIMATION_OFFSET UNITYSDK_OFFSET(0x1811FFD0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_UPDATEDISPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1811D300)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_UPDATEINTERACTAUDIO_OFFSET UNITYSDK_OFFSET(0x1811F740)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x181213F0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER__SETFOCUSDECORATIONVISIBLE_B__35_0_OFFSET UNITYSDK_OFFSET(0x18121430)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER__SETSCANINTERACTIVEVISIBLE_B__38_0_OFFSET UNITYSDK_OFFSET(0x18121460)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER__SETTIPSVISIBLE_B__34_0_OFFSET UNITYSDK_OFFSET(0x18121400)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18121490)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18121520)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18121530)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x181215C0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x181215D0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x181215E0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x181215F0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x18121680)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x18121690)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackInteractPointChildWindowController_TypeDefinitionIndex = 40225;

	class UIHackInteractPointChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 RootFadeAnimationCallbackTag = 0x2710; // 0x0
		// static const ::System::Int32 TipsAnimationCallbackTag = 0x2711; // 0x0
		// static const ::System::Int32 FocusDecorationAnimationCallbackTag = 0x2712; // 0x0
		// static const ::System::Int32 LargeProgressAnimationCallbackTag = 0x2713; // 0x0
		// static const ::System::Int32 SmallProgressAnimationCallbackTag = 0x2714; // 0x0
		// static const ::System::String* TipsFadeInClip; // 0x0
		// static const ::System::String* TipsFadeOutClip; // 0x0
		// static const ::System::String* ScanInteractiveFadeInClip; // 0x0
		// static const ::System::String* ScanInteractiveFadeOutClip; // 0x0
		// static const ::System::String* FocusProgressFadeInClip; // 0x0
		// static const ::System::String* FocusProgressFadeOutClip; // 0x0
		// static const ::System::String* IconRoleSkillHacker; // 0x0
		::Class_2_79F6D62CE30E3F8E_9* _view; // 0x318
		::Class_1_2BEAA93324417DF4* _eventCollection; // 0x320
		::System::Boolean _isInTransition; // 0x328
		::UnityEngine::Camera* _uiCamera; // 0x330
		::MoleMole::HackEntrySubSystem_HackTarget* currentHackTarget; // 0x338
		::MoleMole::HackEntrySubSystem* hackEntrySubSystem; // 0x340
		::UnityEngine::Animation* _rootAnimation; // 0x348
		::MoleMole::UIControllerExtension* _rootControllerExtension; // 0x350
		::System::String* _rootFadeClipName; // 0x358
		::System::Nullable_1<::System::Boolean> _rootFadeIn; // 0x360
		::System::Boolean _rootFadeBlocksInput; // 0x362
		::UnityEngine::Animation* _tipsAnimation; // 0x368
		::UnityEngine::Animation* _progressAnimation; // 0x370
		::UnityEngine::Animation* _progressAnimationSmall; // 0x378
		::System::Boolean _prevInteracting; // 0x380
		::System::Boolean _isLargeProgressVisible; // 0x381
		::System::Boolean _isSmallProgressVisible; // 0x382
		::System::Boolean _isFocusDecorationVisible; // 0x383
		::System::Boolean _isScanInteractiveVisible; // 0x384
		::System::Boolean _isTipsVisible; // 0x385
		::System::Single _prevProgress; // 0x388
		::System::Collections::Generic::List_1<::MoleMole::MonoInputKey*>* _cachedMonoInputKeys; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnControllableStartTrans(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONCONTROLLABLESTARTTRANS_OFFSET))(this, args);
		}

		::System::Void OnControllableEndTrans(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONCONTROLLABLEENDTRANS_OFFSET))(this, args);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindData(::System::UInt32 handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_BINDDATA_OFFSET))(this, handle);
		}

		::System::Void OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_PLAYFADEIN_OFFSET))(this, callback);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void RefreshLocationText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_REFRESHLOCATIONTEXT_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void UpdateDisplayState(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_UPDATEDISPLAYSTATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void TryCacheSubSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_TRYCACHESUBSYSTEM_OFFSET))(this);
		}

		::System::Void EnsureFocusDecorationRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ENSUREFOCUSDECORATIONREFS_OFFSET))(this);
		}

		::System::Boolean TryPlayRootFade(::System::Boolean fadeIn, ::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_TRYPLAYROOTFADE_OFFSET))(this, fadeIn, callback, animSpeed);
		}

		::System::Void KillRootFadeAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_KILLROOTFADEANIMATION_OFFSET))(this);
		}

		::System::Void FinishRootFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_FINISHROOTFADE_OFFSET))(this);
		}

		::System::Void CancelRootFadeBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_CANCELROOTFADEBLOCK_OFFSET))(this);
		}

		::System::Void RefreshHintVisualState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_REFRESHHINTVISUALSTATE_OFFSET))(this);
		}

		::System::Boolean IsSpecialHack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISSPECIALHACK_OFFSET))(this);
		}

		::System::Boolean IsCameraScanTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISCAMERASCANTARGET_OFFSET))(this);
		}

		::System::Void UpdateInteractAudio(::System::Boolean isInteracting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_UPDATEINTERACTAUDIO_OFFSET))(this, isInteracting);
		}

		::System::Void StopInteractAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_STOPINTERACTAUDIO_OFFSET))(this);
		}

		::System::Boolean ShouldShowTips(::System::Boolean useFocusStyle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SHOULDSHOWTIPS_OFFSET))(this, useFocusStyle);
		}

		::System::Boolean IsFocusStyleTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISFOCUSSTYLETARGET_OFFSET))(this);
		}

		::System::Void SetTipsVisible(::System::Boolean visible, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETTIPSVISIBLE_OFFSET))(this, visible, playAnim);
		}

		::System::Void SetFocusDecorationVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETFOCUSDECORATIONVISIBLE_OFFSET))(this, visible);
		}

		::System::Void ResetFocusDecorationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_RESETFOCUSDECORATIONSTATE_OFFSET))(this);
		}

		::System::Void ResetScanInteractiveState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_RESETSCANINTERACTIVESTATE_OFFSET))(this);
		}

		::System::Void SetScanInteractiveVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETSCANINTERACTIVEVISIBLE_OFFSET))(this, visible);
		}

		::System::Void SetRootCanvasVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETROOTCANVASVISIBLE_OFFSET))(this, visible);
		}

		::System::Void SetRoot(::System::Boolean isSpecial)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETROOT_OFFSET))(this, isSpecial);
		}

		::System::Void SetProgressVisible(::System::Boolean visible, ::System::Boolean playFadeIn, ::System::Boolean useLargeProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETPROGRESSVISIBLE_OFFSET))(this, visible, playFadeIn, useLargeProgress);
		}

		::System::Void SetSingleProgressVisible(::UnityEngine::GameObject* progressGo, ::UnityEngine::Animation* animation, ::System::Boolean visible, ::System::Boolean playFadeIn, ::System::Int32 callbackTag, ::System::Boolean isLargeProgress)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Animation*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETSINGLEPROGRESSVISIBLE_OFFSET))(this, progressGo, animation, visible, playFadeIn, callbackTag, isLargeProgress);
		}

		::System::Boolean TryPlayProgressAnimation(::UnityEngine::Animation* animation, ::System::String* clipName, ::System::Action* finishCB, ::System::Int32 callbackTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_TRYPLAYPROGRESSANIMATION_OFFSET))(this, animation, clipName, finishCB, callbackTag);
		}

		::System::Boolean GetProgressVisibleFlag(::System::Boolean isLargeProgress)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETPROGRESSVISIBLEFLAG_OFFSET))(this, isLargeProgress);
		}

		::System::Void SetProgressVisibleFlag(::System::Boolean isLargeProgress, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_SETPROGRESSVISIBLEFLAG_OFFSET))(this, isLargeProgress, visible);
		}

		::System::Void ResetProgressState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_RESETPROGRESSSTATE_OFFSET))(this);
		}

		::System::Boolean TryPlayTipsAnimation(::System::String* clipName, ::System::Action* finishCB)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_TRYPLAYTIPSANIMATION_OFFSET))(this, clipName, finishCB);
		}

		::System::Boolean IsTargetPointVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISTARGETPOINTVISIBLE_OFFSET))(this);
		}

		::System::Boolean IsTargetPointInsideScreenRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ISTARGETPOINTINSIDESCREENRANGE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetIndicateScreenPosition(::UnityEngine::Vector2 dir, ::UnityEngine::Vector3 screenPos, ::UnityEngine::Vector2 screenCenter)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETINDICATESCREENPOSITION_OFFSET))(this, dir, screenPos, screenCenter);
		}

		static ::UnityEngine::Vector2 GetHackScreenCenterViewport(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode hackMode)
		{
			return ((::UnityEngine::Vector2(*)(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETHACKSCREENCENTERVIEWPORT_OFFSET))(hackMode);
		}

		static ::UnityEngine::Vector2 GetHackScreenCenterInPixels(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode hackMode)
		{
			return ((::UnityEngine::Vector2(*)(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETHACKSCREENCENTERINPIXELS_OFFSET))(hackMode);
		}

		::UnityEngine::Vector3 GetInteractRangeParam(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode hackMode, ::UnityEngine::Vector3 screenPos, ::UnityEngine::Vector2 dir, ::UnityEngine::Vector2 screenCenter)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GETINTERACTRANGEPARAM_OFFSET))(this, hackMode, screenPos, dir, screenCenter);
		}

		::System::Void CollectMonoInputKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_COLLECTMONOINPUTKEYS_OFFSET))(this);
		}

		::System::Void OnHackSystemModeChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_ONHACKSYSTEMMODECHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshMonoInputKeyByCurrentMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_REFRESHMONOINPUTKEYBYCURRENTMODE_OFFSET))(this);
		}

		::System::Void ApplyMonoInputKeyLogicEvent(::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_HackEntrySubSystemMode))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_APPLYMONOINPUTKEYLOGICEVENT_OFFSET))(this, mode);
		}

		::UnityEngine::Camera* get_mainCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GET_MAINCAMERA_OFFSET))(this);
		}

		::UnityEngine::Camera* get_uiCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER_GET_UICAMERA_OFFSET))(this);
		}

		::System::Void _SetTipsVisible_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER__SETTIPSVISIBLE_B__34_0_OFFSET))(this);
		}

		::System::Void _SetFocusDecorationVisible_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER__SETFOCUSDECORATIONVISIBLE_B__35_0_OFFSET))(this);
		}

		::System::Void _SetScanInteractiveVisible_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER__SETSCANINTERACTIVEVISIBLE_B__38_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeIn(::System::Action* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_PLAYFADEIN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}
	};
}
