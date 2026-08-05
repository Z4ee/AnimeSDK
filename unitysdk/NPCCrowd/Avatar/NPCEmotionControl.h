#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Battle/NPCSinglePlayableAnimLayer.h"
#include "unitysdk/NPCCrowd/Ability/EMontagePriorityLayer.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
class NPCEmotionEffectConfig;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_ACQUIREFACIALASSETS_OFFSET UNITYSDK_OFFSET(0xF0E1CF0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_CREATEEMOTIONEFFECT_OFFSET UNITYSDK_OFFSET(0xF0E4550)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_CREATE_OFFSET UNITYSDK_OFFSET(0xF0E1130)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DESTROYEFFECTCONTAINER_OFFSET UNITYSDK_OFFSET(0xF0E1640)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DESTROYEMOTIONEFFECT_OFFSET UNITYSDK_OFFSET(0x17FAAB20)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF0E14F0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_ENSUREREGISTERCROWDMANAGERTICK_OFFSET UNITYSDK_OFFSET(0xF0E1AC0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETEMOTIONEFFECTCONFIGREF_OFFSET UNITYSDK_OFFSET(0xF0E1220)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETORCREATEEFFECTCONTAINER_OFFSET UNITYSDK_OFFSET(0xF0E3CD0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETSLOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xF0E4290)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GET_EFFECTCONTAINERPREFAB_OFFSET UNITYSDK_OFFSET(0xF0E3B00)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_NEEDREGISTERTICK_OFFSET UNITYSDK_OFFSET(0xF0E1400)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_CROWD_OFFSET UNITYSDK_OFFSET(0xF0E21E0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_NORMAL_OFFSET UNITYSDK_OFFSET(0xF0E22D0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xF0E1FF0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_CROWD_OFFSET UNITYSDK_OFFSET(0xF0E3540)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_NORMAL_OFFSET UNITYSDK_OFFSET(0xF0E3630)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_OFFSET UNITYSDK_OFFSET(0xF0E2FB0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYEMOTIONCLIP_OFFSET UNITYSDK_OFFSET(0xF0E2B40)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYEMOTIONEFFECT_OFFSET UNITYSDK_OFFSET(0x17FAB280)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RELEASEEFFECTCONTAINERPREFAB_OFFSET UNITYSDK_OFFSET(0xF0E1830)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESETBLINKINGTIMER_OFFSET UNITYSDK_OFFSET(0xF0E2F60)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESETBLINKTIMER_OFFSET UNITYSDK_OFFSET(0xF0E2E90)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESTARTBLINKINGTIMER_OFFSET UNITYSDK_OFFSET(0xF0E2EE0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESTARTBLINKTIMER_OFFSET UNITYSDK_OFFSET(0xF0E2E30)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STARTBLINK_OFFSET UNITYSDK_OFFSET(0xF0E2BD0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_CROWD_OFFSET UNITYSDK_OFFSET(0xF0E2810)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_NORMAL_OFFSET UNITYSDK_OFFSET(0xF0E2A80)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xF0E28D0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINKCLIP_CROWD_OFFSET UNITYSDK_OFFSET(0xF0E3980)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINKCLIP_NORMAL_OFFSET UNITYSDK_OFFSET(0xF0E3A40)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINKCLIP_OFFSET UNITYSDK_OFFSET(0xF0E3390)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINK_OFFSET UNITYSDK_OFFSET(0xF0E2D70)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPEMOTIONCLIP_OFFSET UNITYSDK_OFFSET(0xF0E2D20)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_TICKBLINK_OFFSET UNITYSDK_OFFSET(0xF0E1C00)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_TICKEFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x17FAAC60)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_TRYREGISTERSINGLECLIPMONTAGEACTION_OFFSET UNITYSDK_OFFSET(0xF0E2620)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_UNREGISTERTICK_OFFSET UNITYSDK_OFFSET(0xF0E19E0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xF0E1B90)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FAB340)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAB320)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCEmotionControl_TypeDefinitionIndex = 91142;

	class NPCEmotionControl : public ::System::Object
	{
	public:
		static ::Foundation::AssetPath* StaticGet_EffectContainerPrefabPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(NPCEmotionControl_TypeDefinitionIndex)->GetStaticField(0x4EDC0);
		}
		static ::System::Single* StaticGet_EffectGlobalScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCEmotionControl_TypeDefinitionIndex)->GetStaticField(0x12280);
		}
		static ::System::Single* StaticGet_EffectMaxDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCEmotionControl_TypeDefinitionIndex)->GetStaticField(0x12284);
		}
		static ::System::Single* StaticGet_EffectThresholdDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCEmotionControl_TypeDefinitionIndex)->GetStaticField(0x12288);
		}
		// static const ::System::Int32 InvalidActionHandler = 0xFFFFFFFF; // 0x0
		// static const ::MoleMole::Battle::NPCSinglePlayableAnimLayer FacialClipTrackLayer; // 0x0
		// static const ::NPCCrowd::Ability::EMontagePriorityLayer FacialMontageLayer; // 0x0
		// static const ::MoleMole::Battle::NPCSinglePlayableAnimLayer EyesClipTrackLayer; // 0x0
		// static const ::NPCCrowd::Ability::EMontagePriorityLayer EyesMontageLayer; // 0x0
		// static const ::System::Single MinBlinkInterval; // 0x0
		// static const ::System::Single MaxBlinkInterval; // 0x0
		// static const ::System::Single DefaultBlinkDuration; // 0x0
		::UnityEngine::GameObject* _effectContainer; // 0x10
		::Foundation::AssetRequestHandle _effectContainerPrefabHandle; // 0x18
		::System::String* _currentFacialKey; // 0x38
		::NPCEmotionEffectConfig* _effectConfig; // 0x40
		::MoleMole::Battle::Entity* _effectEntity; // 0x48
		::UnityEngine::AvatarMask* _facialMask; // 0x50
		::UnityEngine::GameObject* _effectContainerPrefab; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::UnityEngine::AnimationClip* _blinkClip; // 0x68
		::UnityEngine::AnimationClip* _facialClip; // 0x70
		::System::Int32 _facialAnimationID; // 0x78
		::System::Int32 _blinkAnimationID; // 0x7C
		::System::Single _blinkTimer; // 0x80
		::System::Boolean _needRegisterTick; // 0x84
		::System::Boolean _tickRegistered; // 0x85
		::System::Single _blinkingTimer; // 0x88
		::System::Int32 _facialActionHandler; // 0x8C
		::System::Int32 _blinkActionHandler; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Avatar::NPCEmotionControl* Create(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::NPCCrowd::Avatar::NPCEmotionControl*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_CREATE_OFFSET))(ownerEntity);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DISPOSE_OFFSET))(this);
		}

		static ::NPCEmotionEffectConfig* GetEmotionEffectConfigRef(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::NPCEmotionEffectConfig*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETEMOTIONEFFECTCONFIGREF_OFFSET))(ownerEntity);
		}

		static ::System::Boolean NeedRegisterTick(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_NEEDREGISTERTICK_OFFSET))(ownerEntity);
		}

		::System::Void UnregisterTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_UNREGISTERTICK_OFFSET))(this);
		}

		::System::Void EnsureRegisterCrowdManagerTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_ENSUREREGISTERCROWDMANAGERTICK_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void AcquireFacialAssets(::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_ACQUIREFACIALASSETS_OFFSET))(this, facialKey);
		}

		::System::Boolean PlayAnimationClip(::MoleMole::Battle::Entity* ownerEntity, ::UnityEngine::AvatarMask* avatar, ::UnityEngine::AnimationClip* clip, ::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AvatarMask*, ::UnityEngine::AnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_OFFSET))(this, ownerEntity, avatar, clip, animationID);
		}

		static ::System::Boolean TryRegisterSingleClipMontageAction(::Class_3_F2DAD7F45F518868* npcComponent, ::System::Int32 animationID, ::MoleMole::Battle::NPCSinglePlayableAnimLayer clipTrackLayer, ::NPCCrowd::Ability::EMontagePriorityLayer montageLayer, ::System::Single duration, ::System::Int32& actionHandler)
		{
			return ((::System::Boolean(*)(::Class_3_F2DAD7F45F518868*, ::System::Int32, ::MoleMole::Battle::NPCSinglePlayableAnimLayer, ::NPCCrowd::Ability::EMontagePriorityLayer, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_TRYREGISTERSINGLECLIPMONTAGEACTION_OFFSET))(npcComponent, animationID, clipTrackLayer, montageLayer, duration, actionHandler);
		}

		::System::Boolean PlayAnimationClip_Crowd(::Class_3_F2DAD7F45F518868* npcComponent, ::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_CROWD_OFFSET))(this, npcComponent, animationID);
		}

		::System::Boolean PlayAnimationClip_Normal(::MoleMole::Battle::Entity* ownerEntity, ::UnityEngine::AvatarMask* avatar, ::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AvatarMask*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_NORMAL_OFFSET))(this, ownerEntity, avatar, clip);
		}

		::System::Void StopAnimationClip(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_OFFSET))(this, ownerEntity);
		}

		::System::Void StopAnimationClip_Crowd(::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_CROWD_OFFSET))(this, npcComponent);
		}

		::System::Void StopAnimationClip_Normal(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_NORMAL_OFFSET))(this, ownerEntity);
		}

		::System::Void PlayEmotionClip(::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYEMOTIONCLIP_OFFSET))(this, facialKey);
		}

		::System::Void StopEmotionClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPEMOTIONCLIP_OFFSET))(this);
		}

		::System::Void RestartBlinkTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESTARTBLINKTIMER_OFFSET))(this);
		}

		::System::Void ResetBlinkTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESETBLINKTIMER_OFFSET))(this);
		}

		::System::Void RestartBlinkingTimer(::System::Single clipLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESTARTBLINKINGTIMER_OFFSET))(this, clipLength);
		}

		::System::Void ResetBlinkingTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESETBLINKINGTIMER_OFFSET))(this);
		}

		::System::Void TickBlink(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_TICKBLINK_OFFSET))(this, deltaTime);
		}

		::System::Boolean PlayBlinkClip(::MoleMole::Battle::Entity* ownerEntity, ::UnityEngine::AvatarMask* avatar, ::UnityEngine::AnimationClip* clip, ::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AvatarMask*, ::UnityEngine::AnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_OFFSET))(this, ownerEntity, avatar, clip, animationID);
		}

		::System::Boolean PlayBlinkClip_Crowd(::Class_3_F2DAD7F45F518868* npcComponent, ::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_CROWD_OFFSET))(this, npcComponent, animationID);
		}

		::System::Boolean PlayBlinkClip_Normal(::MoleMole::Battle::Entity* ownerEntity, ::UnityEngine::AvatarMask* avatar, ::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AvatarMask*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_NORMAL_OFFSET))(this, ownerEntity, avatar, clip);
		}

		::System::Void StartBlink(::System::Boolean forceBlinkOnce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STARTBLINK_OFFSET))(this, forceBlinkOnce);
		}

		::System::Void StopBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINK_OFFSET))(this);
		}

		::System::Void StopBlinkClip(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINKCLIP_OFFSET))(this, ownerEntity);
		}

		::System::Void StopBlinkClip_Crowd(::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINKCLIP_CROWD_OFFSET))(this, npcComponent);
		}

		::System::Void StopBlinkClip_Normal(::MoleMole::Battle::Entity* ownerEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINKCLIP_NORMAL_OFFSET))(this, ownerEntity);
		}

		::UnityEngine::GameObject* get_EffectContainerPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GET_EFFECTCONTAINERPREFAB_OFFSET))(this);
		}

		::System::Void ReleaseEffectContainerPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RELEASEEFFECTCONTAINERPREFAB_OFFSET))(this);
		}

		::UnityEngine::Transform* GetOrCreateEffectContainer(::System::String* slotName, ::System::Single offsetHorizontal, ::System::Single offsetVertical, ::System::Single offsetRadial)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETORCREATEEFFECTCONTAINER_OFFSET))(this, slotName, offsetHorizontal, offsetVertical, offsetRadial);
		}

		::System::Void DestroyEffectContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DESTROYEFFECTCONTAINER_OFFSET))(this);
		}

		::UnityEngine::Transform* GetSlotTransform(::System::String* slotName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETSLOTTRANSFORM_OFFSET))(this, slotName);
		}

		::System::Void CreateEmotionEffect(::System::String* effectKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_CREATEEMOTIONEFFECT_OFFSET))(this, effectKey);
		}

		::System::Void DestroyEmotionEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DESTROYEMOTIONEFFECT_OFFSET))(this);
		}

		::System::Void TickEffectDistance(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_TICKEFFECTDISTANCE_OFFSET))(this, deltaTime);
		}

		::System::Void PlayEmotionEffect(::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYEMOTIONEFFECT_OFFSET))(this, facialKey);
		}
	};
}
