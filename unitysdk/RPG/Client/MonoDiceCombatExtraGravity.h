#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDiceCombatExtraGravity_DiceCombatGravitySimulateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_AWAKE_OFFSET UNITYSDK_OFFSET(0xA92B3A0)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA92B610)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA92BBC0)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_METHOD_5_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0xA92BD40)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA92BE50)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA92BE40)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA92BC40)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_START_OFFSET UNITYSDK_OFFSET(0xA92B4C0)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY__CTOR_OFFSET UNITYSDK_OFFSET(0xA92BE60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatExtraGravity_TypeDefinitionIndex = 58562;

	class MonoDiceCombatExtraGravity : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoAnimationTrigger* AnimationTrigger; // 0x18
		::System::Boolean UseGroundCheck; // 0x20
		::System::Single GroundCheckDistance; // 0x24
		::RPG::Client::MonoDiceCombatExtraGravity_DiceCombatGravitySimulateMode GravitySimulateForceMode; // 0x28
		::System::Boolean UseHeightBasedAcceleration; // 0x2C
		::System::Single TargetHeight; // 0x30
		::UnityEngine::AnimationCurve* HeightAccelerationCurve; // 0x38
		::System::Single MinForce; // 0x40
		::System::Single MaxForce; // 0x44
		::System::Single MinAcceleration; // 0x48
		::System::Single MaxAcceleration; // 0x4C
		::System::Boolean AddInitialVelocity; // 0x50
		::System::Single Pitch; // 0x54
		::System::Single Yaw; // 0x58
		::System::Single MinVelocity; // 0x5C
		::System::Single MaxVelocity; // 0x60
		::System::Single Field_5_16; // 0x64
		::UnityEngine::Vector3 Field_5_17; // 0x68
		::UnityEngine::Transform* Field_5_18; // 0x78
		::UnityEngine::Rigidbody* Field_5_19; // 0x80
		::System::Single Field_5_20; // 0x88
		::System::Single Field_5_21; // 0x8C
		::System::Single Field_5_22; // 0x90
		::System::Single Field_5_23; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_5_86143FF46EAE82B7(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_METHOD_5_86143FF46EAE82B7_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
		}
	};
}
