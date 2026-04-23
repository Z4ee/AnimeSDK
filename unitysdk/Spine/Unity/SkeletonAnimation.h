#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonRenderer.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"

namespace Spine { class AnimationState; }
namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class UpdateBonesDelegate; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x19E45EF0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x19E45940)
#define SPINE_UNITY_SKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x19E45860)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E45BE0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x19E45A20)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x19E45B00)
#define SPINE_UNITY_SKELETONANIMATION_ADD__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x19E454E0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x19E45400)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E45780)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x19E455C0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x19E456A0)
#define SPINE_UNITY_SKELETONANIMATION_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x19E467A0)
#define SPINE_UNITY_SKELETONANIMATION_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x19E46030)
#define SPINE_UNITY_SKELETONANIMATION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x19E466D0)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x19E45D00)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x19E452C0)
#define SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x19E45CE0)
#define SPINE_UNITY_SKELETONANIMATION_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x19E45CC0)
#define SPINE_UNITY_SKELETONANIMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19E452E0)
#define SPINE_UNITY_SKELETONANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19E46DE0)
#define SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x19E45FC0)
#define SPINE_UNITY_SKELETONANIMATION_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x19E46EB0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x19E459B0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x19E458D0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E45C50)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x19E45A90)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x19E45B70)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x19E45550)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x19E45470)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E457F0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x19E45630)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x19E45710)
#define SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x19E45D90)
#define SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x19E45CF0)
#define SPINE_UNITY_SKELETONANIMATION_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x19E45CD0)
#define SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x19E46770)
#define SPINE_UNITY_SKELETONANIMATION_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x19E46650)
#define SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E465B0)
#define SPINE_UNITY_SKELETONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E46F40)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonAnimation_TypeDefinitionIndex = 40581;

	class SkeletonAnimation : public ::Spine::Unity::SkeletonRenderer
	{
	public:
		::Spine::AnimationState* state; // 0xE0
		::System::Boolean wasUpdatedAfterInit; // 0xE8
		::Spine::Unity::ISkeletonAnimationDelegate* _OnAnimationRebuild; // 0xF0
		::Spine::Unity::UpdateBonesDelegate* _BeforeApply; // 0xF8
		::Spine::Unity::UpdateBonesDelegate* _UpdateLocal; // 0x100
		::Spine::Unity::UpdateBonesDelegate* _UpdateWorld; // 0x108
		::Spine::Unity::UpdateBonesDelegate* _UpdateComplete; // 0x110
		::Spine::Unity::UpdateTiming updateTiming; // 0x118
		::System::Boolean unscaledTime; // 0x11C
		::System::String* _animationName; // 0x120
		::System::Boolean loop; // 0x128
		::System::Single timeScale; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION__CTOR_OFFSET))(this);
		}

		::Spine::AnimationState* get_AnimationState()
		{
			return ((::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONSTATE_OFFSET))(this);
		}

		::System::Void add__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void add__BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void remove__BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void add__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void remove__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void add__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void remove__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void add__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::Spine::Unity::UpdateTiming get_UpdateTiming()
		{
			return ((::Spine::Unity::UpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_UPDATETIMING_OFFSET))(this);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_UPDATETIMING_OFFSET))(this, value);
		}

		::System::Boolean get_UnscaledTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET))(this);
		}

		::System::Void set_UnscaledTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET))(this, value);
		}

		::System::String* get_AnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET))(this);
		}

		::System::Void set_AnimationName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET))(this, value);
		}

		static ::Spine::Unity::SkeletonAnimation* AddToGameObject(::UnityEngine::GameObject* gameObject, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::System::Boolean quiet)
		{
			return ((::Spine::Unity::SkeletonAnimation*(*)(::UnityEngine::GameObject*, ::Spine::Unity::SkeletonDataAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET))(gameObject, skeletonDataAsset, quiet);
		}

		static ::Spine::Unity::SkeletonAnimation* NewSkeletonAnimationGameObject(::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::System::Boolean quiet)
		{
			return ((::Spine::Unity::SkeletonAnimation*(*)(::Spine::Unity::SkeletonDataAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET))(skeletonDataAsset, quiet);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_CLEARSTATE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Boolean overwrite, ::System::Boolean quiet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_INITIALIZE_OFFSET))(this, overwrite, quiet);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATE_1_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateAnimationStatus(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_APPLYANIMATION_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ONBECAMEVISIBLE_OFFSET))(this);
		}
	};
}
