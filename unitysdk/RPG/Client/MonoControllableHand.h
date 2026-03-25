#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9195CF3D054610FE;
class Class_2_57CD7C248B8FA7D6;
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::Client { class TiltCommonConfig; }
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class ColliderConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONOCONTROLLABLEHAND_AWAKE_OFFSET UNITYSDK_OFFSET(0x9C1C790)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9C1C840)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_DEFAULTROTATEPITCH_OFFSET UNITYSDK_OFFSET(0x9C1E7D0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_ENABLEFORCE_OFFSET UNITYSDK_OFFSET(0x9C1E790)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_MAXRIGIDBODYROTPITCH_OFFSET UNITYSDK_OFFSET(0x9C1E760)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_MONOAVATAR_OFFSET UNITYSDK_OFFSET(0x9C1E770)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x9C1E7B0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_1A840B879CF52B55_OFFSET UNITYSDK_OFFSET(0x9C1D200)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_333EA71EB5698E72_OFFSET UNITYSDK_OFFSET(0x9C1CBF0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0x9C1DC10)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x9C1E4A0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONBIND_OFFSET UNITYSDK_OFFSET(0x9C1DD80)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x9C1CB60)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x9C1D9C0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONSWITCHGESTURETYPE_OFFSET UNITYSDK_OFFSET(0x9C1DD00)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x9C1DA50)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONUNBIND_OFFSET UNITYSDK_OFFSET(0x9C1DF40)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9C1E0B0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_SET_DEFAULTROTATEPITCH_OFFSET UNITYSDK_OFFSET(0x9C1E7E0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_SET_ENABLEFORCE_OFFSET UNITYSDK_OFFSET(0x9C1E7A0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_SET_MONOAVATAR_OFFSET UNITYSDK_OFFSET(0x9C1E780)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x9C1E7C0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND__CTOR_OFFSET UNITYSDK_OFFSET(0x9C1E7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoControllableHand_TypeDefinitionIndex = 56172;

	class MonoControllableHand : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::ColliderConfig* defaultColliderConfig; // 0x18
		::RPG::Client::TiltCommonConfig* forwardTiltConfig; // 0x20
		::System::Single force; // 0x28
		::System::Single drag; // 0x2C
		::System::Single ImpulseForce; // 0x30
		::System::Single rigidbodyMaxRotPitch; // 0x34
		::System::Single rigidbodyMoveSpeed; // 0x38
		::System::Single rigidbodyRotateSpeed; // 0x3C
		::System::Single collisionLimitAngle; // 0x40
		::RPG::GameCore::AdventureHitConfig* rigidbodyHitConfig; // 0x48
		::RPG::GameCore::AdventureAttackDetectShapeConfig* rigidbodyAttackConfig; // 0x50
		::System::Single rocketDitherDuration; // 0x58
		::RPG::GameCore::ColliderConfig* rocketColliderConfig; // 0x60
		::System::String* catchPoint; // 0x68
		::RPG::Client::CharacterMonoAvatar* _MonoAvatar_k__BackingField; // 0x70
		::System::Boolean _EnableForce_k__BackingField; // 0x78
		::Class_2_57CD7C248B8FA7D6* _Proxy_k__BackingField; // 0x80
		::System::Single _DefaultRotatePitch_k__BackingField; // 0x88
		::Class_1_9195CF3D054610FE* Field_5_18; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_ONCOLLISIONSTAY_OFFSET))(this, a1);
		}

		::System::Void Method_5_1A840B879CF52B55(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_1A840B879CF52B55_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_333EA71EB5698E72(::UnityEngine::Collision* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_333EA71EB5698E72_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_4F4018519B20BBDD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_4F4018519B20BBDD_OFFSET))(this);
		}

		::System::Void OnSwitchGestureType(::RPG::GameCore::ESwitchHandGestureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_ONSWITCHGESTURETYPE_OFFSET))(this, a1);
		}

		::System::Void OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_ONBIND_OFFSET))(this);
		}

		::System::Void OnUnbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_ONUNBIND_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Single get_MaxRigidbodyRotPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_GET_MAXRIGIDBODYROTPITCH_OFFSET))(this);
		}

		::RPG::Client::CharacterMonoAvatar* get_MonoAvatar()
		{
			return ((::RPG::Client::CharacterMonoAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_GET_MONOAVATAR_OFFSET))(this);
		}

		::System::Void set_MonoAvatar(::RPG::Client::CharacterMonoAvatar* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterMonoAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_SET_MONOAVATAR_OFFSET))(this, value);
		}

		::System::Boolean get_EnableForce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_GET_ENABLEFORCE_OFFSET))(this);
		}

		::System::Void set_EnableForce(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_SET_ENABLEFORCE_OFFSET))(this, value);
		}

		::Class_2_57CD7C248B8FA7D6* get_Proxy()
		{
			return ((::Class_2_57CD7C248B8FA7D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::Class_2_57CD7C248B8FA7D6* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_57CD7C248B8FA7D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_SET_PROXY_OFFSET))(this, value);
		}

		::System::Single get_DefaultRotatePitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_GET_DEFAULTROTATEPITCH_OFFSET))(this);
		}

		::System::Void set_DefaultRotatePitch(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_SET_DEFAULTROTATEPITCH_OFFSET))(this, value);
		}
	};
}
