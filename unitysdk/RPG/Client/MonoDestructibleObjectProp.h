#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA928CD0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA9296E0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xA928DF0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xA929170)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA928720)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP__CTOR_OFFSET UNITYSDK_OFFSET(0xA929940)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDestructibleObjectProp_TypeDefinitionIndex = 63245;

	class MonoDestructibleObjectProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_9; // 0x0
		::System::Int32 collisionLimit; // 0x18
		::System::Single angularDecaySpeed; // 0x1C
		::UnityEngine::Rigidbody* Field_5_2; // 0x20
		::System::Single Field_5_3; // 0x28
		::UnityEngine::Vector3 Field_5_4; // 0x2C
		::UnityEngine::Vector3 Field_5_5; // 0x38
		::System::Boolean Field_5_6; // 0x44
		::UnityEngine::Vector3 Field_5_7; // 0x48
		::UnityEngine::Vector3 Field_5_8; // 0x54

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
