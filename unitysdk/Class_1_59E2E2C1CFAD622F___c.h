#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_14E7CE92E8A3183F;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_59E2E2C1CFAD622F___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x169A0BD0)
#define CLASS_1_59E2E2C1CFAD622F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169A0B80)
#define CLASS_1_59E2E2C1CFAD622F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169A0BC0)

inline static constexpr unsigned int Class_1_59E2E2C1CFAD622F___c_TypeDefinitionIndex = 13642;

class Class_1_59E2E2C1CFAD622F___c : public ::System::Object
{
public:
	static ::Class_1_59E2E2C1CFAD622F___c** StaticGet___9()
	{
		return (::Class_1_59E2E2C1CFAD622F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59E2E2C1CFAD622F___c_TypeDefinitionIndex)->GetStaticField(0x7A10);
	}
	static ::System::Comparison_1<::Class_2_14E7CE92E8A3183F*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_2_14E7CE92E8A3183F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59E2E2C1CFAD622F___c_TypeDefinitionIndex)->GetStaticField(0x7A18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59E2E2C1CFAD622F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E2E2C1CFAD622F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_14E7CE92E8A3183F* a1, ::Class_2_14E7CE92E8A3183F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_14E7CE92E8A3183F*, ::Class_2_14E7CE92E8A3183F*))((::PBYTE)hIl2Cpp + CLASS_1_59E2E2C1CFAD622F___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
