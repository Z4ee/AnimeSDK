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
class Class_2_79F6D62CE30E3F8E_51;
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

#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_APPLYVISUALSTATE_OFFSET UNITYSDK_OFFSET(0x175623C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CHECKOCCLUSIONPHYSICSHIT_OFFSET UNITYSDK_OFFSET(0x1755E800)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CLEARALLANIMATION_OFFSET UNITYSDK_OFFSET(0x1755CE40)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHALLANIMATION_OFFSET UNITYSDK_OFFSET(0x1755DDC0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHROOTANIMATION_OFFSET UNITYSDK_OFFSET(0x17562640)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GETTRACKICONFADEANI_OFFSET UNITYSDK_OFFSET(0x1755E360)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1755C140)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ISDOORLEAVESTATE_OFFSET UNITYSDK_OFFSET(0x175603D0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONDISABLE_OFFSET UNITYSDK_OFFSET(0x1755DC30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONENABLE_OFFSET UNITYSDK_OFFSET(0x1755D3B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBUILDINTERACTMAP_OFFSET UNITYSDK_OFFSET(0x17565430)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCLOSENPCTRACK_OFFSET UNITYSDK_OFFSET(0x17565C50)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1755CA80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEINTRACKICON_OFFSET UNITYSDK_OFFSET(0x1755D5E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEOUTTRACKICON_OFFSET UNITYSDK_OFFSET(0x1755D880)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x17565630)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHATUI_OFFSET UNITYSDK_OFFSET(0x17564BE0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHAT_OFFSET UNITYSDK_OFFSET(0x17564B90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONINNPCCHATDISTANCE_OFFSET UNITYSDK_OFFSET(0x17564D70)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONMAINCITYSHOWSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17565520)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCINTERACTED_OFFSET UNITYSDK_OFFSET(0x175655C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSPECIALHINTUPDATE_OFFSET UNITYSDK_OFFSET(0x17565B50)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSTARTINTERACT_OFFSET UNITYSDK_OFFSET(0x175654B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONOUTNPCCHATDISTANCE_OFFSET UNITYSDK_OFFSET(0x17564E00)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTTRACKUPDATE_OFFSET UNITYSDK_OFFSET(0x17565B00)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0x17565AB0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_1_OFFSET UNITYSDK_OFFSET(0x175649D0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_OFFSET UNITYSDK_OFFSET(0x17564F80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHAT_OFFSET UNITYSDK_OFFSET(0x17564870)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1755D0B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1755CB50)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1755C160)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x1755DFA0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUNLOCKINTERACTED_OFFSET UNITYSDK_OFFSET(0x175659F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATE2D_OFFSET UNITYSDK_OFFSET(0x17561650)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATEINTERACT_OFFSET UNITYSDK_OFFSET(0x17564FE0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWANIM_OFFSET UNITYSDK_OFFSET(0x17565030)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWINTERACTFADEOUT_OFFSET UNITYSDK_OFFSET(0x17565180)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYCHATBUBBLEANIM_OFFSET UNITYSDK_OFFSET(0x17563880)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYDIFFTRACKICONANIM_OFFSET UNITYSDK_OFFSET(0x17562C80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYEMOSYNC_OFFSET UNITYSDK_OFFSET(0x17564530)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYNAMETEXTANIM_OFFSET UNITYSDK_OFFSET(0x17563780)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_1_OFFSET UNITYSDK_OFFSET(0x17562BA0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_OFFSET UNITYSDK_OFFSET(0x1755D7E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONNEARANIM_OFFSET UNITYSDK_OFFSET(0x175631E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x17563CC0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHNAME_OFFSET UNITYSDK_OFFSET(0x1755EAD0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHSPECIALHINT_OFFSET UNITYSDK_OFFSET(0x1755EE60)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHTRACKICON_OFFSET UNITYSDK_OFFSET(0x17560640)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHUNLOCK_OFFSET UNITYSDK_OFFSET(0x1755ED00)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLEALLTOFADEIN_OFFSET UNITYSDK_OFFSET(0x1755D110)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLEANIM_OFFSET UNITYSDK_OFFSET(0x1755E400)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLETOFADEANIMATION_OFFSET UNITYSDK_OFFSET(0x17562AF0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETCHATBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0x17563B30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETDOORNAME_OFFSET UNITYSDK_OFFSET(0x17565390)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETENTITY_OFFSET UNITYSDK_OFFSET(0x1755E4D0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNAMETEXT_OFFSET UNITYSDK_OFFSET(0x17560240)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNULLNAMETEXT_OFFSET UNITYSDK_OFFSET(0x175634F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETSPACINGACTIVE_OFFSET UNITYSDK_OFFSET(0x17560080)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1755C150)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_STOPALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x1755D2B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UNACTIVETRACKICON_1_OFFSET UNITYSDK_OFFSET(0x175633C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UNACTIVETRACKICON_OFFSET UNITYSDK_OFFSET(0x17563360)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEALLANIMATION_OFFSET UNITYSDK_OFFSET(0x1755D410)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEARROWVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1755EEC0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATENAMETEXTVISIBILITY_OFFSET UNITYSDK_OFFSET(0x17561A20)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1755E860)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x17563720)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATERECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17561E50)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEROOTANIMATION_OFFSET UNITYSDK_OFFSET(0x17562A70)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATETRACKICONVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1755F440)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__CTOR_OFFSET UNITYSDK_OFFSET(0x17565D20)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__12_0_OFFSET UNITYSDK_OFFSET(0x17565D80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__12_1_OFFSET UNITYSDK_OFFSET(0x17565DB0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYARROWINTERACTFADEOUT_B__79_0_OFFSET UNITYSDK_OFFSET(0x17565EE0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYNAMETEXTANIM_B__62_0_OFFSET UNITYSDK_OFFSET(0x17565EC0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKICONIMAGE_40_0_OFFSET UNITYSDK_OFFSET(0x17561530)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKROLEIMAGE_40_1_OFFSET UNITYSDK_OFFSET(0x175612C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__UPDATETRACKICONVISIBILITY_B__51_0_OFFSET UNITYSDK_OFFSET(0x17565DE0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__UPDATETRACKICONVISIBILITY_B__51_1_OFFSET UNITYSDK_OFFSET(0x17565E50)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17565EF0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17565F80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17565F90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17566020)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x175660B0)

