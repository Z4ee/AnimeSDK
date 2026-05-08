#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonRenderer.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"

namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator; }
namespace Spine::Unity { class UpdateBonesDelegate; }

#define SPINE_UNITY_SKELETONMECANIM_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x18B58000)
#define SPINE_UNITY_SKELETONMECANIM_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x18B57F00)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B58300)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x18B58100)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x18B58200)
#define SPINE_UNITY_SKELETONMECANIM_ADD__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x18B57B00)
#define SPINE_UNITY_SKELETONMECANIM_ADD__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x18B57A00)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B57E00)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x18B57C00)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x18B57D00)
#define SPINE_UNITY_SKELETONMECANIM_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x18B58BD0)
#define SPINE_UNITY_SKELETONMECANIM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18B58B80)
#define SPINE_UNITY_SKELETONMECANIM_GET_TRANSLATOR_OFFSET UNITYSDK_OFFSET(0x18B579F0)
#define SPINE_UNITY_SKELETONMECANIM_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x18B58400)
#define SPINE_UNITY_SKELETONMECANIM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18B58420)
#define SPINE_UNITY_SKELETONMECANIM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18B5ABB0)
#define SPINE_UNITY_SKELETONMECANIM_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x18B5AD60)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x18B58080)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x18B57F80)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B58380)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x18B58180)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x18B58280)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x18B57B80)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x18B57A80)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B57E80)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x18B57C80)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x18B57D80)
#define SPINE_UNITY_SKELETONMECANIM_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x18B58410)
#define SPINE_UNITY_SKELETONMECANIM_UPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x18B58B60)
#define SPINE_UNITY_SKELETONMECANIM_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x18B58BB0)
#define SPINE_UNITY_SKELETONMECANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B58B30)
#define SPINE_UNITY_SKELETONMECANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5ADA0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_TypeDefinitionIndex = 37832;

	class SkeletonMecanim : public ::Spine::Unity::SkeletonRenderer
	{
	public:
		::Spine::Unity::SkeletonMecanim_MecanimTranslator* translator; // 0xE0
		::System::Boolean wasUpdatedAfterInit; // 0xE8
		::Spine::Unity::ISkeletonAnimationDelegate* _OnAnimationRebuild; // 0xF0
		::Spine::Unity::UpdateBonesDelegate* _BeforeApply; // 0xF8
		::Spine::Unity::UpdateBonesDelegate* _UpdateLocal; // 0x100
		::Spine::Unity::UpdateBonesDelegate* _UpdateWorld; // 0x108
		::Spine::Unity::UpdateBonesDelegate* _UpdateComplete; // 0x110
		::Spine::Unity::UpdateTiming updateTiming; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonMecanim_MecanimTranslator* get_Translator()
		{
			return ((::Spine::Unity::SkeletonMecanim_MecanimTranslator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_GET_TRANSLATOR_OFFSET))(this);
		}

		::System::Void add__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void add__BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void remove__BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void add__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void remove__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void add__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void remove__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void add__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::Spine::Unity::UpdateTiming get_UpdateTiming()
		{
			return ((::Spine::Unity::UpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_GET_UPDATETIMING_OFFSET))(this);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_SET_UPDATETIMING_OFFSET))(this, value);
		}

		::System::Void Initialize(::System::Boolean overwrite, ::System::Boolean quiet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_INITIALIZE_OFFSET))(this, overwrite, quiet);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_UPDATE_1_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_UPDATEANIMATION_OFFSET))(this);
		}

		::System::Void ApplyAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_APPLYANIMATION_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ONBECAMEVISIBLE_OFFSET))(this);
		}
	};
}
