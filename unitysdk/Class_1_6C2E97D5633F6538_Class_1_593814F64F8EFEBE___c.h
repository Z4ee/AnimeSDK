#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_123;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9638B0)
#define CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9638F0)
#define CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C___CREATETRAITS_B__10_0_OFFSET UNITYSDK_OFFSET(0xB963900)

inline static constexpr unsigned int Class_1_6C2E97D5633F6538_Class_1_593814F64F8EFEBE___c_TypeDefinitionIndex = 79739;

class Class_1_6C2E97D5633F6538_Class_1_593814F64F8EFEBE___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_123*, ::System::Boolean>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_123*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C2E97D5633F6538_Class_1_593814F64F8EFEBE___c_TypeDefinitionIndex)->GetStaticField(0x69A90);
	}
	static ::Class_1_6C2E97D5633F6538_Class_1_593814F64F8EFEBE___c** StaticGet___9()
	{
		return (::Class_1_6C2E97D5633F6538_Class_1_593814F64F8EFEBE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C2E97D5633F6538_Class_1_593814F64F8EFEBE___c_TypeDefinitionIndex)->GetStaticField(0x69A98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateTraits_b__10_0(::Class_0_16E4307DCC419505_123* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_123*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C___CREATETRAITS_B__10_0_OFFSET))(this, a1);
	}
};
