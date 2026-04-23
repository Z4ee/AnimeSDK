#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C8BB23B0435A836;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_13FE4AAA1A281B42___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B21270)
#define CLASS_1_13FE4AAA1A281B42___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B212B0)
#define CLASS_1_13FE4AAA1A281B42___C__SORTHOLDEDDICES_B__82_0_OFFSET UNITYSDK_OFFSET(0x11B212C0)

inline static constexpr unsigned int Class_1_13FE4AAA1A281B42___c_TypeDefinitionIndex = 55621;

class Class_1_13FE4AAA1A281B42___c : public ::System::Object
{
public:
	static ::Class_1_13FE4AAA1A281B42___c** StaticGet___9()
	{
		return (::Class_1_13FE4AAA1A281B42___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13FE4AAA1A281B42___c_TypeDefinitionIndex)->GetStaticField(0x48C90);
	}
	static ::System::Comparison_1<::Class_1_9C8BB23B0435A836*>** StaticGet___9__82_0()
	{
		return (::System::Comparison_1<::Class_1_9C8BB23B0435A836*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13FE4AAA1A281B42___c_TypeDefinitionIndex)->GetStaticField(0x48C98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SortHoldedDices_b__82_0(::Class_1_9C8BB23B0435A836* a, ::Class_1_9C8BB23B0435A836* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9C8BB23B0435A836*, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___C__SORTHOLDEDDICES_B__82_0_OFFSET))(this, a, b);
	}
};
