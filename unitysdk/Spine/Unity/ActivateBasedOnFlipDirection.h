#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class ISkeletonComponent; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class HingeJoint2D; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_COMPENSATEMOVEMENTAFTERFLIPX_OFFSET UNITYSDK_OFFSET(0x19E2BBD0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x19E2B8B0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_HANDLEFLIP_OFFSET UNITYSDK_OFFSET(0x19E2B9D0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_RESETJOINTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19E2BA70)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_START_OFFSET UNITYSDK_OFFSET(0x19E2B7E0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2BD20)

namespace Spine::Unity
{
	inline static constexpr unsigned int ActivateBasedOnFlipDirection_TypeDefinitionIndex = 40611;

	class ActivateBasedOnFlipDirection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x20
		::UnityEngine::GameObject* activeOnNormalX; // 0x28
		::UnityEngine::GameObject* activeOnFlippedX; // 0x30
		::Il2CppArray<::UnityEngine::HingeJoint2D*>* jointsNormalX; // 0x38
		::Il2CppArray<::UnityEngine::HingeJoint2D*>* jointsFlippedX; // 0x40
		::Spine::Unity::ISkeletonComponent* skeletonComponent; // 0x48
		::System::Boolean wasFlippedXBefore; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void HandleFlip(::System::Boolean isFlippedX)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_HANDLEFLIP_OFFSET))(this, isFlippedX);
		}

		::System::Void ResetJointPositions(::Il2CppArray<::UnityEngine::HingeJoint2D*>* joints)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::HingeJoint2D*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_RESETJOINTPOSITIONS_OFFSET))(this, joints);
		}

		::System::Void CompensateMovementAfterFlipX(::UnityEngine::Transform* toActivate, ::UnityEngine::Transform* toDeactivate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_COMPENSATEMOVEMENTAFTERFLIPX_OFFSET))(this, toActivate, toDeactivate);
		}
	};
}
