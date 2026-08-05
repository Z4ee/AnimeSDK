#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22AF1BA6B9A53CBF;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_C6DE81A012ED838B_CLASS_1_9EE5B4EBD4FF80B1_METHOD_1_5F8DBEE7B1418844_OFFSET UNITYSDK_OFFSET(0x11573F20)
#define CLASS_3_C6DE81A012ED838B_CLASS_1_9EE5B4EBD4FF80B1__CTOR_OFFSET UNITYSDK_OFFSET(0x11573F10)

inline static constexpr unsigned int Class_3_C6DE81A012ED838B_Class_1_9EE5B4EBD4FF80B1_TypeDefinitionIndex = 84994;

class Class_3_C6DE81A012ED838B_Class_1_9EE5B4EBD4FF80B1 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::Action_2<::System::Boolean, ::Class_1_22AF1BA6B9A53CBF*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_CLASS_1_9EE5B4EBD4FF80B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5F8DBEE7B1418844(::System::Boolean a1, ::Class_1_22AF1BA6B9A53CBF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_22AF1BA6B9A53CBF*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_CLASS_1_9EE5B4EBD4FF80B1_METHOD_1_5F8DBEE7B1418844_OFFSET))(this, a1, a2);
	}
};
