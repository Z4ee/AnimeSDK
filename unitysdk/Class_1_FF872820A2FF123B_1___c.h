#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_FF872820A2FF123B_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB25EB60)
#define CLASS_1_FF872820A2FF123B_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB25EB90)
#define CLASS_1_FF872820A2FF123B_1___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xB25EBA0)

inline static constexpr unsigned int Class_1_FF872820A2FF123B_1___c_TypeDefinitionIndex = 63360;

class Class_1_FF872820A2FF123B_1___c : public ::System::Object
{
public:
	static ::Class_1_FF872820A2FF123B_1___c** StaticGet___9()
	{
		return (::Class_1_FF872820A2FF123B_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF872820A2FF123B_1___c_TypeDefinitionIndex)->GetStaticField(0x20840);
	}
	static ::System::Func_2<::Class_1_11B5C6B3FA66CD5A*, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_1_11B5C6B3FA66CD5A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF872820A2FF123B_1___c_TypeDefinitionIndex)->GetStaticField(0x20848);
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
