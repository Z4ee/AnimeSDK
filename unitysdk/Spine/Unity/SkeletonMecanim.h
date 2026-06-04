#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonRenderer.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"

namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator; }
namespace Spine::Unity { class UpdateBonesDelegate; }

#define SPINE_UNITY_SKELETONMECANIM_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1ACCA1D0)
#define SPINE_UNITY_SKELETONMECANIM_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1ACCA0F0)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACCA470)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1ACCA2B0)
#define SPINE_UNITY_SKELETONMECANIM_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1ACCA390)
#define SPINE_UNITY_SKELETONMECANIM_ADD__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1ACC9D70)
#define SPINE_UNITY_SKELETONMECANIM_ADD__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1ACC9C90)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACCA010)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1ACC9E50)
#define SPINE_UNITY_SKELETONMECANIM_ADD__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1ACC9F30)
#define SPINE_UNITY_SKELETONMECANIM_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x1ACCAC80)
#define SPINE_UNITY_SKELETONMECANIM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACCAC50)
#define SPINE_UNITY_SKELETONMECANIM_GET_TRANSLATOR_OFFSET UNITYSDK_OFFSET(0x1ACC9C80)
#define SPINE_UNITY_SKELETONMECANIM_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1ACCA550)
#define SPINE_UNITY_SKELETONMECANIM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ACCA570)
#define SPINE_UNITY_SKELETONMECANIM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACCCB20)
#define SPINE_UNITY_SKELETONMECANIM_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1ACCCB80)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1ACCA240)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1ACCA160)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACCA4E0)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1ACCA320)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1ACCA400)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1ACC9DE0)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1ACC9D00)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACCA080)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1ACC9EC0)
#define SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1ACC9FA0)
#define SPINE_UNITY_SKELETONMECANIM_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1ACCA560)
#define SPINE_UNITY_SKELETONMECANIM_UPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x1ACCAC30)
#define SPINE_UNITY_SKELETONMECANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ACCAC00)
#define SPINE_UNITY_SKELETONMECANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCCC00)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_TypeDefinitionIndex = 41417;

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

		::System::Void add__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void remove__OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void add__BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void remove__BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void add__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void remove__UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void add__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void remove__UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void add__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD__UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove__UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE__UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_ADD_UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_REMOVE_UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::Spine::Unity::UpdateTiming get_UpdateTiming()
		{
			return ((::Spine::Unity::UpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_GET_UPDATETIMING_OFFSET))(this);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_SET_UPDATETIMING_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_FIXEDUPDATE_OFFSET))(this);
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
