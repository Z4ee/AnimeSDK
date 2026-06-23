#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Bone; }
namespace Spine { class PointAttachment; }
namespace Spine::Unity { class ISkeletonComponent; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_POINTFOLLOWER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AD24850)
#define SPINE_UNITY_POINTFOLLOWER_GET_SKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AD24840)
#define SPINE_UNITY_POINTFOLLOWER_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1AD24830)
#define SPINE_UNITY_POINTFOLLOWER_HANDLEREBUILDRENDERER_OFFSET UNITYSDK_OFFSET(0x1AD24C60)
#define SPINE_UNITY_POINTFOLLOWER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AD24860)
#define SPINE_UNITY_POINTFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD24FC0)
#define SPINE_UNITY_POINTFOLLOWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AD24DF0)
#define SPINE_UNITY_POINTFOLLOWER_UPDATEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1AD249C0)
#define SPINE_UNITY_POINTFOLLOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD255D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int PointFollower_TypeDefinitionIndex = 39443;

	class PointFollower : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::String* slotName; // 0x20
		::System::String* pointAttachmentName; // 0x28
		::System::Boolean followRotation; // 0x30
		::System::Boolean followSkeletonFlip; // 0x31
		::System::Boolean followSkeletonZPosition; // 0x32
		::UnityEngine::Transform* skeletonTransform; // 0x38
		::System::Boolean skeletonTransformIsParent; // 0x40
		::Spine::PointAttachment* point; // 0x48
		::Spine::Bone* bone; // 0x50
		::System::Boolean valid; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonRenderer* get_SkeletonRenderer()
		{
			return ((::Spine::Unity::SkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_SKELETONRENDERER_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonComponent* get_SkeletonComponent()
		{
			return ((::Spine::Unity::ISkeletonComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_SKELETONCOMPONENT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_INITIALIZE_OFFSET))(this);
		}

		::System::Void HandleRebuildRenderer(::Spine::Unity::SkeletonRenderer* skeletonRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_HANDLEREBUILDRENDERER_OFFSET))(this, skeletonRenderer);
		}

		::System::Void UpdateReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_UPDATEREFERENCES_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_LATEUPDATE_OFFSET))(this);
		}
	};
}
