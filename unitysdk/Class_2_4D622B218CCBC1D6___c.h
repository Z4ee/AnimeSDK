#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_4D622B218CCBC1D6___C_METHOD_1_3A5CBE1FCF0E02A2_OFFSET UNITYSDK_OFFSET(0x14B74D90)
#define CLASS_2_4D622B218CCBC1D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B74D40)
#define CLASS_2_4D622B218CCBC1D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B74D80)

inline static constexpr unsigned int Class_2_4D622B218CCBC1D6___c_TypeDefinitionIndex = 65837;

class Class_2_4D622B218CCBC1D6___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_01B22E9930E7BB4D*>** StaticGet___9__46_1()
	{
		return (::System::Comparison_1<::Class_2_01B22E9930E7BB4D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D622B218CCBC1D6___c_TypeDefinitionIndex)->GetStaticField(0x414C0);
	}
	static ::Class_2_4D622B218CCBC1D6___c** StaticGet___9()
	{
		return (::Class_2_4D622B218CCBC1D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D622B218CCBC1D6___c_TypeDefinitionIndex)->GetStaticField(0x414C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4D622B218CCBC1D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D622B218CCBC1D6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3A5CBE1FCF0E02A2(::Class_2_01B22E9930E7BB4D* a1, ::Class_2_01B22E9930E7BB4D* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*, ::Class_2_01B22E9930E7BB4D*))((::PBYTE)hIl2Cpp + CLASS_2_4D622B218CCBC1D6___C_METHOD_1_3A5CBE1FCF0E02A2_OFFSET))(this, a1, a2);
	}
};
