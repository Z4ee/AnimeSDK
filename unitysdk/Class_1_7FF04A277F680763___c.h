#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D99A03C58ED2B6E_3;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_7FF04A277F680763___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x1226B2A0)
#define CLASS_1_7FF04A277F680763___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1226B250)
#define CLASS_1_7FF04A277F680763___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1226B290)

inline static constexpr unsigned int Class_1_7FF04A277F680763___c_TypeDefinitionIndex = 79078;

class Class_1_7FF04A277F680763___c : public ::System::Object
{
public:
	static ::Class_1_7FF04A277F680763___c** StaticGet___9()
	{
		return (::Class_1_7FF04A277F680763___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF04A277F680763___c_TypeDefinitionIndex)->GetStaticField(0x442E0);
	}
	static ::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_3*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF04A277F680763___c_TypeDefinitionIndex)->GetStaticField(0x442E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF04A277F680763___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF04A277F680763___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_6D99A03C58ED2B6E_3* a1, ::Class_2_6D99A03C58ED2B6E_3* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_3*, ::Class_2_6D99A03C58ED2B6E_3*))((::PBYTE)hIl2Cpp + CLASS_1_7FF04A277F680763___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
