#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MonoPushDownObject_MotionCurve.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class MonoPushDownObject_Class_3_356D7F803ADB5B01; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_INIT_OFFSET UNITYSDK_OFFSET(0x16127000)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16127110)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_71EEEF71468B2F7F_OFFSET UNITYSDK_OFFSET(0x161281C0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x16128150)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_BAE42965A38A00B6_OFFSET UNITYSDK_OFFSET(0x16127E20)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_PUSH_OFFSET UNITYSDK_OFFSET(0x161270B0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RAYCAST_OFFSET UNITYSDK_OFFSET(0x161277B0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x16127050)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x161287C0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16128780)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MonoPushDownObject_TypeDefinitionIndex = 78214;

	class MonoPushDownObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_HLHDLNNKFMP()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonoPushDownObject_TypeDefinitionIndex)->GetStaticField(0x63CA0);
		}
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_IKADOAGOFEM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPushDownObject_TypeDefinitionIndex)->GetStaticField(0x63CA8);
		}
		::UnityEngine::Vector3 forward; // 0x18
		::UnityEngine::Vector3 right; // 0x24
		::RPG::Client::Prop::MonoPushDownObject_MotionCurve locationCurve; // 0x30
		::RPG::Client::Prop::MonoPushDownObject_MotionCurve rotationCurve; // 0x40
		::System::Single downTimePoint; // 0x50
		::System::Single downGravity; // 0x54
		::System::Single maxDownSpeed; // 0x58
		::UnityEngine::CapsuleCollider* rootCollider; // 0x60
		::UnityEngine::LayerMask raycastLayers; // 0x68
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x70
		::System::Boolean PKLPDEEKKED; // 0x78
		::System::Boolean CIJGDENIFFF; // 0x79
		::System::Single LKDEMNFIHHM; // 0x7C
		::System::Single MLKGEFGBHIE; // 0x80
		::RPG::Client::Prop::MonoPushDownObject_Class_3_356D7F803ADB5B01* MPKAFEJFNKN; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT__CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_INIT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RESET_OFFSET))(this);
		}

		::System::Void Push(::RPG::Client::Prop::MonoPushDownObject_Class_3_356D7F803ADB5B01* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::MonoPushDownObject_Class_3_356D7F803ADB5B01*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_PUSH_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Raycast(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RAYCAST_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_BAE42965A38A00B6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::GameEntity*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_BAE42965A38A00B6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_5_71EEEF71468B2F7F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::GameEntity*& a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_71EEEF71468B2F7F_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_METHOD_5_A693F2E8D4F4A766_OFFSET))(this, a1);
		}
	};
}
