#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/BoneFollower_AxisOrientation.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Bone; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_BONEFOLLOWER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C15FF20)
#define SPINE_UNITY_BONEFOLLOWER_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1C15FB30)
#define SPINE_UNITY_BONEFOLLOWER_HANDLEREBUILDRENDERER_OFFSET UNITYSDK_OFFSET(0x1C15FF30)
#define SPINE_UNITY_BONEFOLLOWER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C15FB50)
#define SPINE_UNITY_BONEFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C160230)
#define SPINE_UNITY_BONEFOLLOWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C160060)
#define SPINE_UNITY_BONEFOLLOWER_SETBONE_OFFSET UNITYSDK_OFFSET(0x1C15FE70)
#define SPINE_UNITY_BONEFOLLOWER_SET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1C15FB40)
#define SPINE_UNITY_BONEFOLLOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C160C50)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoneFollower_TypeDefinitionIndex = 40103;

	class BoneFollower : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::String* boneName; // 0x20
		::System::Boolean followXYPosition; // 0x28
		::System::Boolean followZPosition; // 0x29
		::System::Boolean followBoneRotation; // 0x2A
		::System::Boolean followSkeletonFlip; // 0x2B
		::System::Boolean followLocalScale; // 0x2C
		::System::Boolean followParentWorldScale; // 0x2D
		::Spine::Unity::BoneFollower_AxisOrientation maintainedAxisOrientation; // 0x30
		::System::Boolean initializeOnAwake; // 0x34
		::System::Boolean valid; // 0x35
		::Spine::Bone* bone; // 0x38
		::UnityEngine::Transform* skeletonTransform; // 0x40
		::System::Boolean skeletonTransformIsParent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonRenderer* get_SkeletonRenderer()
		{
			return ((::Spine::Unity::SkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_GET_SKELETONRENDERER_OFFSET))(this);
		}

		::System::Void set_SkeletonRenderer(::Spine::Unity::SkeletonRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_SET_SKELETONRENDERER_OFFSET))(this, value);
		}

		::System::Boolean SetBone(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_SETBONE_OFFSET))(this, name);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_AWAKE_OFFSET))(this);
		}

		::System::Void HandleRebuildRenderer(::Spine::Unity::SkeletonRenderer* skeletonRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_HANDLEREBUILDRENDERER_OFFSET))(this, skeletonRenderer);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_LATEUPDATE_OFFSET))(this);
		}
	};
}
