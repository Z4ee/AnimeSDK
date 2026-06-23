#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_953;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_28B09AD0BD92D5B7___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x18532030)
#define CLASS_1_28B09AD0BD92D5B7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18531FE0)
#define CLASS_1_28B09AD0BD92D5B7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18532020)

inline static constexpr unsigned int Class_1_28B09AD0BD92D5B7___c_TypeDefinitionIndex = 14697;

class Class_1_28B09AD0BD92D5B7___c : public ::System::Object
{
public:
	static ::Class_1_28B09AD0BD92D5B7___c** StaticGet___9()
	{
		return (::Class_1_28B09AD0BD92D5B7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28B09AD0BD92D5B7___c_TypeDefinitionIndex)->GetStaticField(0x77C0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_953*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_953*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28B09AD0BD92D5B7___c_TypeDefinitionIndex)->GetStaticField(0x77C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28B09AD0BD92D5B7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B09AD0BD92D5B7___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_953* a1, ::Class_2_208CC9941471731A_953* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_953*, ::Class_2_208CC9941471731A_953*))((::PBYTE)hIl2Cpp + CLASS_1_28B09AD0BD92D5B7___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
