#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7179D0DED6D3E44A;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A9ACC62B7043FBDA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16542E40)
#define CLASS_1_A9ACC62B7043FBDA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16542E80)
#define CLASS_1_A9ACC62B7043FBDA___C__LOAD_B__4_0_OFFSET UNITYSDK_OFFSET(0x16542E90)

inline static constexpr unsigned int Class_1_A9ACC62B7043FBDA___c_TypeDefinitionIndex = 32101;

class Class_1_A9ACC62B7043FBDA___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_7179D0DED6D3E44A*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_1_7179D0DED6D3E44A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9ACC62B7043FBDA___c_TypeDefinitionIndex)->GetStaticField(0x5730);
	}
	static ::Class_1_A9ACC62B7043FBDA___c** StaticGet___9()
	{
		return (::Class_1_A9ACC62B7043FBDA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9ACC62B7043FBDA___c_TypeDefinitionIndex)->GetStaticField(0x5738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9ACC62B7043FBDA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9ACC62B7043FBDA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _Load_b__4_0(::Class_1_7179D0DED6D3E44A* x, ::Class_1_7179D0DED6D3E44A* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_7179D0DED6D3E44A*, ::Class_1_7179D0DED6D3E44A*))((::PBYTE)hIl2Cpp + CLASS_1_A9ACC62B7043FBDA___C__LOAD_B__4_0_OFFSET))(this, x, y);
	}
};
