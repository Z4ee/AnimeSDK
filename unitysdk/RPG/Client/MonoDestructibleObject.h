#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDestructibleObject_DestructibleState.h"
#include "unitysdk/RPG/Client/MonoEntityLogicBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_BEGINDESTRUCTION_OFFSET UNITYSDK_OFFSET(0xD74D250)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_CANDESTRUCT_OFFSET UNITYSDK_OFFSET(0xD74DF40)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_CHANGEOBJECTREFTOPATHREF_OFFSET UNITYSDK_OFFSET(0xD74B9C0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD74CD10)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_DISCONNECTEDOBJECTREF_OFFSET UNITYSDK_OFFSET(0xD74BB50)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD74C410)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_INITDESTRUCT_OFFSET UNITYSDK_OFFSET(0xD74D7E0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_ISBEGINDESTRUCTION_OFFSET UNITYSDK_OFFSET(0xD74D200)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xD74BF30)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xD74DFB0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0xD74BCC0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0xD74DAB0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD74BEA0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xD74C470)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD74D970)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0xD74E280)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_REFRESHOBJECTREFBYPATHREF_OFFSET UNITYSDK_OFFSET(0xD74BA10)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_RESETDESTRUCTION_OFFSET UNITYSDK_OFFSET(0xD74CDF0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD74CCB0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD74BBB0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD74E750)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDestructibleObject_TypeDefinitionIndex = 68546;

	class MonoDestructibleObject : public ::RPG::Client::MonoEntityLogicBase
	{
	public:
		// static const ::System::Single OAFFFELPIPA; // 0x0
		::UnityEngine::Renderer* VisiableRenderer; // 0x18
		::UnityEngine::GameObject* RigidbodyRoot; // 0x20
		::UnityEngine::GameObject* BoneRoot; // 0x28
		::System::String* VisiableRendererPath; // 0x30
		::System::String* RigidbodyRootPath; // 0x38
		::System::String* BoneRootPath; // 0x40
		::UnityEngine::Vector3 DefaultHitForward; // 0x48
		::System::String* SoundEvent; // 0x58
		::System::Boolean IgnoreCollisonWithPlayer; // 0x60
		::System::Single AttackForceBase; // 0x64
		::System::Single AttackForceToTorqueBase; // 0x68
		::System::Single MonsterThrowForceScale; // 0x6C
		::System::Single AddAttackForceY; // 0x70
		::System::Boolean EnableCollisionWithStage; // 0x74
		::System::Int32 CollisionWithStageMaxNum; // 0x78
		::System::Boolean EnableCollisionWithDestruction; // 0x7C
		::System::Single DestructionAngularDecaySpeed; // 0x80
		::System::Boolean PhysicsEnableAfterDestruction; // 0x84
		::System::Single DestructionTime; // 0x88
		::System::Boolean TimeCheckAfterPhysXFinish; // 0x8C
		::System::Single FadeOutTime; // 0x90
		::System::Boolean FadeOutDither; // 0x94
		::System::Boolean UseCenterForce; // 0x95
		::System::Single CenterForceOffsetY; // 0x98
		::System::Single HLBHOJFDAFA; // 0x9C
		::RPG::Client::MonoDestructibleObject_DestructibleState KLJMGCJLGAO; // 0xA0
		::Il2CppArray<::UnityEngine::Rigidbody*>* KAIAMDIAICK; // 0xA8
		::System::Int32 AHIHOKPHJBH; // 0xB0
		::Il2CppArray<::UnityEngine::Transform*>* FDKDNFEMMLK; // 0xB8
		::System::Boolean IBHOOPBLDCJ; // 0xC0
		::System::Int32 NPIAGNKENNG; // 0xC4
		::UnityEngine::Vector3 GBONGIBEGGF; // 0xC8
		::RPG::Client::BaseShaderPropertyTransition* NMADILMJIJF; // 0xD8
		::System::Boolean EDLLIJPCFDL; // 0xE0
		::System::Single HELBBAOFMCL; // 0xE4
		::System::Single BNKCGEMJDEJ; // 0xE8
		::System::Action* EEMKAJPNAMP; // 0xF0
		::Il2CppArray<::UnityEngine::Vector3>* BKNJGEPCLGE; // 0xF8
		::Il2CppArray<::UnityEngine::Quaternion>* DJHOKHHDEHA; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void ChangeObjectRefToPathRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_CHANGEOBJECTREFTOPATHREF_OFFSET))(this, a1);
		}

		::System::Void RefreshObjectRefByPathRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_REFRESHOBJECTREFBYPATHREF_OFFSET))(this);
		}

		::System::Void DisconnectedObjectRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_DISCONNECTEDOBJECTREF_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_DESPAWNED_OFFSET))(this);
		}

		::System::Boolean IsBeginDestruction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_ISBEGINDESTRUCTION_OFFSET))(this);
		}

		::System::Void BeginDestruction(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_BEGINDESTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void ResetDestruction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_RESETDESTRUCTION_OFFSET))(this);
		}

		::System::Boolean CanDestruct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_CANDESTRUCT_OFFSET))(this);
		}

		::System::Void InitDestruct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_INITDESTRUCT_OFFSET))(this);
		}

		::System::Void Method_6_FCB175EE4400634C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_FCB175EE4400634C_OFFSET))(this);
		}

		::System::Void Method_6_94C81405F83348DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_94C81405F83348DF_OFFSET))(this);
		}

		::System::Void Method_6_7A097E7EF929F289()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_7A097E7EF929F289_OFFSET))(this);
		}

		::System::Void Method_6_B43C848B078B3C34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_B43C848B078B3C34_OFFSET))(this);
		}

		::System::Void Method_6_8CB9BDF340E2FC64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_8CB9BDF340E2FC64_OFFSET))(this);
		}

		::System::Void Method_6_66CC9828DB1F478F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_66CC9828DB1F478F_OFFSET))(this);
		}

		::System::Void Method_6_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECT_METHOD_6_9681042564541CD6_OFFSET))(this);
		}
	};
}
