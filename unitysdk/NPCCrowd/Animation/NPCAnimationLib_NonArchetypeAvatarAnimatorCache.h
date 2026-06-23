#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib_AnimationId.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class NapAnimator; }

#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_ADDANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xEBDB410)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBDB7B0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_GET_BONECOUNT_OFFSET UNITYSDK_OFFSET(0xEBDB320)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xEBDB300)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0xEBDB2E0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_SET_BONECOUNT_OFFSET UNITYSDK_OFFSET(0xEBDB330)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xEBDB310)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0xEBDB2F0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDB340)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationLib_NonArchetypeAvatarAnimatorCache_TypeDefinitionIndex = 71436;

	class NPCAnimationLib_NonArchetypeAvatarAnimatorCache : public ::System::Object
	{
	public:
		::UnityEngine::NapAnimator* _animator; // 0x10
		::UnityEngine::Avatar* _Skeleton_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>* _clipLookupTable; // 0x20
		::System::Int32 _InstanceId_k__BackingField; // 0x28
		::System::Int32 _BoneCount_k__BackingField; // 0x2C

		::System::Void _ctor(::UnityEngine::NapAnimator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE__CTOR_OFFSET))(this, animator);
		}

		::UnityEngine::Avatar* get_Skeleton()
		{
			return ((::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_GET_SKELETON_OFFSET))(this);
		}

		::System::Void set_Skeleton(::UnityEngine::Avatar* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_SET_SKELETON_OFFSET))(this, value);
		}

		::System::Int32 get_InstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_SET_INSTANCEID_OFFSET))(this, value);
		}

		::System::Int32 get_BoneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_GET_BONECOUNT_OFFSET))(this);
		}

		::System::Void set_BoneCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_SET_BONECOUNT_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::NPCAnimationLib_AnimationId AddAnimationClip(::UnityEngine::AnimationClip* clip)
		{
			return ((::NPCCrowd::Animation::NPCAnimationLib_AnimationId(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_ADDANIMATIONCLIP_OFFSET))(this, clip);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_NONARCHETYPEAVATARANIMATORCACHE_DISPOSE_OFFSET))(this);
		}
	};
}
