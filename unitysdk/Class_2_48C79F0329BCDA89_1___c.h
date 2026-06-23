#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9D33A2E94B3E53DC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_48C79F0329BCDA89_1___C_METHOD_1_1E7939584B1618D9_OFFSET UNITYSDK_OFFSET(0x1BB1A1E0)
#define CLASS_2_48C79F0329BCDA89_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB1A190)
#define CLASS_2_48C79F0329BCDA89_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1A1D0)

inline static constexpr unsigned int Class_2_48C79F0329BCDA89_1___c_TypeDefinitionIndex = 42939;

class Class_2_48C79F0329BCDA89_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::Class_3_9D33A2E94B3E53DC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::Class_3_9D33A2E94B3E53DC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48C79F0329BCDA89_1___c_TypeDefinitionIndex)->GetStaticField(0x41E40);
	}
	static ::Class_2_48C79F0329BCDA89_1___c** StaticGet___9()
	{
		return (::Class_2_48C79F0329BCDA89_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48C79F0329BCDA89_1___c_TypeDefinitionIndex)->GetStaticField(0x41E48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89_1___C__CTOR_OFFSET))(this);
	}

	::Class_3_9D33A2E94B3E53DC* Method_1_1E7939584B1618D9(::Class_3_9D33A2E94B3E53DC* a1)
	{
		return ((::Class_3_9D33A2E94B3E53DC*(*)(::PVOID, ::Class_3_9D33A2E94B3E53DC*))((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89_1___C_METHOD_1_1E7939584B1618D9_OFFSET))(this, a1);
	}
};
