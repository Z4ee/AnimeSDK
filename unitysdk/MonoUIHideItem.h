#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIHideItem_HandleSource.h"
#include "unitysdk/MonoUIHideItem_SetupInfo.h"
#include "unitysdk/MonoUIHideItem_ShowStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUIHideItem_CustomFadeConfig;
class UIGlobalAlpha;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define MONOUIHIDEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x12EB2AE0)
#define MONOUIHIDEITEM_CLEARRUNTIMEFADECONFIG_OFFSET UNITYSDK_OFFSET(0x12EB57D0)
#define MONOUIHIDEITEM_GETALPHA_OFFSET UNITYSDK_OFFSET(0x12EB4A40)
#define MONOUIHIDEITEM_GETANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x12EB4CE0)
#define MONOUIHIDEITEM_GETSETUPINFO_OFFSET UNITYSDK_OFFSET(0x12EB28B0)
#define MONOUIHIDEITEM_GET_ACTIONSETUPINFOS_OFFSET UNITYSDK_OFFSET(0x12EB2870)
#define MONOUIHIDEITEM_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x12EB2890)
#define MONOUIHIDEITEM_GET_REALTAG_OFFSET UNITYSDK_OFFSET(0x12EB25E0)
#define MONOUIHIDEITEM_GET_RUNTIMEFADECONFIGS_OFFSET UNITYSDK_OFFSET(0x12EB27C0)
#define MONOUIHIDEITEM_GET_ZONESETUPINFOS_OFFSET UNITYSDK_OFFSET(0x12EB2880)
#define MONOUIHIDEITEM_INTERRUPTSETUP_OFFSET UNITYSDK_OFFSET(0x12EB45E0)
#define MONOUIHIDEITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12EB36E0)
#define MONOUIHIDEITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12EB3690)
#define MONOUIHIDEITEM_ONPARENTSHOWSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x12EB4750)
#define MONOUIHIDEITEM_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x12EB3AE0)
#define MONOUIHIDEITEM_RESETITEM_OFFSET UNITYSDK_OFFSET(0x12EB4BD0)
#define MONOUIHIDEITEM_SAMPLEANIMLASTFRAME_OFFSET UNITYSDK_OFFSET(0x12EB55C0)
#define MONOUIHIDEITEM_SETALPHA_OFFSET UNITYSDK_OFFSET(0x12EB5130)
#define MONOUIHIDEITEM_SETBLOCKRAYCASTSSTATE_OFFSET UNITYSDK_OFFSET(0x12EB5780)
#define MONOUIHIDEITEM_SETUPUI_1_OFFSET UNITYSDK_OFFSET(0x12EB37D0)
#define MONOUIHIDEITEM_SETUPUI_OFFSET UNITYSDK_OFFSET(0x12EB3740)
#define MONOUIHIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB5AF0)
#define MONOUIHIDEITEM__GETCURRENTPLAYINGANIM_OFFSET UNITYSDK_OFFSET(0x12EB5420)
#define MONOUIHIDEITEM__GETTARGETANIMATIONCLIPNAME_OFFSET UNITYSDK_OFFSET(0x12EB4ED0)
#define MONOUIHIDEITEM__PLAYANIMATIONWITHDELAYCONFIRM_OFFSET UNITYSDK_OFFSET(0x12EB52E0)
#define MONOUIHIDEITEM__RESETFADECONFIGS_OFFSET UNITYSDK_OFFSET(0x12EB2660)
#define MONOUIHIDEITEM__SETTOANIMATIONLASTFRAME_OFFSET UNITYSDK_OFFSET(0x12EB5990)
#define MONOUIHIDEITEM__STOPCURRENTPLAYINGANIMATIONDELAY_OFFSET UNITYSDK_OFFSET(0x12EB5A30)
#define MONOUIHIDEITEM___PLAYANIMATIONWITHDELAYCONFIRM_B__54_0_OFFSET UNITYSDK_OFFSET(0x12EB5BD0)

inline static constexpr unsigned int MonoUIHideItem_TypeDefinitionIndex = 44239;

