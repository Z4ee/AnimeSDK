#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_74B5CC70D7830EE0;
class Class_1_BCC22A53597699D4;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8AE73F462C66560E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1678C190)
#define CLASS_1_8AE73F462C66560E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1678C1C0)
#define CLASS_1_8AE73F462C66560E___C___SORT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1678C1D0)
#define CLASS_1_8AE73F462C66560E___C___SORT_B__15_1_OFFSET UNITYSDK_OFFSET(0x1678C250)

inline static constexpr unsigned int Class_1_8AE73F462C66560E___c_TypeDefinitionIndex = 33651;

class Class_1_8AE73F462C66560E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_74B5CC70D7830EE0*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_1_74B5CC70D7830EE0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AE73F462C66560E___c_TypeDefinitionIndex)->GetStaticField(0xCF10);
	}
	static ::System::Comparison_1<::Class_1_BCC22A53597699D4*>** StaticGet___9__15_1()
	{
		return (::System::Comparison_1<::Class_1_BCC22A53597699D4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AE73F462C66560E___c_TypeDefinitionIndex)->GetStaticField(0xCF18);
	}
	static ::Class_1_8AE73F462C66560E___c** StaticGet___9()
	{
		return (::Class_1_8AE73F462C66560E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AE73F462C66560E___c_TypeDefinitionIndex)->GetStaticField(0xCF20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __Sort_b__15_0(::Class_1_74B5CC70D7830EE0* x, ::Class_1_74B5CC70D7830EE0* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_74B5CC70D7830EE0*, ::Class_1_74B5CC70D7830EE0*))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E___C___SORT_B__15_0_OFFSET))(this, x, y);
	}

	::System::Int32 __Sort_b__15_1(::Class_1_BCC22A53597699D4* x, ::Class_1_BCC22A53597699D4* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_BCC22A53597699D4*, ::Class_1_BCC22A53597699D4*))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E___C___SORT_B__15_1_OFFSET))(this, x, y);
	}
};
