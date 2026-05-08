#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A2809E685EB92269;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define CLASS_3_81EE451546EAF862_CLASS_1_3920250511B5A88A_METHOD_1_51BF3BC36CC81E32_OFFSET UNITYSDK_OFFSET(0x139EC6F0)
#define CLASS_3_81EE451546EAF862_CLASS_1_3920250511B5A88A_METHOD_1_A54637DEF5E5F537_OFFSET UNITYSDK_OFFSET(0x139EC6C0)
#define CLASS_3_81EE451546EAF862_CLASS_1_3920250511B5A88A__CTOR_OFFSET UNITYSDK_OFFSET(0x139EC6B0)

inline static constexpr unsigned int Class_3_81EE451546EAF862_Class_1_3920250511B5A88A_TypeDefinitionIndex = 53225;

class Class_3_81EE451546EAF862_Class_1_3920250511B5A88A : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::Class_2_A2809E685EB92269* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_CLASS_1_3920250511B5A88A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A54637DEF5E5F537(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_CLASS_1_3920250511B5A88A_METHOD_1_A54637DEF5E5F537_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51BF3BC36CC81E32(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_CLASS_1_3920250511B5A88A_METHOD_1_51BF3BC36CC81E32_OFFSET))(this, a1, a2);
	}
};
