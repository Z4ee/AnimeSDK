#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_171;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F3257C3C687CA30E___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x16BC9120)
#define CLASS_1_F3257C3C687CA30E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC90D0)
#define CLASS_1_F3257C3C687CA30E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC9110)

inline static constexpr unsigned int Class_1_F3257C3C687CA30E___c_TypeDefinitionIndex = 16136;

class Class_1_F3257C3C687CA30E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_171*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_171*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3257C3C687CA30E___c_TypeDefinitionIndex)->GetStaticField(0x8CE0);
	}
	static ::Class_1_F3257C3C687CA30E___c** StaticGet___9()
	{
		return (::Class_1_F3257C3C687CA30E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3257C3C687CA30E___c_TypeDefinitionIndex)->GetStaticField(0x8CE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3257C3C687CA30E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3257C3C687CA30E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_171* a1, ::Class_2_208CC9941471731A_171* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_171*, ::Class_2_208CC9941471731A_171*))((::PBYTE)hIl2Cpp + CLASS_1_F3257C3C687CA30E___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
