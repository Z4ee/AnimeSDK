#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib_AnimationId.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class NapAnimator; }

#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11508AC0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_FINDORADDANIMATION_OFFSET UNITYSDK_OFFSET(0x115085C0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_GETSKELETON_OFFSET UNITYSDK_OFFSET(0x11508960)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_GET_BONECOUNT_OFFSET UNITYSDK_OFFSET(0x115084D0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x115084B0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x11508490)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_SET_BONECOUNT_OFFSET UNITYSDK_OFFSET(0x115084E0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x115084C0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0x115084A0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x115084F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationLib_AccessoryAnimatorCache_TypeDefinitionIndex = 74942;

	class NPCAnimationLib_AccessoryAnimatorCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>* _clipLookupTable; // 0x10
		::UnityEngine::Avatar* _Skeleton_k__BackingField; // 0x18
		::UnityEngine::NapAnimator* _animator; // 0x20
		::System::Int32 _InstanceId_k__BackingField; // 0x28
		::System::Int32 _BoneCount_k__BackingField; // 0x2C

		::System::Void _ctor(::UnityEngine::NapAnimator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE__CTOR_OFFSET))(this, animator);
		}

		::UnityEngine::Avatar* get_Skeleton()
		{
			return ((::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_GET_SKELETON_OFFSET))(this);
		}

		::System::Void set_Skeleton(::UnityEngine::Avatar* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_SET_SKELETON_OFFSET))(this, value);
		}

		::System::Int32 get_InstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_SET_INSTANCEID_OFFSET))(this, value);
		}

		::System::Int32 get_BoneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_GET_BONECOUNT_OFFSET))(this);
		}

		::System::Void set_BoneCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_SET_BONECOUNT_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::NPCAnimationLib_AnimationId FindOrAddAnimation(::UnityEngine::AnimationClip* clip)
		{
			return ((::NPCCrowd::Animation::NPCAnimationLib_AnimationId(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_FINDORADDANIMATION_OFFSET))(this, clip);
		}

		::System::Boolean GetSkeleton(::Unity::Collections::NativeSlice_1<::System::Int32> result)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_GETSKELETON_OFFSET))(this, result);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ACCESSORYANIMATORCACHE_DISPOSE_OFFSET))(this);
		}
	};
}
