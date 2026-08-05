#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_825;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8B465F7B2B5781E8___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x16B54F00)
#define CLASS_1_8B465F7B2B5781E8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B54EB0)
#define CLASS_1_8B465F7B2B5781E8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B54EF0)

inline static constexpr unsigned int Class_1_8B465F7B2B5781E8___c_TypeDefinitionIndex = 17022;

class Class_1_8B465F7B2B5781E8___c : public ::System::Object
{
public:
	static ::Class_1_8B465F7B2B5781E8___c** StaticGet___9()
	{
		return (::Class_1_8B465F7B2B5781E8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B465F7B2B5781E8___c_TypeDefinitionIndex)->GetStaticField(0x7680);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_825*>** StaticGet___9__18_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_825*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B465F7B2B5781E8___c_TypeDefinitionIndex)->GetStaticField(0x7688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B465F7B2B5781E8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B465F7B2B5781E8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_825* a1, ::Class_2_208CC9941471731A_825* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_825*, ::Class_2_208CC9941471731A_825*))((::PBYTE)hIl2Cpp + CLASS_1_8B465F7B2B5781E8___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
