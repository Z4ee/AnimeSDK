#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45C1DDE65CB117DE;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_87F49F41D977408F___C_METHOD_1_8FEF0F372530136D_OFFSET UNITYSDK_OFFSET(0x14003780)
#define CLASS_1_87F49F41D977408F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14003730)
#define CLASS_1_87F49F41D977408F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14003770)

inline static constexpr unsigned int Class_1_87F49F41D977408F___c_TypeDefinitionIndex = 87223;

class Class_1_87F49F41D977408F___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_45C1DDE65CB117DE*>** StaticGet___9__36_1()
	{
		return (::System::Predicate_1<::Class_1_45C1DDE65CB117DE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87F49F41D977408F___c_TypeDefinitionIndex)->GetStaticField(0x46010);
	}
	static ::Class_1_87F49F41D977408F___c** StaticGet___9()
	{
		return (::Class_1_87F49F41D977408F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87F49F41D977408F___c_TypeDefinitionIndex)->GetStaticField(0x46018);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87F49F41D977408F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F49F41D977408F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8FEF0F372530136D(::Class_1_45C1DDE65CB117DE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45C1DDE65CB117DE*))((::PBYTE)hIl2Cpp + CLASS_1_87F49F41D977408F___C_METHOD_1_8FEF0F372530136D_OFFSET))(this, a1);
	}
};
