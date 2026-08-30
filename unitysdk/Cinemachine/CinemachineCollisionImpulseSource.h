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

#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT2D_OFFSET UNITYSDK_OFFSET(0x18C4C5F0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT_OFFSET UNITYSDK_OFFSET(0x18C4C030)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY2D_OFFSET UNITYSDK_OFFSET(0x18C4C890)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY_OFFSET UNITYSDK_OFFSET(0x18C4C2D0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x18C4C530)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x18C4BFF0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C4BFE0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x18C4C860)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x18C4C2A0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_START_OFFSET UNITYSDK_OFFSET(0x18C4BEE0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4CA40)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollisionImpulseSource_TypeDefinitionIndex = 38566;

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

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Single GetMassAndVelocity(::UnityEngine::Collider* a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateImpactEvent(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER2D_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER2D_OFFSET))(this, a1);
		}

		::System::Single GetMassAndVelocity2D(::UnityEngine::Collider2D* a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY2D_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateImpactEvent2D(::UnityEngine::Collider2D* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT2D_OFFSET))(this, a1, a2);
		}
	};
}
