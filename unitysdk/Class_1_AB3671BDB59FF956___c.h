#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_21;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_AB3671BDB59FF956___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x13342DC0)
#define CLASS_1_AB3671BDB59FF956___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13342D70)
#define CLASS_1_AB3671BDB59FF956___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13342DB0)

inline static constexpr unsigned int Class_1_AB3671BDB59FF956___c_TypeDefinitionIndex = 13526;

class Class_1_AB3671BDB59FF956___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_21*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB3671BDB59FF956___c_TypeDefinitionIndex)->GetStaticField(0x8C80);
	}
	static ::Class_1_AB3671BDB59FF956___c** StaticGet___9()
	{
		return (::Class_1_AB3671BDB59FF956___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB3671BDB59FF956___c_TypeDefinitionIndex)->GetStaticField(0x8C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB3671BDB59FF956___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3671BDB59FF956___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_21* a1, ::Class_2_208CC9941471731A_21* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_21*, ::Class_2_208CC9941471731A_21*))((::PBYTE)hIl2Cpp + CLASS_1_AB3671BDB59FF956___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
