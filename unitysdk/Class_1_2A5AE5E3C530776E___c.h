#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BCC22A53597699D4;
class Class_1_DBF7480490EC913A;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_2A5AE5E3C530776E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAB6170)
#define CLASS_1_2A5AE5E3C530776E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB61B0)
#define CLASS_1_2A5AE5E3C530776E___C___SORT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1BAB61C0)
#define CLASS_1_2A5AE5E3C530776E___C___SORT_B__15_1_OFFSET UNITYSDK_OFFSET(0x1BAB6240)

inline static constexpr unsigned int Class_1_2A5AE5E3C530776E___c_TypeDefinitionIndex = 41998;

class Class_1_2A5AE5E3C530776E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_DBF7480490EC913A*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_1_DBF7480490EC913A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A5AE5E3C530776E___c_TypeDefinitionIndex)->GetStaticField(0x49780);
	}
	static ::Class_1_2A5AE5E3C530776E___c** StaticGet___9()
	{
		return (::Class_1_2A5AE5E3C530776E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A5AE5E3C530776E___c_TypeDefinitionIndex)->GetStaticField(0x49788);
	}
	static ::System::Comparison_1<::Class_1_BCC22A53597699D4*>** StaticGet___9__15_1()
	{
		return (::System::Comparison_1<::Class_1_BCC22A53597699D4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A5AE5E3C530776E___c_TypeDefinitionIndex)->GetStaticField(0x49790);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __Sort_b__15_0(::Class_1_DBF7480490EC913A* a1, ::Class_1_DBF7480490EC913A* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DBF7480490EC913A*, ::Class_1_DBF7480490EC913A*))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E___C___SORT_B__15_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 __Sort_b__15_1(::Class_1_BCC22A53597699D4* a1, ::Class_1_BCC22A53597699D4* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_BCC22A53597699D4*, ::Class_1_BCC22A53597699D4*))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E___C___SORT_B__15_1_OFFSET))(this, a1, a2);
	}
};
