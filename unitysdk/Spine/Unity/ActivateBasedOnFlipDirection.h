#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class ISkeletonComponent; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class HingeJoint2D; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_COMPENSATEMOVEMENTAFTERFLIPX_OFFSET UNITYSDK_OFFSET(0x183052F0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18304F90)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_HANDLEFLIP_OFFSET UNITYSDK_OFFSET(0x183050F0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_RESETJOINTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x18305190)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_START_OFFSET UNITYSDK_OFFSET(0x18304EA0)
#define SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18305440)

namespace Spine::Unity
{
	inline static constexpr unsigned int ActivateBasedOnFlipDirection_TypeDefinitionIndex = 43864;

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

		::System::Void HandleFlip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_HANDLEFLIP_OFFSET))(this, a1);
		}

		::System::Void ResetJointPositions(::Il2CppArray<::UnityEngine::HingeJoint2D*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::HingeJoint2D*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_RESETJOINTPOSITIONS_OFFSET))(this, a1);
		}

		::System::Void CompensateMovementAfterFlipX(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ACTIVATEBASEDONFLIPDIRECTION_COMPENSATEMOVEMENTAFTERFLIPX_OFFSET))(this, a1, a2);
		}
	};
}
