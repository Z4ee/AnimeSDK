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

#define SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C174AE0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1C1744B0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1C1743B0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C1747B0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1C1745B0)
#define SPINE_UNITY_SKELETONANIMATION_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1C1746B0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1C173FB0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1C173EB0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C1742B0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1C1740B0)
#define SPINE_UNITY_SKELETONANIMATION_ADD__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1C1741B0)
#define SPINE_UNITY_SKELETONANIMATION_AFTERANIMATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C175B80)
#define SPINE_UNITY_SKELETONANIMATION_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x1C1755F0)
#define SPINE_UNITY_SKELETONANIMATION_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1C174BC0)
#define SPINE_UNITY_SKELETONANIMATION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C175570)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1C1748F0)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1C173D40)
#define SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1C1748D0)
#define SPINE_UNITY_SKELETONANIMATION_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1C1748B0)
#define SPINE_UNITY_SKELETONANIMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C173D60)
#define SPINE_UNITY_SKELETONANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C175C00)
#define SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C174B50)
#define SPINE_UNITY_SKELETONANIMATION_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C175CB0)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1C174530)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1C174430)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C174830)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1C174630)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1C174730)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1C174030)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1C173F30)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C174330)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1C174130)
#define SPINE_UNITY_SKELETONANIMATION_REMOVE__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1C174230)
#define SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1C174980)
#define SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1C1748E0)
#define SPINE_UNITY_SKELETONANIMATION_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1C1748C0)
#define SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1C1755C0)
#define SPINE_UNITY_SKELETONANIMATION_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1C1754A0)
#define SPINE_UNITY_SKELETONANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C175450)
#define SPINE_UNITY_SKELETONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C175D60)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonAnimation_TypeDefinitionIndex = 40118;

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

		::System::Void AfterAnimationApplied()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_AFTERANIMATIONAPPLIED_OFFSET))(this);
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
