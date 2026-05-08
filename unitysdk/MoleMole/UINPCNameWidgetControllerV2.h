#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CD6915EC12D64B9;
class Class_1_320A75E91340F501;
class Class_1_7E9DD9C420D52D84;
class Class_2_5918EB2C42062A7B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINPCNameWidgetControllerV2_AnimData; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace miHoYoEmotion { class EmoSync; }

#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_APPLYVISUALSTATE_OFFSET UNITYSDK_OFFSET(0x15C7ED00)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CHECKOCCLUSIONPHYSICSHIT_OFFSET UNITYSDK_OFFSET(0x15C7B330)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CLEARALLANIMATION_OFFSET UNITYSDK_OFFSET(0x15C799B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHALLANIMATION_OFFSET UNITYSDK_OFFSET(0x15C7A930)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHROOTANIMATION_OFFSET UNITYSDK_OFFSET(0x15C7EF80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GETTRACKICONFADEANI_OFFSET UNITYSDK_OFFSET(0x15C7AE90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x15C78CC0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ISDOORLEAVESTATE_OFFSET UNITYSDK_OFFSET(0x15C7CCF0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONDISABLE_OFFSET UNITYSDK_OFFSET(0x15C7A7A0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONENABLE_OFFSET UNITYSDK_OFFSET(0x15C79F30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBUILDINTERACTMAP_OFFSET UNITYSDK_OFFSET(0x15C81D30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCLOSENPCTRACK_OFFSET UNITYSDK_OFFSET(0x15C82550)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C795F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEINTRACKICON_OFFSET UNITYSDK_OFFSET(0x15C7A160)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEOUTTRACKICON_OFFSET UNITYSDK_OFFSET(0x15C7A400)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x15C81F30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHATUI_OFFSET UNITYSDK_OFFSET(0x15C81500)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHAT_OFFSET UNITYSDK_OFFSET(0x15C814B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONINNPCCHATDISTANCE_OFFSET UNITYSDK_OFFSET(0x15C81690)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONMAINCITYSHOWSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x15C81E20)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCINTERACTED_OFFSET UNITYSDK_OFFSET(0x15C81EC0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSPECIALHINTUPDATE_OFFSET UNITYSDK_OFFSET(0x15C82450)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSTARTINTERACT_OFFSET UNITYSDK_OFFSET(0x15C81DB0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONOUTNPCCHATDISTANCE_OFFSET UNITYSDK_OFFSET(0x15C81720)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTTRACKUPDATE_OFFSET UNITYSDK_OFFSET(0x15C82400)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0x15C823B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_1_OFFSET UNITYSDK_OFFSET(0x15C812E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_OFFSET UNITYSDK_OFFSET(0x15C81890)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHAT_OFFSET UNITYSDK_OFFSET(0x15C81180)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15C79C30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C796C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C78CE0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x15C7AB10)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUNLOCKINTERACTED_OFFSET UNITYSDK_OFFSET(0x15C822F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATE2D_OFFSET UNITYSDK_OFFSET(0x15C7DF60)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATEINTERACT_OFFSET UNITYSDK_OFFSET(0x15C818F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWANIM_OFFSET UNITYSDK_OFFSET(0x15C81940)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWINTERACTFADEOUT_OFFSET UNITYSDK_OFFSET(0x15C81A90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYCHATBUBBLEANIM_OFFSET UNITYSDK_OFFSET(0x15C80190)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYDIFFTRACKICONANIM_OFFSET UNITYSDK_OFFSET(0x15C7F5C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYEMOSYNC_OFFSET UNITYSDK_OFFSET(0x15C80E40)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYNAMETEXTANIM_OFFSET UNITYSDK_OFFSET(0x15C80090)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_1_OFFSET UNITYSDK_OFFSET(0x15C7F4E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_OFFSET UNITYSDK_OFFSET(0x15C7A360)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONNEARANIM_OFFSET UNITYSDK_OFFSET(0x15C7FB30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x15C805D0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHNAME_OFFSET UNITYSDK_OFFSET(0x15C7B5F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHSPECIALHINT_OFFSET UNITYSDK_OFFSET(0x15C7B980)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHTRACKICON_OFFSET UNITYSDK_OFFSET(0x15C7CF60)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHUNLOCK_OFFSET UNITYSDK_OFFSET(0x15C7B820)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLEALLTOFADEIN_OFFSET UNITYSDK_OFFSET(0x15C79C90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLEANIM_OFFSET UNITYSDK_OFFSET(0x15C7AF30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLETOFADEANIMATION_OFFSET UNITYSDK_OFFSET(0x15C7F430)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETCHATBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0x15C80440)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETDOORNAME_OFFSET UNITYSDK_OFFSET(0x15C81C90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETENTITY_OFFSET UNITYSDK_OFFSET(0x15C7B000)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNAMETEXT_OFFSET UNITYSDK_OFFSET(0x15C7CBB0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNULLNAMETEXT_OFFSET UNITYSDK_OFFSET(0x15C7FE40)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x15C78CD0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_STOPALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x15C79E30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UNACTIVETRACKICON_1_OFFSET UNITYSDK_OFFSET(0x15C7FD10)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UNACTIVETRACKICON_OFFSET UNITYSDK_OFFSET(0x15C7FCB0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEALLANIMATION_OFFSET UNITYSDK_OFFSET(0x15C79F90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEARROWVISIBILITY_OFFSET UNITYSDK_OFFSET(0x15C7B9E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATENAMETEXTVISIBILITY_OFFSET UNITYSDK_OFFSET(0x15C7E330)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x15C7B390)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x15C80030)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATERECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15C7E770)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEROOTANIMATION_OFFSET UNITYSDK_OFFSET(0x15C7F3B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATETRACKICONVISIBILITY_OFFSET UNITYSDK_OFFSET(0x15C7BF60)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__CTOR_OFFSET UNITYSDK_OFFSET(0x15C82620)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__12_0_OFFSET UNITYSDK_OFFSET(0x15C82680)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__12_1_OFFSET UNITYSDK_OFFSET(0x15C826B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYARROWINTERACTFADEOUT_B__78_0_OFFSET UNITYSDK_OFFSET(0x15C827E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYNAMETEXTANIM_B__61_0_OFFSET UNITYSDK_OFFSET(0x15C827C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKICONIMAGE_39_0_OFFSET UNITYSDK_OFFSET(0x15C7DE40)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKROLEIMAGE_39_1_OFFSET UNITYSDK_OFFSET(0x15C7DBD0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__UPDATETRACKICONVISIBILITY_B__50_0_OFFSET UNITYSDK_OFFSET(0x15C826E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__UPDATETRACKICONVISIBILITY_B__50_1_OFFSET UNITYSDK_OFFSET(0x15C82750)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C827F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15C82880)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C82890)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C82920)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x15C829B0)

