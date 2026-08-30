#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9195CF3D054610FE;
class Class_2_6E72FA7907D46962;
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::Client { class TiltCommonConfig; }
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class ColliderConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONOCONTROLLABLEHAND_AWAKE_OFFSET UNITYSDK_OFFSET(0xD739830)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD7398D0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_DEFAULTROTATEPITCH_OFFSET UNITYSDK_OFFSET(0xD73B990)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_ENABLEFORCE_OFFSET UNITYSDK_OFFSET(0xD73B950)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_MAXRIGIDBODYROTPITCH_OFFSET UNITYSDK_OFFSET(0xD73B920)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_MONOAVATAR_OFFSET UNITYSDK_OFFSET(0xD73B930)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_GET_PROXY_OFFSET UNITYSDK_OFFSET(0xD73B970)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_333EA71EB5698E72_OFFSET UNITYSDK_OFFSET(0xD739C80)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0xD73ADB0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_BC7ACE02BFE5C18D_OFFSET UNITYSDK_OFFSET(0xD73A290)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xD73B660)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONBIND_OFFSET UNITYSDK_OFFSET(0xD73AF20)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xD739BF0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0xD73AB60)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONSWITCHGESTURETYPE_OFFSET UNITYSDK_OFFSET(0xD73AEA0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD73ABF0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONUNBIND_OFFSET UNITYSDK_OFFSET(0xD73B0F0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD73B270)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_SET_DEFAULTROTATEPITCH_OFFSET UNITYSDK_OFFSET(0xD73B9A0)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_SET_ENABLEFORCE_OFFSET UNITYSDK_OFFSET(0xD73B960)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_SET_MONOAVATAR_OFFSET UNITYSDK_OFFSET(0xD73B940)
#define RPG_CLIENT_MONOCONTROLLABLEHAND_SET_PROXY_OFFSET UNITYSDK_OFFSET(0xD73B980)
#define RPG_CLIENT_MONOCONTROLLABLEHAND__CTOR_OFFSET UNITYSDK_OFFSET(0xD73B9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoControllableHand_TypeDefinitionIndex = 68740;

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
		::Class_2_6E72FA7907D46962* _Proxy_k__BackingField; // 0x80
		::System::Single _DefaultRotatePitch_k__BackingField; // 0x88
		::Class_1_9195CF3D054610FE* LPHGKKIJBGL; // 0x90

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

		::System::Void Method_5_BC7ACE02BFE5C18D(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_METHOD_5_BC7ACE02BFE5C18D_OFFSET))(this, a1);
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

		::System::Void set_MonoAvatar(::RPG::Client::CharacterMonoAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterMonoAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_SET_MONOAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableForce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_GET_ENABLEFORCE_OFFSET))(this);
		}

		::System::Void set_EnableForce(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_SET_ENABLEFORCE_OFFSET))(this, a1);
		}

		::Class_2_6E72FA7907D46962* get_Proxy()
		{
			return ((::Class_2_6E72FA7907D46962*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::Class_2_6E72FA7907D46962* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6E72FA7907D46962*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_SET_PROXY_OFFSET))(this, a1);
		}

		::System::Single get_DefaultRotatePitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_GET_DEFAULTROTATEPITCH_OFFSET))(this);
		}

		::System::Void set_DefaultRotatePitch(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCONTROLLABLEHAND_SET_DEFAULTROTATEPITCH_OFFSET))(this, a1);
		}
	};
}
