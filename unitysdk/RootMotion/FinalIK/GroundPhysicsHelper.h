#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class GroundPhysicsHelper_CapsuleCastDelegate; }
namespace RootMotion::FinalIK { class GroundPhysicsHelper_RaycastDelegate; }
namespace RootMotion::FinalIK { class GroundPhysicsHelper_SphereCastDelegate; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x8E08A70)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSCAPSULECAST_OFFSET UNITYSDK_OFFSET(0x8E096C0)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSRAYCAST_OFFSET UNITYSDK_OFFSET(0x8E07990)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSSPHERECAST_OFFSET UNITYSDK_OFFSET(0x8E08740)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x8E07160)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x8E07DE0)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E09EB0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundPhysicsHelper_TypeDefinitionIndex = 41002;

	class GroundPhysicsHelper : public ::System::Object
	{
	public:
		static ::RootMotion::FinalIK::GroundPhysicsHelper_SphereCastDelegate** StaticGet_OverrideSphereCastDelegate()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_SphereCastDelegate**)Il2CppClass::FromTypeDefinitionIndex(GroundPhysicsHelper_TypeDefinitionIndex)->GetStaticField(0x5A470);
		}
		static ::RootMotion::FinalIK::GroundPhysicsHelper_RaycastDelegate** StaticGet_OverrideRaycastDelegate()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_RaycastDelegate**)Il2CppClass::FromTypeDefinitionIndex(GroundPhysicsHelper_TypeDefinitionIndex)->GetStaticField(0x5A478);
		}
		static ::RootMotion::FinalIK::GroundPhysicsHelper_CapsuleCastDelegate** StaticGet_OverrideCapsuleCastDelegate()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_CapsuleCastDelegate**)Il2CppClass::FromTypeDefinitionIndex(GroundPhysicsHelper_TypeDefinitionIndex)->GetStaticField(0x5A480);
		}
		static ::System::Collections::Concurrent::ConcurrentQueue_1<::Il2CppArray<::UnityEngine::RaycastHit>*>** StaticGet_HitCaches()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::Il2CppArray<::UnityEngine::RaycastHit>*>**)Il2CppClass::FromTypeDefinitionIndex(GroundPhysicsHelper_TypeDefinitionIndex)->GetStaticField(0x5A488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean Raycast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::RootMotion::FinalIK::GroundRaycastHit& hit, ::System::Single distance, ::UnityEngine::LayerMask layerMask, ::System::Boolean thread)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RootMotion::FinalIK::GroundRaycastHit&, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCAST_OFFSET))(start, dir, hit, distance, layerMask, thread);
		}

		static ::System::Boolean SphereCast(::UnityEngine::Vector3 start, ::System::Single radius, ::UnityEngine::Vector3 dir, ::RootMotion::FinalIK::GroundRaycastHit& hit, ::System::Single distance, ::UnityEngine::LayerMask layerMask, ::System::Boolean thread)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::RootMotion::FinalIK::GroundRaycastHit&, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECAST_OFFSET))(start, radius, dir, hit, distance, layerMask, thread);
		}

		static ::System::Boolean CapsuleCast(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::UnityEngine::Vector3 dir, ::RootMotion::FinalIK::GroundRaycastHit& hit, ::System::Single distance, ::UnityEngine::LayerMask layerMask, ::System::Boolean thread)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::RootMotion::FinalIK::GroundRaycastHit&, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_CAPSULECAST_OFFSET))(p0, p1, radius, dir, hit, distance, layerMask, thread);
		}

		static ::System::Boolean PhysicsRaycast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::System::Single distance, ::RootMotion::FinalIK::GroundRaycastHit& hit, ::UnityEngine::LayerMask layerMask, ::System::Boolean thread)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSRAYCAST_OFFSET))(start, dir, distance, hit, layerMask, thread);
		}

		static ::System::Boolean PhysicsSphereCast(::UnityEngine::Vector3 start, ::System::Single radius, ::UnityEngine::Vector3 dir, ::System::Single distance, ::RootMotion::FinalIK::GroundRaycastHit& hit, ::UnityEngine::LayerMask layerMask, ::System::Boolean thread)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSSPHERECAST_OFFSET))(start, radius, dir, distance, hit, layerMask, thread);
		}

		static ::System::Boolean PhysicsCapsuleCast(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::UnityEngine::Vector3 dir, ::System::Single distance, ::RootMotion::FinalIK::GroundRaycastHit& hit, ::UnityEngine::LayerMask layerMask, ::System::Boolean thread)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_PHYSICSCAPSULECAST_OFFSET))(p0, p1, radius, dir, distance, hit, layerMask, thread);
		}
	};
}
