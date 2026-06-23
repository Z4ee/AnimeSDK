#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_98EB31C24C284B75;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_98EB31C24C284B75_CLASS_1_0D5AA434E81CB001_METHOD_1_D8083DB301F74A4A_OFFSET UNITYSDK_OFFSET(0x1590D000)
#define CLASS_1_98EB31C24C284B75_CLASS_1_0D5AA434E81CB001__CTOR_OFFSET UNITYSDK_OFFSET(0x1590CFF0)

inline static constexpr unsigned int Class_1_98EB31C24C284B75_Class_1_0D5AA434E81CB001_TypeDefinitionIndex = 59915;

class Class_1_98EB31C24C284B75_Class_1_0D5AA434E81CB001 : public ::System::Object
{
public:
	::Class_1_98EB31C24C284B75* Field_1_0; // 0x10
	::System::Action_1<::System::Boolean>* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_1_0D5AA434E81CB001__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D8083DB301F74A4A(::System::Boolean a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_1_0D5AA434E81CB001_METHOD_1_D8083DB301F74A4A_OFFSET))(this, a1, a2);
	}
};