class MonoUIHideItem : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* EMPTY_SETUP_TAG; // 0x0
	// static const ::System::String* DEFAULT_TAG; // 0x0
	::System::String* Tag; // 0x18
	::System::Collections::Generic::List_1<::MonoUIHideItem_CustomFadeConfig*>* FadeConfigs; // 0x20
	::System::Collections::Generic::List_1<::MonoUIHideItem_CustomFadeConfig*>* tFadeConfigs; // 0x28
	::UnityEngine::CanvasGroup* _canvasGroup; // 0x30
	::UIGlobalAlpha* _globalAlphaComponent; // 0x38
	::UnityEngine::Animation* _animation; // 0x40
	::System::Collections::Generic::Dictionary_2<::MonoUIHideItem_ShowStatus, ::System::String*>* _animClipNameDic; // 0x48
	::System::Int32 _runtimeIdCounter; // 0x50
	::MonoUIHideItem_SetupInfo _defaultSetupInfo; // 0x54
	::System::Boolean _defaultIgnoreParent; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MonoUIHideItem_SetupInfo>* _actionSetupInfos; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MonoUIHideItem_SetupInfo>* _zoneSetupInfos; // 0x70
	::System::Boolean _isShow; // 0x78
	::UnityEngine::Transform* _highLightTrans; // 0x80
	::UnityEngine::Coroutine* _currentPlaying; // 0x88
	::System::String* _lastPlayAnimName; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__CTOR_OFFSET))(this);
	}

	::System::String* get_RealTag()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_REALTAG_OFFSET))(this);
	}

	::System::Void _ResetFadeConfigs()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__RESETFADECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MonoUIHideItem_CustomFadeConfig*>* get_RuntimeFadeConfigs()
	{
		return ((::System::Collections::Generic::List_1<::MonoUIHideItem_CustomFadeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_RUNTIMEFADECONFIGS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MonoUIHideItem_SetupInfo>* get_ActionSetupInfos()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MonoUIHideItem_SetupInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_ACTIONSETUPINFOS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MonoUIHideItem_SetupInfo>* get_ZoneSetupInfos()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MonoUIHideItem_SetupInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_ZONESETUPINFOS_OFFSET))(this);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GET_ISSHOW_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_AWAKE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_ONDESTROY_OFFSET))(this);
	}

	::System::Boolean SetupUI(::MonoUIHideItem_HandleSource handleSource, ::MonoUIHideItem_ShowStatus showStatus, ::System::Boolean ignoreAnimation, ::System::String* setupTag)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::MonoUIHideItem_ShowStatus, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETUPUI_OFFSET))(this, handleSource, showStatus, ignoreAnimation, setupTag);
	}

	::System::Boolean SetupUI_1(::MonoUIHideItem_HandleSource handleSource, ::System::String* setupTag, ::System::Int32 priority, ::System::Boolean isShow, ::System::Boolean isHighlight, ::System::Boolean ignoreAnimation)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETUPUI_1_OFFSET))(this, handleSource, setupTag, priority, isShow, isHighlight, ignoreAnimation);
	}

	::System::Boolean InterruptSetup(::MonoUIHideItem_HandleSource handleSource, ::System::String* setupTag, ::System::Boolean ignoreAnimation)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIHideItem_HandleSource, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_INTERRUPTSETUP_OFFSET))(this, handleSource, setupTag, ignoreAnimation);
	}

	::System::Void OnParentShowStateChanged(::System::Boolean isParentShow)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_ONPARENTSHOWSTATECHANGED_OFFSET))(this, isParentShow);
	}

	::System::Single GetAlpha()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GETALPHA_OFFSET))(this);
	}

	::System::Boolean ResetItem()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_RESETITEM_OFFSET))(this);
	}

	::System::Single GetAnimClipLength(::MonoUIHideItem_ShowStatus showStatus)
	{
		return ((::System::Single(*)(::PVOID, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GETANIMCLIPLENGTH_OFFSET))(this, showStatus);
	}

	::System::Void SetAlpha(::System::Single alpha)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETALPHA_OFFSET))(this, alpha);
	}

	::System::String* _GetTargetAnimationClipName(::MonoUIHideItem_ShowStatus showType)
	{
		return ((::System::String*(*)(::PVOID, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__GETTARGETANIMATIONCLIPNAME_OFFSET))(this, showType);
	}

	::System::Boolean RefreshItem(::System::Boolean ignoreAnimation)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_REFRESHITEM_OFFSET))(this, ignoreAnimation);
	}

	::System::Void SetBlockRaycastsState(::UnityEngine::CanvasGroup* canvasGroup, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETBLOCKRAYCASTSSTATE_OFFSET))(this, canvasGroup, enable);
	}

	::MonoUIHideItem_SetupInfo GetSetupInfo()
	{
		return ((::MonoUIHideItem_SetupInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_GETSETUPINFO_OFFSET))(this);
	}

	::System::Void ClearRuntimeFadeConfig(::MonoUIHideItem_ShowStatus showStatus, ::System::String* animName)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem_ShowStatus, ::System::String*))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_CLEARRUNTIMEFADECONFIG_OFFSET))(this, showStatus, animName);
	}

	::System::Void SampleAnimLastFrame(::MonoUIHideItem_ShowStatus showStatus)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SAMPLEANIMLASTFRAME_OFFSET))(this, showStatus);
	}

	::System::String* _GetCurrentPlayingAnim()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__GETCURRENTPLAYINGANIM_OFFSET))(this);
	}

	::System::Void _StopCurrentPlayingAnimationDelay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__STOPCURRENTPLAYINGANIMATIONDELAY_OFFSET))(this);
	}

	::System::Void _SetToAnimationLastFrame(::System::String* clipName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__SETTOANIMATIONLASTFRAME_OFFSET))(this, clipName);
	}

	::System::Void _PlayAnimationWithDelayConfirm(::System::String* animationName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM__PLAYANIMATIONWITHDELAYCONFIRM_OFFSET))(this, animationName);
	}

	::System::Void __PlayAnimationWithDelayConfirm_b__54_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM___PLAYANIMATIONWITHDELAYCONFIRM_B__54_0_OFFSET))(this);
	}
};
