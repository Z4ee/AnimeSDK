#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonUtilityBone_Mode.h"
#include "unitysdk/Spine/Unity/SkeletonUtilityBone_UpdatePhase.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Bone; }
namespace Spine::Unity { class SkeletonUtility; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_SKELETONUTILITYBONE_ADDBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1833FA70)
#define SPINE_UNITY_SKELETONUTILITYBONE_BONETRANSFORMMODEINCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1833FA40)
#define SPINE_UNITY_SKELETONUTILITYBONE_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x1833DCC0)
#define SPINE_UNITY_SKELETONUTILITYBONE_GET_INCOMPATIBLETRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0x1833F6B0)
#define SPINE_UNITY_SKELETONUTILITYBONE_HANDLEONRESET_OFFSET UNITYSDK_OFFSET(0x1833F8E0)
#define SPINE_UNITY_SKELETONUTILITYBONE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1833F8F0)
#define SPINE_UNITY_SKELETONUTILITYBONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1833F6C0)
#define SPINE_UNITY_SKELETONUTILITYBONE_RESET_OFFSET UNITYSDK_OFFSET(0x1833F340)
#define SPINE_UNITY_SKELETONUTILITYBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1833FB00)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtilityBone_TypeDefinitionIndex = 43870;

	class SkeletonUtilityBone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* boneName; // 0x18
		::UnityEngine::Transform* parentReference; // 0x20
		::Spine::Unity::SkeletonUtilityBone_Mode mode; // 0x28
		::System::Boolean position; // 0x2C
		::System::Boolean rotation; // 0x2D
		::System::Boolean scale; // 0x2E
		::System::Boolean zPosition; // 0x2F
		::System::Single overrideAlpha; // 0x30
		::Spine::Unity::SkeletonUtility* hierarchy; // 0x38
		::Spine::Bone* bone; // 0x40
		::System::Boolean transformLerpComplete; // 0x48
		::System::Boolean valid; // 0x49
		::UnityEngine::Transform* cachedTransform; // 0x50
		::UnityEngine::Transform* skeletonTransform; // 0x58
		::System::Boolean incompatibleTransformMode; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IncompatibleTransformMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_GET_INCOMPATIBLETRANSFORMMODE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_ONENABLE_OFFSET))(this);
		}

		::System::Void HandleOnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_HANDLEONRESET_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_ONDISABLE_OFFSET))(this);
		}

		::System::Void DoUpdate(::Spine::Unity::SkeletonUtilityBone_UpdatePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone_UpdatePhase))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_DOUPDATE_OFFSET))(this, a1);
		}

		static ::System::Boolean BoneTransformModeIncompatible(::Spine::Bone* a1)
		{
			return ((::System::Boolean(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_BONETRANSFORMMODEINCOMPATIBLE_OFFSET))(a1);
		}

		::System::Void AddBoundingBox(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_ADDBOUNDINGBOX_OFFSET))(this, a1, a2, a3);
		}
	};
}
