#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F2239EA7F93120BB;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_5A519139824A431D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F6EED0)
#define CLASS_2_5A519139824A431D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6EF00)
#define CLASS_2_5A519139824A431D___C___RUNTEMPLATES_B__5_1_OFFSET UNITYSDK_OFFSET(0x18F6EF10)

inline static constexpr unsigned int Class_2_5A519139824A431D___c_TypeDefinitionIndex = 55948;

class Class_2_5A519139824A431D___c : public ::System::Object
{
public:
	static ::Class_2_5A519139824A431D___c** StaticGet___9()
	{
		return (::Class_2_5A519139824A431D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5A519139824A431D___c_TypeDefinitionIndex)->GetStaticField(0x1A670);
	}
	static ::System::Comparison_1<::Class_1_F2239EA7F93120BB*>** StaticGet___9__5_1()
	{
		return (::System::Comparison_1<::Class_1_F2239EA7F93120BB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5A519139824A431D___c_TypeDefinitionIndex)->GetStaticField(0x1A678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RunTemplates_b__5_1(::Class_1_F2239EA7F93120BB* a1, ::Class_1_F2239EA7F93120BB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_F2239EA7F93120BB*, ::Class_1_F2239EA7F93120BB*))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___C___RUNTEMPLATES_B__5_1_OFFSET))(this, a1, a2);
	}
};
