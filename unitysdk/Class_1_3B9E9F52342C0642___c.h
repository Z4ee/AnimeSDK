#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_181;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3B9E9F52342C0642___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x1369E6D0)
#define CLASS_1_3B9E9F52342C0642___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1369E680)
#define CLASS_1_3B9E9F52342C0642___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1369E6C0)

inline static constexpr unsigned int Class_1_3B9E9F52342C0642___c_TypeDefinitionIndex = 13531;

class Class_1_3B9E9F52342C0642___c : public ::System::Object
{
public:
	static ::Class_1_3B9E9F52342C0642___c** StaticGet___9()
	{
		return (::Class_1_3B9E9F52342C0642___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B9E9F52342C0642___c_TypeDefinitionIndex)->GetStaticField(0x7710);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_181*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_181*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B9E9F52342C0642___c_TypeDefinitionIndex)->GetStaticField(0x7718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B9E9F52342C0642___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B9E9F52342C0642___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_181* a1, ::Class_2_208CC9941471731A_181* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_181*, ::Class_2_208CC9941471731A_181*))((::PBYTE)hIl2Cpp + CLASS_1_3B9E9F52342C0642___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
