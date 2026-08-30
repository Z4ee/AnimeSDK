#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C5CEA8DD589BD643;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_6BA212A2CA68E42F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C12F20)
#define CLASS_1_6BA212A2CA68E42F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C12F60)
#define CLASS_1_6BA212A2CA68E42F___C___BUILDRUNTIMERANKROWS_B__9_0_OFFSET UNITYSDK_OFFSET(0x19C12F70)
#define CLASS_1_6BA212A2CA68E42F___C___BUILDRUNTIMERANKROWS_B__9_1_OFFSET UNITYSDK_OFFSET(0x19C12FB0)

inline static constexpr unsigned int Class_1_6BA212A2CA68E42F___c_TypeDefinitionIndex = 80645;

class Class_1_6BA212A2CA68E42F___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_C5CEA8DD589BD643*>** StaticGet___9__9_1()
	{
		return (::System::Predicate_1<::Class_1_C5CEA8DD589BD643*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA212A2CA68E42F___c_TypeDefinitionIndex)->GetStaticField(0x5D140);
	}
	static ::System::Comparison_1<::Class_1_C5CEA8DD589BD643*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_1_C5CEA8DD589BD643*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA212A2CA68E42F___c_TypeDefinitionIndex)->GetStaticField(0x5D148);
	}
	static ::Class_1_6BA212A2CA68E42F___c** StaticGet___9()
	{
		return (::Class_1_6BA212A2CA68E42F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA212A2CA68E42F___c_TypeDefinitionIndex)->GetStaticField(0x5D150);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BA212A2CA68E42F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA212A2CA68E42F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __BuildRuntimeRankRows_b__9_0(::Class_1_C5CEA8DD589BD643* a1, ::Class_1_C5CEA8DD589BD643* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C5CEA8DD589BD643*, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_1_6BA212A2CA68E42F___C___BUILDRUNTIMERANKROWS_B__9_0_OFFSET))(this, a1, a2);
	}

	::System::Boolean __BuildRuntimeRankRows_b__9_1(::Class_1_C5CEA8DD589BD643* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_1_6BA212A2CA68E42F___C___BUILDRUNTIMERANKROWS_B__9_1_OFFSET))(this, a1);
	}
};
