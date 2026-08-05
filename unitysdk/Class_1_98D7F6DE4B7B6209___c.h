#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_190;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_98D7F6DE4B7B6209___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x195D14C0)
#define CLASS_1_98D7F6DE4B7B6209___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195D1470)
#define CLASS_1_98D7F6DE4B7B6209___C__CTOR_OFFSET UNITYSDK_OFFSET(0x195D14B0)

inline static constexpr unsigned int Class_1_98D7F6DE4B7B6209___c_TypeDefinitionIndex = 10490;

class Class_1_98D7F6DE4B7B6209___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_190*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_190*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98D7F6DE4B7B6209___c_TypeDefinitionIndex)->GetStaticField(0x79B0);
	}
	static ::Class_1_98D7F6DE4B7B6209___c** StaticGet___9()
	{
		return (::Class_1_98D7F6DE4B7B6209___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98D7F6DE4B7B6209___c_TypeDefinitionIndex)->GetStaticField(0x79B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98D7F6DE4B7B6209___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98D7F6DE4B7B6209___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_190* a1, ::Class_2_208CC9941471731A_190* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_190*, ::Class_2_208CC9941471731A_190*))((::PBYTE)hIl2Cpp + CLASS_1_98D7F6DE4B7B6209___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
