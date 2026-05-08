#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E94822B622BD8A77___C_METHOD_1_AE33570ACE3B58C6_OFFSET UNITYSDK_OFFSET(0xF95A720)
#define CLASS_1_E94822B622BD8A77___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF95A6D0)
#define CLASS_1_E94822B622BD8A77___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF95A710)

inline static constexpr unsigned int Class_1_E94822B622BD8A77___c_TypeDefinitionIndex = 77610;

class Class_1_E94822B622BD8A77___c : public ::System::Object
{
public:
	static ::Class_1_E94822B622BD8A77___c** StaticGet___9()
	{
		return (::Class_1_E94822B622BD8A77___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E94822B622BD8A77___c_TypeDefinitionIndex)->GetStaticField(0x41690);
	}
	static ::System::Func_2<::Class_1_7AB88D713F5121B3*, ::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_7AB88D713F5121B3*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E94822B622BD8A77___c_TypeDefinitionIndex)->GetStaticField(0x41698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_AE33570ACE3B58C6(::Class_1_7AB88D713F5121B3* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_7AB88D713F5121B3*))((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77___C_METHOD_1_AE33570ACE3B58C6_OFFSET))(this, a1);
	}
};
