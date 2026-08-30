#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_312;
class Class_1_74C6821D77CCA75B;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEventBase; }

#define CLASS_1_972AC73DDB2642E6_METHOD_1_0009064291F53B06_OFFSET UNITYSDK_OFFSET(0x1E5B0AE0)
#define CLASS_1_972AC73DDB2642E6_METHOD_1_134EDD48878B7E2E_OFFSET UNITYSDK_OFFSET(0x1E5B1340)
#define CLASS_1_972AC73DDB2642E6_METHOD_1_5F6AE921E15E13B7_OFFSET UNITYSDK_OFFSET(0x1E5B18E0)
#define CLASS_1_972AC73DDB2642E6_METHOD_1_B1E54ED6C9E9076A_OFFSET UNITYSDK_OFFSET(0x1E5B1040)
#define CLASS_1_972AC73DDB2642E6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B1D70)

inline static constexpr unsigned int Class_1_972AC73DDB2642E6_TypeDefinitionIndex = 42393;

class Class_1_972AC73DDB2642E6 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_KLABJMFDCCP()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_972AC73DDB2642E6_TypeDefinitionIndex)->GetStaticField(0x53ED0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_972AC73DDB2642E6__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_312* Method_1_0009064291F53B06(::System::Object* a1, ::Class_1_74C6821D77CCA75B* a2)
	{
		return ((::Class_0_16E4307DCC419505_312*(*)(::System::Object*, ::Class_1_74C6821D77CCA75B*))((::PBYTE)hIl2Cpp + CLASS_1_972AC73DDB2642E6_METHOD_1_0009064291F53B06_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_312* Method_1_134EDD48878B7E2E(::System::Object* a1, ::UnityEngine::Events::UnityEventBase* a2, ::Il2CppArray<::System::Type*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_312*(*)(::System::Object*, ::UnityEngine::Events::UnityEventBase*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_972AC73DDB2642E6_METHOD_1_134EDD48878B7E2E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Events::UnityEventBase* Method_1_5F6AE921E15E13B7(::System::Type* a1, ::System::Object* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Events::UnityEventBase*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_972AC73DDB2642E6_METHOD_1_5F6AE921E15E13B7_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::Type*>* Method_1_B1E54ED6C9E9076A(::System::Type* a1)
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_972AC73DDB2642E6_METHOD_1_B1E54ED6C9E9076A_OFFSET))(a1);
	}
};
