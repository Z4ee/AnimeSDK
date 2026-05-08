#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib_AnimationId.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapAnimator_GenericCurveID.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class NapAnimator; }

#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_BUILDCURVEID_OFFSET UNITYSDK_OFFSET(0xEC85EB0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEC85C30)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_FINDANIMATION_OFFSET UNITYSDK_OFFSET(0xEC85240)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_FINDGENERICCURVE_OFFSET UNITYSDK_OFFSET(0xEC85900)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_FINDORADDANIMATION_OFFSET UNITYSDK_OFFSET(0xEC85540)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GETBONEINDEX_OFFSET UNITYSDK_OFFSET(0xEC85B40)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GETSKELETON_OFFSET UNITYSDK_OFFSET(0xEC859E0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GET_BONECOUNT_OFFSET UNITYSDK_OFFSET(0xEC851A0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xEC85160)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xEC85180)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0xEC85140)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_SET_BONECOUNT_OFFSET UNITYSDK_OFFSET(0xEC851B0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xEC85170)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xEC85190)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0xEC85150)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC85EE0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC851C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationLib_AvatarAnimatorCache_TypeDefinitionIndex = 74940;

	class NPCAnimationLib_AvatarAnimatorCache : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_EmptyPathHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationLib_AvatarAnimatorCache_TypeDefinitionIndex)->GetStaticField(0xC790);
		}
		::NPCCrowd::Animation::AnimationControllerInstanceConfig* _Config_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::NapAnimator_GenericCurveID, ::System::Int32>* _curveLookupTable; // 0x18
		::UnityEngine::Avatar* _Skeleton_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _boneIndexLookupTable; // 0x28
		::UnityEngine::NapAnimator* _animator; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>* _clipLookupTable; // 0x38
		::System::Int32 _BoneCount_k__BackingField; // 0x40
		::System::Int32 _InstanceId_k__BackingField; // 0x44

		::System::Void _ctor(::UnityEngine::NapAnimator* animator, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAnimator*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE__CTOR_OFFSET))(this, animator, config);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE__CCTOR_OFFSET))();
		}

		::UnityEngine::Avatar* get_Skeleton()
		{
			return ((::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GET_SKELETON_OFFSET))(this);
		}

		::System::Void set_Skeleton(::UnityEngine::Avatar* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_SET_SKELETON_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::AnimationControllerInstanceConfig* get_Config()
		{
			return ((::NPCCrowd::Animation::AnimationControllerInstanceConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::NPCCrowd::Animation::AnimationControllerInstanceConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Int32 get_InstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_SET_INSTANCEID_OFFSET))(this, value);
		}

		::System::Int32 get_BoneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GET_BONECOUNT_OFFSET))(this);
		}

		::System::Void set_BoneCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_SET_BONECOUNT_OFFSET))(this, value);
		}

		::NPCCrowd::Animation::NPCAnimationLib_AnimationId FindAnimation(::UnityEngine::AnimationClip* clip)
		{
			return ((::NPCCrowd::Animation::NPCAnimationLib_AnimationId(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_FINDANIMATION_OFFSET))(this, clip);
		}

		::NPCCrowd::Animation::NPCAnimationLib_AnimationId FindOrAddAnimation(::UnityEngine::AnimationClip* clip, ::System::Boolean& added)
		{
			return ((::NPCCrowd::Animation::NPCAnimationLib_AnimationId(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_FINDORADDANIMATION_OFFSET))(this, clip, added);
		}

		::System::Int32 FindGenericCurve(::System::String* curveName, ::System::String* path)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_FINDGENERICCURVE_OFFSET))(this, curveName, path);
		}

		::System::Boolean GetSkeleton(::Unity::Collections::NativeSlice_1<::System::Int32> result)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GETSKELETON_OFFSET))(this, result);
		}

		::System::Int32 GetBoneIndex(::System::String* boneName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_GETBONEINDEX_OFFSET))(this, boneName);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::NapAnimator_GenericCurveID BuildCurveID(::System::String* curveName, ::System::String* path)
		{
			return ((::UnityEngine::NapAnimator_GenericCurveID(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_AVATARANIMATORCACHE_BUILDCURVEID_OFFSET))(this, curveName, path);
		}
	};
}
