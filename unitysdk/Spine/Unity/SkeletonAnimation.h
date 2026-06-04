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

#define SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1ACBF360)
#define SPINE_UNITY_SKELETONANIMATION_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1ACBEDC0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1ACBECE0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACBF060)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1ACBEEA0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1ACBEF80)
#define SPINE_UNITY_SKELETONANIMATION_ADD__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1ACBE960)
#define SPINE_UNITY_SKELETONANIMATION_ADD__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1ACBE880)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACBEC00)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1ACBEA40)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1ACBEB20)
#define SPINE_UNITY_SKELETONANIMATION_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x1ACBFC90)
#define SPINE_UNITY_SKELETONANIMATION_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1ACBF4A0)
#define SPINE_UNITY_SKELETONANIMATION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACBFBC0)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1ACBF180)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1ACBE740)
#define SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1ACBF160)
#define SPINE_UNITY_SKELETONANIMATION_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1ACBF140)
#define SPINE_UNITY_SKELETONANIMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ACBE760)
#define SPINE_UNITY_SKELETONANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACBFDA0)
#define SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1ACBF430)
#define SPINE_UNITY_SKELETONANIMATION_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1ACBFE70)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1ACBEE30)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1ACBED50)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACBF0D0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1ACBEF10)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1ACBEFF0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1ACBE9D0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1ACBE8F0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACBEC70)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1ACBEAB0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1ACBEB90)
#define SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1ACBF210)
#define SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1ACBF170)
#define SPINE_UNITY_SKELETONANIMATION_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1ACBF150)
#define SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1ACBFC60)
#define SPINE_UNITY_SKELETONANIMATION_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1ACBFB40)
#define SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ACBFAA0)
#define SPINE_UNITY_SKELETONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBFF00)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonAnimation_TypeDefinitionIndex = 41408;

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

		::System::Void add__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void remove__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void add__BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void remove__BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void add__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void remove__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void add__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void remove__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void add__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD__UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::Spine::Unity::UpdateTiming get_UpdateTiming()
		{
			return ((::Spine::Unity::UpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_UPDATETIMING_OFFSET))(this);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_UPDATETIMING_OFFSET))(this, a1);
		}

		::System::Boolean get_UnscaledTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET))(this);
		}

		::System::Void set_UnscaledTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET))(this, a1);
		}

		::System::String* get_AnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET))(this);
		}

		::System::Void set_AnimationName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET))(this, a1);
		}

		static ::Spine::Unity::SkeletonAnimation* AddToGameObject(::UnityEngine::GameObject* a1, ::Spine::Unity::SkeletonDataAsset* a2, ::System::Boolean a3)
		{
			return ((::Spine::Unity::SkeletonAnimation*(*)(::UnityEngine::GameObject*, ::Spine::Unity::SkeletonDataAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::Spine::Unity::SkeletonAnimation* NewSkeletonAnimationGameObject(::Spine::Unity::SkeletonDataAsset* a1, ::System::Boolean a2)
		{
			return ((::Spine::Unity::SkeletonAnimation*(*)(::Spine::Unity::SkeletonDataAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET))(a1, a2);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_CLEARSTATE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Void UpdateAnimationStatus(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET))(this, a1);
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
