#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E8D3B7B9181B8985___C_METHOD_1_5A6434846524FCDB_OFFSET UNITYSDK_OFFSET(0x12C8EAD0)
#define CLASS_1_E8D3B7B9181B8985___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x12C8EAE0)
#define CLASS_1_E8D3B7B9181B8985___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C8EA80)
#define CLASS_1_E8D3B7B9181B8985___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C8EAC0)

inline static constexpr unsigned int Class_1_E8D3B7B9181B8985___c_TypeDefinitionIndex = 54874;

class Class_1_E8D3B7B9181B8985___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8D3B7B9181B8985___c_TypeDefinitionIndex)->GetStaticField(0x4D290);
	}
	static ::Class_1_E8D3B7B9181B8985___c** StaticGet___9()
	{
		return (::Class_1_E8D3B7B9181B8985___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8D3B7B9181B8985___c_TypeDefinitionIndex)->GetStaticField(0x4D298);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8D3B7B9181B8985___c_TypeDefinitionIndex)->GetStaticField(0x4D2A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8D3B7B9181B8985___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8D3B7B9181B8985___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5A6434846524FCDB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E8D3B7B9181B8985___C_METHOD_1_5A6434846524FCDB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E8D3B7B9181B8985___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
