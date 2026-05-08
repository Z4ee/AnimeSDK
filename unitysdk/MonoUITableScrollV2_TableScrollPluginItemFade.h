#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/System/Nullable_1.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_BaseScrollLogic;
class MonoUITableScrollV2_ConfigItemAnim;
namespace MoleMole { class AnimationCurveEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_CLEARCOROUTINES_OFFSET UNITYSDK_OFFSET(0xEBE5920)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ANIMSHOWALL_OFFSET UNITYSDK_OFFSET(0xEBE35E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CALFADEINTIME_OFFSET UNITYSDK_OFFSET(0xEBE3570)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CALFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0xEBE3770)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xEBE3840)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_DONTPLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xEBE3670)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xEBE3490)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINTERVAL_OFFSET UNITYSDK_OFFSET(0xEBE3500)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xEBE3690)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTINTERVAL_OFFSET UNITYSDK_OFFSET(0xEBE3700)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xEBE3820)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ISPLAYINGFADEINANIM_OFFSET UNITYSDK_OFFSET(0xEBE33C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ISPLAYINGFADEOUT_OFFSET UNITYSDK_OFFSET(0xEBE33A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ITEMFADEINDELAYTIME_OFFSET UNITYSDK_OFFSET(0xEBE3600)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0xEBE3800)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_M_DATAS_OFFSET UNITYSDK_OFFSET(0xEBE3880)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_M_ISDESTROY_OFFSET UNITYSDK_OFFSET(0xEBE8440)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_SIMPLEMODE_OFFSET UNITYSDK_OFFSET(0xEBE37E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_SKIPFADEIN_OFFSET UNITYSDK_OFFSET(0xEBE3470)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET__DATAMAP_OFFSET UNITYSDK_OFFSET(0xEBE3860)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_LATEPLAYITEMANIM_OFFSET UNITYSDK_OFFSET(0xEBE78A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_LATEPLAYPAGESHOWANIMATION_OFFSET UNITYSDK_OFFSET(0xEBE4090)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEBE3430)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ONINITDATA_OFFSET UNITYSDK_OFFSET(0xEBE33E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYCELLFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xEBE7960)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATIONWITHOUTEXPAND_OFFSET UNITYSDK_OFFSET(0xEBE5AC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_1_OFFSET UNITYSDK_OFFSET(0xEBE4140)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_2_OFFSET UNITYSDK_OFFSET(0xEBE3EA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_3_OFFSET UNITYSDK_OFFSET(0xEBE7010)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xEBE3BA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTANIMATION_1_OFFSET UNITYSDK_OFFSET(0xEBE58C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xEBE4D70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTWITHOUTEXPAND_OFFSET UNITYSDK_OFFSET(0xEBE5000)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_RESETUIANIMCELL_OFFSET UNITYSDK_OFFSET(0xEBE6670)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEANIMATIONTOSTART_1_OFFSET UNITYSDK_OFFSET(0xEBE6770)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEANIMATIONTOSTART_OFFSET UNITYSDK_OFFSET(0xEBE8180)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETFADEINANIMATIONTOFIRSTFRAMEWITHOUTEXPAND_OFFSET UNITYSDK_OFFSET(0xEBE3940)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETFADEINANIMATIONTOFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0xEBE38A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_ISPLAYINGFADEINANIM_OFFSET UNITYSDK_OFFSET(0xEBE33D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_ISPLAYINGFADEOUT_OFFSET UNITYSDK_OFFSET(0xEBE33B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_M_ISDESTROY_OFFSET UNITYSDK_OFFSET(0xEBE8450)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0xEBE41A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE3330)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__PLAYFADEINANIMATION_B__51_0_OFFSET UNITYSDK_OFFSET(0xEBE8460)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__SHOWNEXTANIMATION_OFFSET UNITYSDK_OFFSET(0xEBE7810)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEBE84C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___BASE_ONINITDATA_OFFSET UNITYSDK_OFFSET(0xEBE8550)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginItemFade_TypeDefinitionIndex = 54135;

class MonoUITableScrollV2_TableScrollPluginItemFade : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* _coroutines; // 0x18
	::MonoUITableScrollV2_ConfigItemAnim* _config; // 0x20
	::System::Boolean _m_isDestroy_k__BackingField; // 0x28
	::System::Boolean _isPlayingFadeInAnim_k__BackingField; // 0x29
	::System::Boolean _isPlayingFadeOut_k__BackingField; // 0x2A
	::System::Int32 _animOffset; // 0x2C
	::System::Single _fadeInAnimLength; // 0x30
	::System::Single _fadeOutAnimLength; // 0x34

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Boolean get_isPlayingFadeOut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ISPLAYINGFADEOUT_OFFSET))(this);
	}

	::System::Void set_isPlayingFadeOut(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_ISPLAYINGFADEOUT_OFFSET))(this, value);
	}

	::System::Boolean get_isPlayingFadeInAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ISPLAYINGFADEINANIM_OFFSET))(this);
	}

	::System::Void set_isPlayingFadeInAnim(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_ISPLAYINGFADEINANIM_OFFSET))(this, value);
	}

	::System::Void OnInitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ONINITDATA_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_ONDESTROY_OFFSET))(this);
	}

	::System::Boolean get_skipFadeIn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_SKIPFADEIN_OFFSET))(this);
	}

	::System::String* get_FadeInAnimationName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINANIMATIONNAME_OFFSET))(this);
	}

	::System::Single get_FadeInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEINTERVAL_OFFSET))(this);
	}

	::System::Boolean get_CalFadeInTime()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CALFADEINTIME_OFFSET))(this);
	}

	::System::Boolean get_AnimShowAll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ANIMSHOWALL_OFFSET))(this);
	}

	::System::Single get_ItemFadeInDelayTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_ITEMFADEINDELAYTIME_OFFSET))(this);
	}

	::System::Boolean get_dontPlayFadeOut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_DONTPLAYFADEOUT_OFFSET))(this);
	}

	::System::String* get_fadeOutAnimationName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTANIMATIONNAME_OFFSET))(this);
	}

	::System::Single get_fadeOutInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_FADEOUTINTERVAL_OFFSET))(this);
	}

	::System::Boolean get_calFadeOutTime()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CALFADEOUTTIME_OFFSET))(this);
	}

	::System::Boolean get_SimpleMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_SIMPLEMODE_OFFSET))(this);
	}

	::MonoUITableScrollV2_BaseScrollLogic* get_logic()
	{
		return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_LOGIC_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_gameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_GAMEOBJECT_OFFSET))(this);
	}

	::UnityEngine::RectTransform* get_content()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_CONTENT_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* get__dataMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET__DATAMAP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>* get_m_datas()
	{
		return ((::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_M_DATAS_OFFSET))(this);
	}

	::System::Void SetFadeInAnimationToFirstFrame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETFADEINANIMATIONTOFIRSTFRAME_OFFSET))(this);
	}

	::System::Void PlayFadeInAnimation(::MonoUITableScrollV2_ConfigItemAnim* config, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ConfigItemAnim*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_OFFSET))(this, config, normalizedTime);
	}

	::System::Void PlayFadeInAnimation_1(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_1_OFFSET))(this, normalizedTime);
	}

	::System::Void StopAnimation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_STOPANIMATION_OFFSET))(this);
	}

	::System::Single PlayFadeOutAnimation(::MonoUITableScrollV2_ConfigItemAnim* config, ::System::Action* fadeOutAction, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::MonoUITableScrollV2_ConfigItemAnim*, ::System::Action*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTANIMATION_OFFSET))(this, config, fadeOutAction, normalizedTime);
	}

	::System::Single PlayFadeOutAnimation_1(::System::Action* fadeOutAction, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Action*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTANIMATION_1_OFFSET))(this, fadeOutAction, normalizedTime);
	}

	::System::Void ClearCoroutines()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_CLEARCOROUTINES_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LatePlayPageShowAnimation(::System::Single delay, ::System::Boolean first, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_LATEPLAYPAGESHOWANIMATION_OFFSET))(this, delay, first, normalizedTime);
	}

	::System::Void PlayFadeInAnimation_2(::System::Boolean first, ::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_2_OFFSET))(this, first, normalizedTime);
	}

	::System::Void PlayFadeInAnimationWithoutExpand(::System::Boolean first)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATIONWITHOUTEXPAND_OFFSET))(this, first);
	}

	::System::Void SetFadeInAnimationToFirstFrameWithoutExpand()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SETFADEINANIMATIONTOFIRSTFRAMEWITHOUTEXPAND_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* _ShowNextAnimation(::System::Int32 dataCount)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__SHOWNEXTANIMATION_OFFSET))(this, dataCount);
	}

	::System::Void PlayFadeInAnimation_3(::UnityEngine::GameObject* go, ::System::Int32 animIndex, ::System::Int32 animGoCount, ::System::Int32 dataIndex, ::MoleMole::AnimationCurveEx* curve)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::AnimationCurveEx*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEINANIMATION_3_OFFSET))(this, go, animIndex, animGoCount, dataIndex, curve);
	}

	::System::Single PlayFadeOutWithoutExpand(::System::Action* fadeOutAction)
	{
		return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYFADEOUTWITHOUTEXPAND_OFFSET))(this, fadeOutAction);
	}

	::System::Void PlayCellFadeOutAnimation(::UnityEngine::GameObject* go, ::System::Int32 animIndex, ::System::Int32 animGoCount, ::System::Int32 dataIndex, ::MoleMole::AnimationCurveEx* curve)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::AnimationCurveEx*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_PLAYCELLFADEOUTANIMATION_OFFSET))(this, go, animIndex, animGoCount, dataIndex, curve);
	}

	::System::Void SampleAnimationToStart(::System::Boolean start)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEANIMATIONTOSTART_OFFSET))(this, start);
	}

	::System::Void SampleAnimationToStart_1(::UnityEngine::GameObject* go, ::System::Boolean start)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SAMPLEANIMATIONTOSTART_1_OFFSET))(this, go, start);
	}

	::System::Void ResetUIAnimCell(::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_RESETUIANIMCELL_OFFSET))(this, go);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LatePlayItemAnim(::UnityEngine::GameObject* go, ::System::Single delay, ::System::Boolean isFadeIn, ::System::Int32 offset)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_LATEPLAYITEMANIM_OFFSET))(this, go, delay, isFadeIn, offset);
	}

	::System::Boolean get_m_isDestroy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_GET_M_ISDESTROY_OFFSET))(this);
	}

	::System::Void set_m_isDestroy(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE_SET_M_ISDESTROY_OFFSET))(this, value);
	}

	::System::Void _PlayFadeInAnimation_b__51_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__PLAYFADEINANIMATION_B__51_0_OFFSET))(this);
	}

	::System::Void __base_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___BASE_ONDESTROY_OFFSET))(this);
	}

	::System::Void __base_OnInitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE___BASE_ONINITDATA_OFFSET))(this);
	}
};
