#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_438;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_FF61E85E1A811381___C_METHOD_1_2B3B816B6031F0E2_OFFSET UNITYSDK_OFFSET(0xE2080C0)
#define CLASS_1_FF61E85E1A811381___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE208070)
#define CLASS_1_FF61E85E1A811381___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE2080B0)

inline static constexpr unsigned int Class_1_FF61E85E1A811381___c_TypeDefinitionIndex = 53820;

class Class_1_FF61E85E1A811381___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::Class_1_5DA2E7556103D5A3_438*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Int32, ::Class_1_5DA2E7556103D5A3_438*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF61E85E1A811381___c_TypeDefinitionIndex)->GetStaticField(0x33E00);
	}
	static ::Class_1_FF61E85E1A811381___c** StaticGet___9()
	{
		return (::Class_1_FF61E85E1A811381___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF61E85E1A811381___c_TypeDefinitionIndex)->GetStaticField(0x33E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF61E85E1A811381___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF61E85E1A811381___C__CTOR_OFFSET))(this);
	}

	::Class_1_5DA2E7556103D5A3_438* Method_1_2B3B816B6031F0E2(::System::Int32 a1)
	{
		return ((::Class_1_5DA2E7556103D5A3_438*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF61E85E1A811381___C_METHOD_1_2B3B816B6031F0E2_OFFSET))(this, a1);
	}
};
