#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2670985A37556FEA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_BE6C6CE94A06F09C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8EA42F0)
#define CLASS_2_BE6C6CE94A06F09C___C__COMPILE_B__4_0_OFFSET UNITYSDK_OFFSET(0x8EA4340)
#define CLASS_2_BE6C6CE94A06F09C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA4330)

inline static constexpr unsigned int Class_2_BE6C6CE94A06F09C___c_TypeDefinitionIndex = 53023;

class Class_2_BE6C6CE94A06F09C___c : public ::System::Object
{
public:
	static ::Class_2_BE6C6CE94A06F09C___c** StaticGet___9()
	{
		return (::Class_2_BE6C6CE94A06F09C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE6C6CE94A06F09C___c_TypeDefinitionIndex)->GetStaticField(0x25E00);
	}
	static ::System::Func_2<::Class_1_2670985A37556FEA*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_2670985A37556FEA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE6C6CE94A06F09C___c_TypeDefinitionIndex)->GetStaticField(0x25E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE6C6CE94A06F09C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE6C6CE94A06F09C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Compile_b__4_0(::Class_1_2670985A37556FEA* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2670985A37556FEA*))((::PBYTE)hIl2Cpp + CLASS_2_BE6C6CE94A06F09C___C__COMPILE_B__4_0_OFFSET))(this, x);
	}
};