namespace MoleMole
{
	inline static constexpr unsigned int UINPCNameWidgetControllerV2_TypeDefinitionIndex = 63049;

	class UINPCNameWidgetControllerV2 : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _NeedCache_k__BackingField; // 0x2B8
		::Class_1_320A75E91340F501* _data; // 0x2C0
		::Class_2_5918EB2C42062A7B* _view; // 0x2C8
		::System::UInt32 _entityId; // 0x2D0
		::System::Int32 _npcConfigId; // 0x2D4
		::System::Boolean _inOcclusion; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle _trackIconAnimChatDelayHandle; // 0x2DC
		::Foundation::Coroutine::CoroutineHandle _chatBubbleAnimDelayHandle; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle _arrowFadeAnimHandle; // 0x2E4
		::System::Collections::Generic::List_1<::MoleMole::UINPCNameWidgetControllerV2_AnimData*>* _animDatas; // 0x2E8
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _outerTrackIconAnimData; // 0x2F0
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _innerTrackIconAnimData; // 0x2F8
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _nameTextAnimData; // 0x300
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _chatAnimData; // 0x308
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _arrowAnimData; // 0x310
		::Class_1_2CD6915EC12D64B9* _outerTrackIconResetHelper; // 0x318
		::Class_1_2CD6915EC12D64B9* _innerTrackIconResetHelper; // 0x320
		::System::UInt32 _currentPendingVoice; // 0x328
		::Foundation::AssetRequestHandle emoHandler; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUICLOSE_OFFSET))(this);
		}

		::System::Void StopAllCoroutines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_STOPALLCOROUTINES_OFFSET))(this);
		}

		::System::Void OnBeforeOnEnable(::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONENABLE_OFFSET))(this, hasAvatarEnterArea);
		}

		::System::Boolean OnFadeInTrackIcon(::System::Boolean hasNeedPlayFadeInAnim)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEINTRACKICON_OFFSET))(this, hasNeedPlayFadeInAnim);
		}

		::System::Boolean OnFadeOutTrackIcon(::System::Boolean hasNeedPlayFadeOutAnim)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEOUTTRACKICON_OFFSET))(this, hasNeedPlayFadeOutAnim);
		}

		::System::Void OnBeforeOnDisable(::System::Boolean needCleanText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONDISABLE_OFFSET))(this, needCleanText);
		}

		::System::Void OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIREUSE_OFFSET))(this);
		}

		::System::Void SampleAllToFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLEALLTOFADEIN_OFFSET))(this);
		}

		::System::Void ClearAllAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CLEARALLANIMATION_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::Battle::Entity* entity, ::Class_1_320A75E91340F501* data, ::System::Int32 npcConfigId, ::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_320A75E91340F501*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETENTITY_OFFSET))(this, entity, data, npcConfigId, hasAvatarEnterArea);
		}

		::System::Void RefreshName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHNAME_OFFSET))(this);
		}

		::System::Boolean IsDoorLeaveState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ISDOORLEAVESTATE_OFFSET))(this);
		}

		::System::Void RefreshUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHUNLOCK_OFFSET))(this);
		}

		::System::Void RefreshSpecialHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHSPECIALHINT_OFFSET))(this);
		}

		::System::Void RefreshTrackIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHTRACKICON_OFFSET))(this);
		}

		::System::Void OnUpdate2D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATE2D_OFFSET))(this);
		}

		::System::Void ApplyVisualState(::System::Single avatarXZDis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_APPLYVISUALSTATE_OFFSET))(this, avatarXZDis);
		}

		::System::Void UpdateAllAnimation(::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEALLANIMATION_OFFSET))(this, hasAvatarEnterArea);
		}

		::System::Void FinishAllAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHALLANIMATION_OFFSET))(this);
		}

		::System::Void UpdateRootAnimation(::System::Single avatarDis, ::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEROOTANIMATION_OFFSET))(this, avatarDis, hasAvatarEnterArea);
		}

		::System::Void FinishRootAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHROOTANIMATION_OFFSET))(this);
		}

		::System::Void SampleToFadeAnimation(::MoleMole::UINPCNameWidgetControllerV2_AnimData* animData, ::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINPCNameWidgetControllerV2_AnimData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLETOFADEANIMATION_OFFSET))(this, animData, isShow);
		}

		::System::Boolean CheckOcclusionPhysicsHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CHECKOCCLUSIONPHYSICSHIT_OFFSET))(this);
		}

		::System::Void UpdateOcclusion(::System::Boolean inOcclusion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOCCLUSION_OFFSET))(this, inOcclusion);
		}

		::System::Void UpdateRectTransform(::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATERECTTRANSFORM_OFFSET))(this, targetPos);
		}

		::System::Void UpdateTrackIconVisibility(::System::Boolean anim, ::System::Single avatarDis, ::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATETRACKICONVISIBILITY_OFFSET))(this, anim, avatarDis, hasAvatarEnterArea);
		}

		::System::Void PlayDiffTrackIconAnim(::UnityEngine::GameObject* trackIconObject, ::Class_1_2CD6915EC12D64B9* trackIconAnim, ::System::Int32 trackIconStatus, ::System::Boolean anim, ::System::Boolean show, ::System::Boolean showText, ::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_2CD6915EC12D64B9*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYDIFFTRACKICONANIM_OFFSET))(this, trackIconObject, trackIconAnim, trackIconStatus, anim, show, showText, hasAvatarEnterArea);
		}

		::System::Void PlayTrackIconAnim(::UnityEngine::GameObject* trackIconObject, ::MoleMole::UINPCNameWidgetControllerV2_AnimData* trackIconAnim, ::System::Boolean isFadeIn, ::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::UINPCNameWidgetControllerV2_AnimData*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_OFFSET))(this, trackIconObject, trackIconAnim, isFadeIn, cb);
		}

		::System::Void UnActiveTrackIcon(::UnityEngine::GameObject* trackIconObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UNACTIVETRACKICON_OFFSET))(this, trackIconObject);
		}

		::System::Void UnActiveTrackIcon_1(::UnityEngine::GameObject* trackIconObject, ::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UNACTIVETRACKICON_1_OFFSET))(this, trackIconObject, root);
		}

		::System::Void PlayTrackIconAnim_1(::UnityEngine::GameObject* trackIconObject, ::Class_1_2CD6915EC12D64B9* resetHelper, ::System::String* clipName, ::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_2CD6915EC12D64B9*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_1_OFFSET))(this, trackIconObject, resetHelper, clipName, cb);
		}

		::System::Void PlayTrackIconNearAnim(::UnityEngine::GameObject* trackIconObject, ::UnityEngine::Animation* trackIconAnim, ::System::Boolean isNear)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Animation*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONNEARANIM_OFFSET))(this, trackIconObject, trackIconAnim, isNear);
		}

		::System::String* GetTrackIconFadeAni(::System::Boolean isNear, ::System::Boolean isFadeIn)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GETTRACKICONFADEANI_OFFSET))(this, isNear, isFadeIn);
		}

		::System::Void SetNullNameText(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNULLNAMETEXT_OFFSET))(this, key);
		}

		::System::Void SetNameText(::System::String* key, ::System::Boolean isKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNAMETEXT_OFFSET))(this, key, isKey);
		}

		::System::Void UpdateNameTextVisibility(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATENAMETEXTVISIBILITY_OFFSET))(this, anim);
		}

		::System::Void PlayNameTextAnim(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYNAMETEXTANIM_OFFSET))(this, isShow);
		}

		::System::Void UpdateOffset(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOFFSET_OFFSET))(this, isShow);
		}

		::System::Void PlayChatBubbleAnim(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYCHATBUBBLEANIM_OFFSET))(this, isShow);
		}

		::System::Boolean SetChatBubbleText(::System::String* textKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETCHATBUBBLETEXT_OFFSET))(this, textKey);
		}

		::System::Void PlayVoice(::System::String* voice)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYVOICE_OFFSET))(this, voice);
		}

		::System::Void PlayEmoSync(::miHoYoEmotion::EmoSync* emoSync, ::System::String* voiceKey)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoSync*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYEMOSYNC_OFFSET))(this, emoSync, voiceKey);
		}

		::System::Void OnShowNpcChat(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHAT_OFFSET))(this, args);
		}

		::System::Void OnHideNpcChat(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHAT_OFFSET))(this, args);
		}

		::System::Void OnInNpcChatDistance(::System::Int32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONINNPCCHATDISTANCE_OFFSET))(this, npcTag);
		}

		::System::Void OnOutNpcChatDistance(::System::Int32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONOUTNPCCHATDISTANCE_OFFSET))(this, npcTag);
		}

		::System::Void OnShowNpcChatUI(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_OFFSET))(this, args);
		}

		::System::Void OnHideNpcChatUI(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHATUI_OFFSET))(this, args);
		}

		::System::Boolean OnShowNpcChatUI_1(::System::Object* args, ::Class_1_7E9DD9C420D52D84*& data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Class_1_7E9DD9C420D52D84*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_1_OFFSET))(this, args, data);
		}

		::System::Void OnUpdateInteract(::System::UInt64 args)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATEINTERACT_OFFSET))(this, args);
		}

		::System::Void UpdateArrowVisibility(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEARROWVISIBILITY_OFFSET))(this, anim);
		}

		::System::Void PlayArrowInteractFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWINTERACTFADEOUT_OFFSET))(this);
		}

		::System::Void PlayArrowAnim(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWANIM_OFFSET))(this, isShow);
		}

		::System::Void SetDoorName(::System::Boolean clearNpcName, ::System::String* doorNameKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETDOORNAME_OFFSET))(this, clearNpcName, doorNameKey);
		}

		::System::Void OnBuildInteractMap(::System::UInt32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBUILDINTERACTMAP_OFFSET))(this, npcTag);
		}

		::System::Void OnNpcStartInteract(::System::Int32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSTARTINTERACT_OFFSET))(this, npcTag);
		}

		::System::Void OnMainCityShowStateChange(::System::Boolean showUI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONMAINCITYSHOWSTATECHANGE_OFFSET))(this, showUI);
		}

		::System::Void OnNpcInteracted(::System::Int32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCINTERACTED_OFFSET))(this, npcTag);
		}

		::System::Void OnFunctionUnlocked(::System::Int32 unlockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFUNCTIONUNLOCKED_OFFSET))(this, unlockID);
		}

		::System::Void OnUnlockInteracted(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUNLOCKINTERACTED_OFFSET))(this, args);
		}

		::System::Void OnQuestUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTUPDATE_OFFSET))(this, args);
		}

		::System::Void OnQuestTrackUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTTRACKUPDATE_OFFSET))(this, args);
		}

		::System::Void OnNpcSpecialHintUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSPECIALHINTUPDATE_OFFSET))(this, args);
		}

		::System::Void OnCloseNPCTrack(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCLOSENPCTRACK_OFFSET))(this, obj);
		}

		static ::System::Void SampleAnim(::UnityEngine::Animation* anim, ::System::String* clipName, ::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLEANIM_OFFSET))(anim, clipName, normalizedTime);
		}

		::System::Void _OnFadeOutTrackIcon_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__12_0_OFFSET))(this);
		}

		::System::Void _OnFadeOutTrackIcon_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__12_1_OFFSET))(this);
		}

		::System::Void _RefreshTrackIcon_g__SetTrackIconImage_39_0(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKICONIMAGE_39_0_OFFSET))(this, path);
		}

		::System::Void _RefreshTrackIcon_g__SetTrackRoleImage_39_1(::Foundation::AssetPath rolePath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKROLEIMAGE_39_1_OFFSET))(this, rolePath);
		}

		::System::Void _UpdateTrackIconVisibility_b__50_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__UPDATETRACKICONVISIBILITY_B__50_0_OFFSET))(this);
		}

		::System::Void _UpdateTrackIconVisibility_b__50_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__UPDATETRACKICONVISIBILITY_B__50_1_OFFSET))(this);
		}

		::System::Void _PlayNameTextAnim_b__61_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYNAMETEXTANIM_B__61_0_OFFSET))(this);
		}

		::System::Void _PlayArrowInteractFadeOut_b__78_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYARROWINTERACTFADEOUT_B__78_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIREUSE_OFFSET))(this);
		}
	};
}
