#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_267;
class Class_1_74C6821D77CCA75B;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEventBase; }

#define CLASS_1_EBC8BFC37EF67FAD_METHOD_1_1F674D8DC58D0E0B_OFFSET UNITYSDK_OFFSET(0x1838AC20)
#define CLASS_1_EBC8BFC37EF67FAD_METHOD_1_25149FD8B5B06D06_OFFSET UNITYSDK_OFFSET(0x1838AE80)
#define CLASS_1_EBC8BFC37EF67FAD_METHOD_1_D3295AD28949B6C0_OFFSET UNITYSDK_OFFSET(0x1838B570)
#define CLASS_1_EBC8BFC37EF67FAD_METHOD_1_FB57AA081CA50EC6_OFFSET UNITYSDK_OFFSET(0x1838A1A0)
#define CLASS_1_EBC8BFC37EF67FAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1838B6C0)

inline static constexpr unsigned int Class_1_EBC8BFC37EF67FAD_TypeDefinitionIndex = 33986;

class Class_1_EBC8BFC37EF67FAD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBC8BFC37EF67FAD_TypeDefinitionIndex)->GetStaticField(0x26A70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_267* Method_1_FB57AA081CA50EC6(::System::Object* a1, ::Class_1_74C6821D77CCA75B* a2)
	{
		return ((::Class_0_16E4307DCC419505_267*(*)(::System::Object*, ::Class_1_74C6821D77CCA75B*))((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD_METHOD_1_FB57AA081CA50EC6_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_267* Method_1_25149FD8B5B06D06(::System::Object* a1, ::UnityEngine::Events::UnityEventBase* a2, ::Il2CppArray<::System::Type*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_267*(*)(::System::Object*, ::UnityEngine::Events::UnityEventBase*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD_METHOD_1_25149FD8B5B06D06_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Events::UnityEventBase* Method_1_D3295AD28949B6C0(::System::Type* a1, ::System::Object* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Events::UnityEventBase*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD_METHOD_1_D3295AD28949B6C0_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::Type*>* Method_1_1F674D8DC58D0E0B(::System::Type* a1)
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD_METHOD_1_1F674D8DC58D0E0B_OFFSET))(a1);
	}
};
