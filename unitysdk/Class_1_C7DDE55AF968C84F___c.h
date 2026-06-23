#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_251;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_C7DDE55AF968C84F___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x154285F0)
#define CLASS_1_C7DDE55AF968C84F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154285A0)
#define CLASS_1_C7DDE55AF968C84F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154285E0)

inline static constexpr unsigned int Class_1_C7DDE55AF968C84F___c_TypeDefinitionIndex = 9953;

class Class_1_C7DDE55AF968C84F___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_251*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_251*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7DDE55AF968C84F___c_TypeDefinitionIndex)->GetStaticField(0x76F0);
	}
	static ::Class_1_C7DDE55AF968C84F___c** StaticGet___9()
	{
		return (::Class_1_C7DDE55AF968C84F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7DDE55AF968C84F___c_TypeDefinitionIndex)->GetStaticField(0x76F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C7DDE55AF968C84F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7DDE55AF968C84F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_251* a1, ::Class_2_208CC9941471731A_251* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_251*, ::Class_2_208CC9941471731A_251*))((::PBYTE)hIl2Cpp + CLASS_1_C7DDE55AF968C84F___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
