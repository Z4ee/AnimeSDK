#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_411;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_48C79F0329BCDA89___C_METHOD_1_50AA5877B881235B_OFFSET UNITYSDK_OFFSET(0x17D9E340)
#define CLASS_2_48C79F0329BCDA89___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D9E2F0)
#define CLASS_2_48C79F0329BCDA89___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9E330)

inline static constexpr unsigned int Class_2_48C79F0329BCDA89___c_TypeDefinitionIndex = 72546;

class Class_2_48C79F0329BCDA89___c : public ::System::Object
{
public:
	static ::Class_2_48C79F0329BCDA89___c** StaticGet___9()
	{
		return (::Class_2_48C79F0329BCDA89___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48C79F0329BCDA89___c_TypeDefinitionIndex)->GetStaticField(0x32F60);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_411*, ::Class_0_16E4307DCC419505_411*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_411*, ::Class_0_16E4307DCC419505_411*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48C79F0329BCDA89___c_TypeDefinitionIndex)->GetStaticField(0x32F68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89___C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_411* Method_1_50AA5877B881235B(::Class_0_16E4307DCC419505_411* a1)
	{
		return ((::Class_0_16E4307DCC419505_411*(*)(::PVOID, ::Class_0_16E4307DCC419505_411*))((::PBYTE)hIl2Cpp + CLASS_2_48C79F0329BCDA89___C_METHOD_1_50AA5877B881235B_OFFSET))(this, a1);
	}
};
