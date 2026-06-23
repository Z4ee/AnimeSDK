#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1062;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_360427E66FCC1CA1___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x1542F020)
#define CLASS_1_360427E66FCC1CA1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1542EFD0)
#define CLASS_1_360427E66FCC1CA1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1542F010)

inline static constexpr unsigned int Class_1_360427E66FCC1CA1___c_TypeDefinitionIndex = 16153;

class Class_1_360427E66FCC1CA1___c : public ::System::Object
{
public:
	static ::Class_1_360427E66FCC1CA1___c** StaticGet___9()
	{
		return (::Class_1_360427E66FCC1CA1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_360427E66FCC1CA1___c_TypeDefinitionIndex)->GetStaticField(0x78B0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_1062*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_1062*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_360427E66FCC1CA1___c_TypeDefinitionIndex)->GetStaticField(0x78B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_360427E66FCC1CA1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_360427E66FCC1CA1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_1062* a1, ::Class_2_208CC9941471731A_1062* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1062*, ::Class_2_208CC9941471731A_1062*))((::PBYTE)hIl2Cpp + CLASS_1_360427E66FCC1CA1___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
