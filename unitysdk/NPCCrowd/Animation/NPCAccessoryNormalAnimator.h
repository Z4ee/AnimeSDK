#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCAnimatorRuntimeInstanceAnimClipData.h"
#include "unitysdk/NPCCrowd/Animation/NPCAccessoryCPUAnimator.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimationAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryAnimatorManager; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_GETANIMATORDATA_OFFSET UNITYSDK_OFFSET(0xF613020)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_GETANIMATOR_OFFSET UNITYSDK_OFFSET(0xF6133A0)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_GETAVATAR_OFFSET UNITYSDK_OFFSET(0xF613310)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0xF612D90)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF6132B0)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF612D00)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_PLAYANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xF612D40)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETANIMATORLOD_OFFSET UNITYSDK_OFFSET(0xF613350)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETATTACHMENTPOSITION_OFFSET UNITYSDK_OFFSET(0xF6130D0)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETATTACHMENTROTATION_OFFSET UNITYSDK_OFFSET(0xF613140)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETATTACHMENTSCALE_OFFSET UNITYSDK_OFFSET(0xF6131A0)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETTICKPAUSESTATE_OFFSET UNITYSDK_OFFSET(0xF612FD0)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_STOPMAINANIMATION_OFFSET UNITYSDK_OFFSET(0xF613210)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xF613250)
#define NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xF6133E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAccessoryNormalAnimator_TypeDefinitionIndex = 71715;

	class NPCAccessoryNormalAnimator : public ::NPCCrowd::Animation::NPCAccessoryCPUAnimator
	{
	public:
		::UnityEngine::Avatar* _avatar; // 0x10
		::UnityEngine::Animator* _animator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void PlayAnimationClip(::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_PLAYANIMATIONCLIP_OFFSET))(this, clip);
		}

		::System::Void Init(::UnityEngine::Animator* unityAnimator, ::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO* dataset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_INIT_OFFSET))(this, unityAnimator, dataset);
		}

		::System::Void SetTickPauseState(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETTICKPAUSESTATE_OFFSET))(this, pause);
		}

		::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData GetAnimatorData(::NPCCrowd::Animation::NPCUnionAnimator* ownerAnimator)
		{
			return ((::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData(*)(::PVOID, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_GETANIMATORDATA_OFFSET))(this, ownerAnimator);
		}

		::System::Void SetAttachmentPosition(::UnityEngine::Vector3 local, ::UnityEngine::Vector3 world)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETATTACHMENTPOSITION_OFFSET))(this, local, world);
		}

		::System::Void SetAttachmentRotation(::UnityEngine::Quaternion local, ::UnityEngine::Quaternion world)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETATTACHMENTROTATION_OFFSET))(this, local, world);
		}

		::System::Void SetAttachmentScale(::UnityEngine::Vector3 local, ::UnityEngine::Vector3 world)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETATTACHMENTSCALE_OFFSET))(this, local, world);
		}

		::System::Void StopMainAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_STOPMAINANIMATION_OFFSET))(this);
		}

		::System::Void Update(::NPCCrowd::Accessories::NPCAccessoryAnimatorManager* manager, ::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager*, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_UPDATE_OFFSET))(this, manager, accessory, deltaTime);
		}

		::System::Void LateUpdate(::NPCCrowd::Accessories::NPCAccessoryAnimatorManager* manager, ::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager*, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_LATEUPDATE_OFFSET))(this, manager, accessory, deltaTime);
		}

		::UnityEngine::Avatar* GetAvatar()
		{
			return ((::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_GETAVATAR_OFFSET))(this);
		}

		::System::Void SetAnimatorLOD(::NPCCrowd::Animation::NPCUnionAnimator* animator, ::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCUnionAnimator*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_SETANIMATORLOD_OFFSET))(this, animator, lod);
		}

		::UnityEngine::Animator* GetAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCACCESSORYNORMALANIMATOR_GETANIMATOR_OFFSET))(this);
		}
	};
}
