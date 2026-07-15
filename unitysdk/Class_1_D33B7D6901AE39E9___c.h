#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_D33B7D6901AE39E9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187A61E0)
#define CLASS_1_D33B7D6901AE39E9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187A6220)
#define CLASS_1_D33B7D6901AE39E9___C___CTOR_B__99_0_OFFSET UNITYSDK_OFFSET(0x187A6230)

inline static constexpr unsigned int Class_1_D33B7D6901AE39E9___c_TypeDefinitionIndex = 39620;

class Class_1_D33B7D6901AE39E9___c : public ::System::Object
{
public:
	static ::Class_1_D33B7D6901AE39E9___c** StaticGet___9()
	{
		return (::Class_1_D33B7D6901AE39E9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D33B7D6901AE39E9___c_TypeDefinitionIndex)->GetStaticField(0x34580);
	}
	static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__99_0()
	{
		return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D33B7D6901AE39E9___c_TypeDefinitionIndex)->GetStaticField(0x34588);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D33B7D6901AE39E9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D33B7D6901AE39E9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__99_0(::System::Reflection::MethodInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_D33B7D6901AE39E9___C___CTOR_B__99_0_OFFSET))(this, a1);
	}
};
