#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E94822B622BD8A77___C_METHOD_1_AE33570ACE3B58C6_OFFSET UNITYSDK_OFFSET(0x14D04080)
#define CLASS_1_E94822B622BD8A77___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D04030)
#define CLASS_1_E94822B622BD8A77___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D04070)

inline static constexpr unsigned int Class_1_E94822B622BD8A77___c_TypeDefinitionIndex = 86825;

class Class_1_E94822B622BD8A77___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_7AB88D713F5121B3_1*, ::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_7AB88D713F5121B3_1*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E94822B622BD8A77___c_TypeDefinitionIndex)->GetStaticField(0x32AF0);
	}
	static ::Class_1_E94822B622BD8A77___c** StaticGet___9()
	{
		return (::Class_1_E94822B622BD8A77___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E94822B622BD8A77___c_TypeDefinitionIndex)->GetStaticField(0x32AF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_AE33570ACE3B58C6(::Class_1_7AB88D713F5121B3_1* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_7AB88D713F5121B3_1*))((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77___C_METHOD_1_AE33570ACE3B58C6_OFFSET))(this, a1);
	}
};
