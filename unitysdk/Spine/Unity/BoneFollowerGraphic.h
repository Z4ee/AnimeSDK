#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/BoneFollower_AxisOrientation.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Bone; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_AWAKE_OFFSET UNITYSDK_OFFSET(0x183FB800)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_GET_SKELETONGRAPHIC_OFFSET UNITYSDK_OFFSET(0x183FB5F0)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x183FB610)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x183FB820)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_SETBONE_OFFSET UNITYSDK_OFFSET(0x183FB6D0)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_SET_SKELETONGRAPHIC_OFFSET UNITYSDK_OFFSET(0x183FB600)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x183FC100)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoneFollowerGraphic_TypeDefinitionIndex = 34751;

	class BoneFollowerGraphic : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x18
		::System::Boolean initializeOnAwake; // 0x20
		::System::String* boneName; // 0x28
		::System::Boolean followBoneRotation; // 0x30
		::System::Boolean followSkeletonFlip; // 0x31
		::System::Boolean followLocalScale; // 0x32
		::System::Boolean followParentWorldScale; // 0x33
		::System::Boolean followXYPosition; // 0x34
		::System::Boolean followZPosition; // 0x35
		::Spine::Unity::BoneFollower_AxisOrientation maintainedAxisOrientation; // 0x38
		::Spine::Bone* bone; // 0x40
		::UnityEngine::Transform* skeletonTransform; // 0x48
		::System::Boolean skeletonTransformIsParent; // 0x50
		::System::Boolean valid; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonGraphic* get_SkeletonGraphic()
		{
			return ((::Spine::Unity::SkeletonGraphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_GET_SKELETONGRAPHIC_OFFSET))(this);
		}

		::System::Void set_SkeletonGraphic(::Spine::Unity::SkeletonGraphic* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_SET_SKELETONGRAPHIC_OFFSET))(this, value);
		}

		::System::Boolean SetBone(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_SETBONE_OFFSET))(this, name);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_INITIALIZE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_LATEUPDATE_OFFSET))(this);
		}
	};
}
