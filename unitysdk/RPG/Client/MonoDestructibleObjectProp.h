#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_AWAKE_OFFSET UNITYSDK_OFFSET(0xD74E7E0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD74F1F0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xD74E900)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xD74EC80)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xD74E360)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP__CTOR_OFFSET UNITYSDK_OFFSET(0xD74F450)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDestructibleObjectProp_TypeDefinitionIndex = 68548;

	class MonoDestructibleObjectProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single GALIKECOAFL; // 0x0
		::System::Int32 collisionLimit; // 0x18
		::System::Single angularDecaySpeed; // 0x1C
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x20
		::System::Single ADIKIODKIBN; // 0x28
		::UnityEngine::Vector3 LBMIBPCGFBI; // 0x2C
		::UnityEngine::Vector3 FJFEGHMLCBC; // 0x38
		::System::Boolean CJDMCDJHGJD; // 0x44
		::UnityEngine::Vector3 CFJHLILPEHI; // 0x48
		::UnityEngine::Vector3 EJAOEBGHCHD; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_AWAKE_OFFSET))(this);
		}

		::System::Void SetSimulationSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_SETSIMULATIONSPEED_OFFSET))(this, a1);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}
	};
}