namespace MoleMole
{
	inline static constexpr unsigned int UINPCNameWidgetControllerV2_TypeDefinitionIndex = 70999;

	class UINPCNameWidgetControllerV2 : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _NeedCache_k__BackingField; // 0x2C0
		::Class_1_320A75E91340F501* _data; // 0x2C8
		::Class_2_79F6D62CE30E3F8E_51* _view; // 0x2D0
		::System::UInt32 _entityId; // 0x2D8
		::System::Int32 _npcConfigId; // 0x2DC
		::System::Boolean _inOcclusion; // 0x2E0
		::Foundation::Coroutine::CoroutineHandle _trackIconAnimChatDelayHandle; // 0x2E4
		::Foundation::Coroutine::CoroutineHandle _chatBubbleAnimDelayHandle; // 0x2E8
		::Foundation::Coroutine::CoroutineHandle _arrowFadeAnimHandle; // 0x2EC
		::System::Collections::Generic::List_1<::MoleMole::UINPCNameWidgetControllerV2_AnimData*>* _animDatas; // 0x2F0
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _outerTrackIconAnimData; // 0x2F8
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _innerTrackIconAnimData; // 0x300
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _nameTextAnimData; // 0x308
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _chatAnimData; // 0x310
		::MoleMole::UINPCNameWidgetControllerV2_AnimData* _arrowAnimData; // 0x318
		::Class_1_2CD6915EC12D64B9* _outerTrackIconResetHelper; // 0x320
		::Class_1_2CD6915EC12D64B9* _innerTrackIconResetHelper; // 0x328
		::System::UInt32 _currentPendingVoice; // 0x330
		::Foundation::AssetRequestHandle emoHandler; // 0x338

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

		::System::Void SetSpacingActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETSPACINGACTIVE_OFFSET))(this, active);
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

		::System::Void _RefreshTrackIcon_g__SetTrackIconImage_40_0(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKICONIMAGE_40_0_OFFSET))(this, path);
		}

		::System::Void _RefreshTrackIcon_g__SetTrackRoleImage_40_1(::Foundation::AssetPath rolePath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKROLEIMAGE_40_1_OFFSET))(this, rolePath);
		}

		::System::Void _UpdateTrackIconVisibility_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__UPDATETRACKICONVISIBILITY_B__51_0_OFFSET))(this);
		}

		::System::Void _UpdateTrackIconVisibility_b__51_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__UPDATETRACKICONVISIBILITY_B__51_1_OFFSET))(this);
		}

		::System::Void _PlayNameTextAnim_b__62_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYNAMETEXTANIM_B__62_0_OFFSET))(this);
		}

		::System::Void _PlayArrowInteractFadeOut_b__79_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYARROWINTERACTFADEOUT_B__79_0_OFFSET))(this);
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
