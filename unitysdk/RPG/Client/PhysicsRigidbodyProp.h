#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xDADB0D0)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_METHOD_5_4D7DB0CF65D56E84_OFFSET UNITYSDK_OFFSET(0xDADB3F0)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_METHOD_5_7541FB7EB0923E08_OFFSET UNITYSDK_OFFSET(0xDADB700)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDADB1B0)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_PAUSEMOVE_OFFSET UNITYSDK_OFFSET(0xDADB320)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_RESUMEMOVE_OFFSET UNITYSDK_OFFSET(0xDADB390)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_START_OFFSET UNITYSDK_OFFSET(0xDADAF40)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP__CTOR_OFFSET UNITYSDK_OFFSET(0xDADB850)

namespace RPG::Client
{
	inline static constexpr unsigned int PhysicsRigidbodyProp_TypeDefinitionIndex = 68609;

	class PhysicsRigidbodyProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single PushForceScale; // 0x18
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x20
		::UnityEngine::Vector3 CBMGKKHPLEH; // 0x28
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_ONDESTROY_OFFSET))(this);
		}

		::System::Void PauseMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_PAUSEMOVE_OFFSET))(this);
		}

		::System::Void ResumeMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_RESUMEMOVE_OFFSET))(this);
		}

		::System::Void Method_5_4D7DB0CF65D56E84()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_METHOD_5_4D7DB0CF65D56E84_OFFSET))(this);
		}

		::System::Void Method_5_7541FB7EB0923E08(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_METHOD_5_7541FB7EB0923E08_OFFSET))(this, a1);
		}
	};
}
