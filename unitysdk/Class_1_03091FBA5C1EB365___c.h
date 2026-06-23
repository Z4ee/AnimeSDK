#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define CLASS_1_03091FBA5C1EB365___C_METHOD_1_153C44B87832E568_1_OFFSET UNITYSDK_OFFSET(0x1A23BD40)
#define CLASS_1_03091FBA5C1EB365___C_METHOD_1_153C44B87832E568_OFFSET UNITYSDK_OFFSET(0x1A23BC20)
#define CLASS_1_03091FBA5C1EB365___C_METHOD_1_F1F05ADA1002181A_OFFSET UNITYSDK_OFFSET(0x1A23BC90)
#define CLASS_1_03091FBA5C1EB365___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A23BBD0)
#define CLASS_1_03091FBA5C1EB365___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23BC10)

inline static constexpr unsigned int Class_1_03091FBA5C1EB365___c_TypeDefinitionIndex = 73097;

class Class_1_03091FBA5C1EB365___c : public ::System::Object
{
public:
	static ::Class_1_03091FBA5C1EB365___c** StaticGet___9()
	{
		return (::Class_1_03091FBA5C1EB365___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03091FBA5C1EB365___c_TypeDefinitionIndex)->GetStaticField(0x38BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_03091FBA5C1EB365___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03091FBA5C1EB365___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_153C44B87832E568(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_03091FBA5C1EB365___C_METHOD_1_153C44B87832E568_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F1F05ADA1002181A(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_03091FBA5C1EB365___C_METHOD_1_F1F05ADA1002181A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_153C44B87832E568_1(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_03091FBA5C1EB365___C_METHOD_1_153C44B87832E568_1_OFFSET))(this, a1, a2);
	}
};
