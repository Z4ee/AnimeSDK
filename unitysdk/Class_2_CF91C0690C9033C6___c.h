#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_CF91C0690C9033C6___C_METHOD_1_DAB37AB6685BC128_OFFSET UNITYSDK_OFFSET(0x15B0C350)
#define CLASS_2_CF91C0690C9033C6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B0C300)
#define CLASS_2_CF91C0690C9033C6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0C340)

inline static constexpr unsigned int Class_2_CF91C0690C9033C6___c_TypeDefinitionIndex = 61563;

class Class_2_CF91C0690C9033C6___c : public ::System::Object
{
public:
	static ::Class_2_CF91C0690C9033C6___c** StaticGet___9()
	{
		return (::Class_2_CF91C0690C9033C6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CF91C0690C9033C6___c_TypeDefinitionIndex)->GetStaticField(0x397E0);
	}
	static ::System::Comparison_1<::Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6*>** StaticGet___9__54_0()
	{
		return (::System::Comparison_1<::Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CF91C0690C9033C6___c_TypeDefinitionIndex)->GetStaticField(0x397E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CF91C0690C9033C6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF91C0690C9033C6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DAB37AB6685BC128(::Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6* a1, ::Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6*, ::Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6*))((::PBYTE)hIl2Cpp + CLASS_2_CF91C0690C9033C6___C_METHOD_1_DAB37AB6685BC128_OFFSET))(this, a1, a2);
	}
};
