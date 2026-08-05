#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3;
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig_ConfigCollider; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }

#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_C7E844DE8257335C_METHOD_1_A67ED45AEC95A8D0_OFFSET UNITYSDK_OFFSET(0x13297100)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_C7E844DE8257335C_METHOD_1_E9D5724126AD5AF1_1_OFFSET UNITYSDK_OFFSET(0x13297480)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_C7E844DE8257335C_METHOD_1_E9D5724126AD5AF1_OFFSET UNITYSDK_OFFSET(0x132973F0)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_C7E844DE8257335C__CTOR_OFFSET UNITYSDK_OFFSET(0x132970F0)

inline static constexpr unsigned int Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3_Class_1_C7E844DE8257335C_TypeDefinitionIndex = 53438;

class Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3_Class_1_C7E844DE8257335C : public ::System::Object
{
public:
	::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>* Field_1_0; // 0x10
	::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>* Field_1_7; // 0x18
	::MoleMole::Battle::Entity* Field_1_5; // 0x20
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_1_4; // 0x28
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_C7E844DE8257335C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A67ED45AEC95A8D0(::MoleMole::Battle::ColliderEventDispatcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ColliderEventDispatcher*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_C7E844DE8257335C_METHOD_1_A67ED45AEC95A8D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9D5724126AD5AF1(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_C7E844DE8257335C_METHOD_1_E9D5724126AD5AF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9D5724126AD5AF1_1(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_C7E844DE8257335C_METHOD_1_E9D5724126AD5AF1_1_OFFSET))(this, a1, a2);
	}
};
