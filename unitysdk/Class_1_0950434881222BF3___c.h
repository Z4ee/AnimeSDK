#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_72BDD67FEA972F1C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0950434881222BF3___C_METHOD_1_B237E7A09EA29A83_OFFSET UNITYSDK_OFFSET(0x12AD5CE0)
#define CLASS_1_0950434881222BF3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12AD5C90)
#define CLASS_1_0950434881222BF3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD5CD0)

inline static constexpr unsigned int Class_1_0950434881222BF3___c_TypeDefinitionIndex = 58592;

class Class_1_0950434881222BF3___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_72BDD67FEA972F1C*, ::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Class_2_72BDD67FEA972F1C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0950434881222BF3___c_TypeDefinitionIndex)->GetStaticField(0x39270);
	}
	static ::Class_1_0950434881222BF3___c** StaticGet___9()
	{
		return (::Class_1_0950434881222BF3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0950434881222BF3___c_TypeDefinitionIndex)->GetStaticField(0x39278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B237E7A09EA29A83(::Class_2_72BDD67FEA972F1C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3___C_METHOD_1_B237E7A09EA29A83_OFFSET))(this, a1);
	}
};
