#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E6272F143FEEC786;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_5A519139824A431D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC4E550)
#define CLASS_2_5A519139824A431D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC4E580)
#define CLASS_2_5A519139824A431D___C___RUNTEMPLATES_B__5_1_OFFSET UNITYSDK_OFFSET(0xAC4E590)

inline static constexpr unsigned int Class_2_5A519139824A431D___c_TypeDefinitionIndex = 44667;

class Class_2_5A519139824A431D___c : public ::System::Object
{
public:
	static ::Class_2_5A519139824A431D___c** StaticGet___9()
	{
		return (::Class_2_5A519139824A431D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5A519139824A431D___c_TypeDefinitionIndex)->GetStaticField(0x370E0);
	}
	static ::System::Comparison_1<::Class_1_E6272F143FEEC786*>** StaticGet___9__5_1()
	{
		return (::System::Comparison_1<::Class_1_E6272F143FEEC786*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5A519139824A431D___c_TypeDefinitionIndex)->GetStaticField(0x370E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RunTemplates_b__5_1(::Class_1_E6272F143FEEC786* lInst, ::Class_1_E6272F143FEEC786* rInst)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_E6272F143FEEC786*, ::Class_1_E6272F143FEEC786*))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___C___RUNTEMPLATES_B__5_1_OFFSET))(this, lInst, rInst);
	}
};
