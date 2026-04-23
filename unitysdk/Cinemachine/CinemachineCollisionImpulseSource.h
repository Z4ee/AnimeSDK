#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineImpulseSource.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Rigidbody; }

#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT2D_OFFSET UNITYSDK_OFFSET(0x12B754C0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT_OFFSET UNITYSDK_OFFSET(0x12B74F00)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY2D_OFFSET UNITYSDK_OFFSET(0x12B75760)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY_OFFSET UNITYSDK_OFFSET(0x12B751A0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x12B75400)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x12B74EC0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B74EB0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x12B75730)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x12B75170)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_START_OFFSET UNITYSDK_OFFSET(0x12B74DA0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B75910)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollisionImpulseSource_TypeDefinitionIndex = 36625;

	class CinemachineCollisionImpulseSource : public ::Cinemachine::CinemachineImpulseSource
	{
	public:
		::UnityEngine::LayerMask m_LayerMask; // 0x20
		::System::String* m_IgnoreTag; // 0x28
		::System::Boolean m_UseImpactDirection; // 0x30
		::System::Boolean m_ScaleImpactWithMass; // 0x31
		::System::Boolean m_ScaleImpactWithSpeed; // 0x32
		::UnityEngine::Rigidbody* mRigidBody; // 0x38
		::UnityEngine::Rigidbody2D* mRigidBody2D; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER_OFFSET))(this, c);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER_OFFSET))(this, c);
		}

		::System::Single GetMassAndVelocity(::UnityEngine::Collider* other, ::UnityEngine::Vector3& vel)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY_OFFSET))(this, other, vel);
		}

		::System::Void GenerateImpactEvent(::UnityEngine::Collider* other, ::UnityEngine::Vector3 vel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT_OFFSET))(this, other, vel);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER2D_OFFSET))(this, c);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER2D_OFFSET))(this, c);
		}

		::System::Single GetMassAndVelocity2D(::UnityEngine::Collider2D* other2d, ::UnityEngine::Vector3& vel)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY2D_OFFSET))(this, other2d, vel);
		}

		::System::Void GenerateImpactEvent2D(::UnityEngine::Collider2D* other2d, ::UnityEngine::Vector3 vel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT2D_OFFSET))(this, other2d, vel);
		}
	};
}
