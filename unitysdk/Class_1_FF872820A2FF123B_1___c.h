#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_FF872820A2FF123B_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18868F20)
#define CLASS_1_FF872820A2FF123B_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18868F50)
#define CLASS_1_FF872820A2FF123B_1___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x18868F60)

inline static constexpr unsigned int Class_1_FF872820A2FF123B_1___c_TypeDefinitionIndex = 63422;

class Class_1_FF872820A2FF123B_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_11B5C6B3FA66CD5A*, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_1_11B5C6B3FA66CD5A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF872820A2FF123B_1___c_TypeDefinitionIndex)->GetStaticField(0x53940);
	}
	static ::Class_1_FF872820A2FF123B_1___c** StaticGet___9()
	{
		return (::Class_1_FF872820A2FF123B_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF872820A2FF123B_1___c_TypeDefinitionIndex)->GetStaticField(0x53948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__2_0(::Class_1_11B5C6B3FA66CD5A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_11B5C6B3FA66CD5A*))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_1___C___CTOR_B__2_0_OFFSET))(this, a1);
	}
};
