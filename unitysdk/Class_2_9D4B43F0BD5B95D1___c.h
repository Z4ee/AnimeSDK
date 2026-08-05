#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_9D4B43F0BD5B95D1___C_METHOD_1_5A6434846524FCDB_1_OFFSET UNITYSDK_OFFSET(0x17159800)
#define CLASS_2_9D4B43F0BD5B95D1___C_METHOD_1_5A6434846524FCDB_OFFSET UNITYSDK_OFFSET(0x171597F0)
#define CLASS_2_9D4B43F0BD5B95D1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171597A0)
#define CLASS_2_9D4B43F0BD5B95D1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171597E0)

inline static constexpr unsigned int Class_2_9D4B43F0BD5B95D1___c_TypeDefinitionIndex = 47423;

class Class_2_9D4B43F0BD5B95D1___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__51_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D4B43F0BD5B95D1___c_TypeDefinitionIndex)->GetStaticField(0x354C0);
	}
	static ::Class_2_9D4B43F0BD5B95D1___c** StaticGet___9()
	{
		return (::Class_2_9D4B43F0BD5B95D1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D4B43F0BD5B95D1___c_TypeDefinitionIndex)->GetStaticField(0x354C8);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D4B43F0BD5B95D1___c_TypeDefinitionIndex)->GetStaticField(0x354D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D4B43F0BD5B95D1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D4B43F0BD5B95D1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5A6434846524FCDB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D4B43F0BD5B95D1___C_METHOD_1_5A6434846524FCDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A6434846524FCDB_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D4B43F0BD5B95D1___C_METHOD_1_5A6434846524FCDB_1_OFFSET))(this, a1);
	}
};
