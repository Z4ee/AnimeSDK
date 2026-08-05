#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/Struct_2_395B739A1AC58399_3.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class MorphBallConfig; }
namespace MoleMole::Battle { class MorphBallPhysicsSwitch; }
namespace MoleMole::Battle { class MorphBallSwitchChecker; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_ADDVELOCITY_OFFSET UNITYSDK_OFFSET(0x1081A050)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_APPLYANGULARIMPULSE_OFFSET UNITYSDK_OFFSET(0x10819FC0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_APPLYFORCE_OFFSET UNITYSDK_OFFSET(0x10819EA0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_APPLYIMPULSE_OFFSET UNITYSDK_OFFSET(0x10819F30)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CANSWITCHTOBALL_OFFSET UNITYSDK_OFFSET(0x1081C020)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CANSWITCHTOROBOT_OFFSET UNITYSDK_OFFSET(0x1081C190)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLEARCOLLISIONINFO_OFFSET UNITYSDK_OFFSET(0x1081B5B0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLEARLINEANDANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1081A110)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_DISABLEBALL_OFFSET UNITYSDK_OFFSET(0x1081BAF0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_ENABLEBALL_OFFSET UNITYSDK_OFFSET(0x1081B810)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_FETCHCONTACTINFO_OFFSET UNITYSDK_OFFSET(0x1081A790)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x10819780)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETBALLCENTERINTERPLOTED_OFFSET UNITYSDK_OFFSET(0x1081B6C0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETBALLCENTERLOCAL_OFFSET UNITYSDK_OFFSET(0x1081B620)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETBALLCENTER_OFFSET UNITYSDK_OFFSET(0x1081B510)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETBALLRADIUS_OFFSET UNITYSDK_OFFSET(0x10819690)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETCONTROLDIRFLAT_OFFSET UNITYSDK_OFFSET(0x10819820)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETLOOKFLAT_OFFSET UNITYSDK_OFFSET(0x1081BFB0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETRIGHT_OFFSET UNITYSDK_OFFSET(0x10819CC0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETVELOCITY_OFFSET UNITYSDK_OFFSET(0x108196E0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GET_SPHERECOLLIDER_OFFSET UNITYSDK_OFFSET(0x10819680)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0x10819660)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1081A5B0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1081A730)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_RECORDCOLLISION_OFFSET UNITYSDK_OFFSET(0x1081A660)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_SETONCOLLISIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1081C5E0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_SETPOSITIONANDLOOK_OFFSET UNITYSDK_OFFSET(0x1081A1B0)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_UNSETONCOLLISIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1081C630)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_UPDATELOOK_1_OFFSET UNITYSDK_OFFSET(0x1081C440)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_UPDATELOOK_OFFSET UNITYSDK_OFFSET(0x1081A470)
#define MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1081C680)

namespace MoleMole
{
	inline static constexpr unsigned int MorphBallPhysicsMiddleware_TypeDefinitionIndex = 67581;

	class MorphBallPhysicsMiddleware : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0x58
		::UnityEngine::Transform* _transform; // 0x68
		::UnityEngine::Rigidbody* _rigidbody; // 0x70
		::UnityEngine::SphereCollider* _sphereCollider; // 0x78
		::MoleMole::Battle::MorphBallConfig* config; // 0x80
		::MoleMole::Battle::MorphBallPhysicsSwitch* physicsSwitch; // 0x88
		::MoleMole::Battle::MorphBallSwitchChecker* switchChecker; // 0x90
		::System::Boolean _recordContact; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>* _collisions; // 0xA0
		::UnityEngine::Vector3 _centerOfMass; // 0xA8
		::UnityEngine::Vector3 _inertiaTensor; // 0xB4
		::UnityEngine::RigidbodyConstraints _constraints; // 0xC0
		::UnityEngine::CollisionDetectionMode _collisionDetectionMode; // 0xC4
		::UnityEngine::Vector3 _lookFlat; // 0xC8
		::System::Action_1<::UnityEngine::Collision*>* _onCollisionCallback; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_WorldUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GET_WORLDUP_OFFSET))(this);
		}

		::UnityEngine::SphereCollider* get_SphereCollider()
		{
			return ((::UnityEngine::SphereCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GET_SPHERECOLLIDER_OFFSET))(this);
		}

		::System::Single GetBallRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETBALLRADIUS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAngularVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETANGULARVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetControlDirFlat()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETCONTROLDIRFLAT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETRIGHT_OFFSET))(this);
		}

		::System::Void ApplyForce(::UnityEngine::Vector3 force)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_APPLYFORCE_OFFSET))(this, force);
		}

		::System::Void ApplyImpulse(::UnityEngine::Vector3 impulse)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_APPLYIMPULSE_OFFSET))(this, impulse);
		}

		::System::Void ApplyAngularImpulse(::UnityEngine::Vector3 impulse)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_APPLYANGULARIMPULSE_OFFSET))(this, impulse);
		}

		::System::Void AddVelocity(::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_ADDVELOCITY_OFFSET))(this, velocity);
		}

		::System::Void ClearLineAndAngularVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLEARLINEANDANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void SetPositionAndLook(::UnityEngine::Vector3 worldPos, ::UnityEngine::Vector3 lookDir, ::UnityEngine::Vector3 upDir)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_SETPOSITIONANDLOOK_OFFSET))(this, worldPos, lookDir, upDir);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_ONCOLLISIONENTER_OFFSET))(this, collision);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_ONCOLLISIONSTAY_OFFSET))(this, collision);
		}

		::System::Void RecordCollision(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_RECORDCOLLISION_OFFSET))(this, collision);
		}

		::System::Boolean FetchContactInfo(::System::Single wallThreshold, ::Struct_2_395B739A1AC58399_3& groundContact, ::Struct_2_395B739A1AC58399_3& wallContact)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Struct_2_395B739A1AC58399_3&, ::Struct_2_395B739A1AC58399_3&))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_FETCHCONTACTINFO_OFFSET))(this, wallThreshold, groundContact, wallContact);
		}

		::System::Void ClearCollisionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CLEARCOLLISIONINFO_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBallCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETBALLCENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBallCenterLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETBALLCENTERLOCAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBallCenterInterploted()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETBALLCENTERINTERPLOTED_OFFSET))(this);
		}

		::System::Void EnableBall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_ENABLEBALL_OFFSET))(this);
		}

		::System::Void DisableBall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_DISABLEBALL_OFFSET))(this);
		}

		::System::Boolean CanSwitchToBall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CANSWITCHTOBALL_OFFSET))(this);
		}

		::System::Boolean CanSwitchToRobot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_CANSWITCHTOROBOT_OFFSET))(this);
		}

		::System::Void UpdateLook(::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_UPDATELOOK_OFFSET))(this, v);
		}

		::System::Void UpdateLook_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_UPDATELOOK_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLookFlat()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_GETLOOKFLAT_OFFSET))(this);
		}

		::System::Void SetOnCollisionCallback(::System::Action_1<::UnityEngine::Collision*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_SETONCOLLISIONCALLBACK_OFFSET))(this, callback);
		}

		::System::Void UnSetOnCollisionCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MORPHBALLPHYSICSMIDDLEWARE_UNSETONCOLLISIONCALLBACK_OFFSET))(this);
		}
	};
}
