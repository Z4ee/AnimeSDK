#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D99A03C58ED2B6E_5;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_7FF04A277F680763___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x164B9DB0)
#define CLASS_1_7FF04A277F680763___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164B9D60)
#define CLASS_1_7FF04A277F680763___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164B9DA0)

inline static constexpr unsigned int Class_1_7FF04A277F680763___c_TypeDefinitionIndex = 84349;

class Class_1_7FF04A277F680763___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_5*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF04A277F680763___c_TypeDefinitionIndex)->GetStaticField(0x34D00);
	}
	static ::Class_1_7FF04A277F680763___c** StaticGet___9()
	{
		return (::Class_1_7FF04A277F680763___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF04A277F680763___c_TypeDefinitionIndex)->GetStaticField(0x34D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF04A277F680763___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF04A277F680763___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_6D99A03C58ED2B6E_5* a1, ::Class_2_6D99A03C58ED2B6E_5* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_5*, ::Class_2_6D99A03C58ED2B6E_5*))((::PBYTE)hIl2Cpp + CLASS_1_7FF04A277F680763___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
