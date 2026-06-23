#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_655E7DDEB09A6D25.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
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

#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_ACQUIREFACIALASSETS_OFFSET UNITYSDK_OFFSET(0xF9B9AC0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_CREATEEMOTIONEFFECT_OFFSET UNITYSDK_OFFSET(0xF9BBD20)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_CREATE_OFFSET UNITYSDK_OFFSET(0xF9B8DE0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DESTROYEFFECTCONTAINER_OFFSET UNITYSDK_OFFSET(0xF9B9430)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DESTROYEMOTIONEFFECT_OFFSET UNITYSDK_OFFSET(0xF9B92F0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF9B91A0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_ENSUREREGISTERCROWDMANAGERTICK_OFFSET UNITYSDK_OFFSET(0xF9B98B0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETEMOTIONEFFECTCONFIGREF_OFFSET UNITYSDK_OFFSET(0xF9B8ED0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETORCREATEEFFECTCONTAINER_OFFSET UNITYSDK_OFFSET(0xF9BB4B0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GETSLOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xF9BBA70)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_GET_EFFECTCONTAINERPREFAB_OFFSET UNITYSDK_OFFSET(0xF9BB2E0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_NEEDREGISTERTICK_OFFSET UNITYSDK_OFFSET(0xF9B90B0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_CROWD_OFFSET UNITYSDK_OFFSET(0xF9B9FC0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_NORMAL_OFFSET UNITYSDK_OFFSET(0xF9BA1C0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xF9B9DD0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_CROWD_OFFSET UNITYSDK_OFFSET(0xF9BAF40)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_NORMAL_OFFSET UNITYSDK_OFFSET(0xF9BAF90)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYBLINKCLIP_OFFSET UNITYSDK_OFFSET(0xF9BACA0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYEMOTIONCLIP_OFFSET UNITYSDK_OFFSET(0xF9BA900)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYEMOTIONEFFECT_OFFSET UNITYSDK_OFFSET(0xF9BC1F0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RELEASEEFFECTCONTAINERPREFAB_OFFSET UNITYSDK_OFFSET(0xF9B9620)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESETBLINKTIMER_OFFSET UNITYSDK_OFFSET(0xF9BAC50)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_RESTARTBLINKTIMER_OFFSET UNITYSDK_OFFSET(0xF9BABF0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STARTBLINK_OFFSET UNITYSDK_OFFSET(0xF9BA990)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_CROWD_OFFSET UNITYSDK_OFFSET(0xF9BA6C0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_NORMAL_OFFSET UNITYSDK_OFFSET(0xF9BA840)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xF9BA510)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPBLINK_OFFSET UNITYSDK_OFFSET(0xF9BAB80)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_STOPEMOTIONCLIP_OFFSET UNITYSDK_OFFSET(0xF9BAAF0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_TICKBLINK_OFFSET UNITYSDK_OFFSET(0xF9B99E0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_UNREGISTERTICK_OFFSET UNITYSDK_OFFSET(0xF9B97D0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xF9B9980)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9BC2A0)
#define NPCCROWD_AVATAR_NPCEMOTIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xF9BC280)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCEmotionControl_TypeDefinitionIndex = 79025;

	class NPCEmotionControl : public ::System::Object
	{
	public:
		static ::Foundation::AssetPath* StaticGet_EffectContainerPrefabPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(NPCEmotionControl_TypeDefinitionIndex)->GetStaticField(0x48B60);
		}
		// static const ::Enum_3_655E7DDEB09A6D25 FacialClipTrackLayer; // 0x0
		// static const ::NPCCrowd::Ability::EMontagePriorityLayer FacialMontageLayer; // 0x0
		// static const ::Enum_3_655E7DDEB09A6D25 EyesClipTrackLayer; // 0x0
		// static const ::System::Single MinBlinkInterval; // 0x0
		// static const ::System::Single MaxBlinkInterval; // 0x0
		// static const ::System::Single BlinkDuration; // 0x0
		::Foundation::AssetRequestHandle _effectContainerPrefabHandle; // 0x10
		::UnityEngine::AvatarMask* _facialMask; // 0x30
		::UnityEngine::AnimationClip* _blinkClip; // 0x38
		::MoleMole::Battle::Entity* _ownerEntity; // 0x40
		::System::String* _currentFacialKey; // 0x48
		::UnityEngine::GameObject* _effectContainerPrefab; // 0x50
		::NPCEmotionEffectConfig* _effectConfig; // 0x58
		::UnityEngine::AnimationClip* _facialClip; // 0x60
		::UnityEngine::GameObject* _effectContainer; // 0x68
		::MoleMole::Battle::Entity* _effectEntity; // 0x70
		::System::Int32 _facialMontageHandler; // 0x78
		::System::Int32 _blinkMontageHandler; // 0x7C
		::System::Int32 _facialAnimationID; // 0x80
		::System::Single _blinkingTimer; // 0x84
		::System::Boolean _needRegisterTick; // 0x88
		::System::Boolean _tickRegistered; // 0x89
		::System::Int32 _blinkAnimationID; // 0x8C
		::System::Single _blinkTimer; // 0x90

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

		::System::Void PlayEmotionEffect(::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONCONTROL_PLAYEMOTIONEFFECT_OFFSET))(this, facialKey);
		}
	};
}
