#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_29;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_C7480A5E4F27657F___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x10143F30)
#define CLASS_2_C7480A5E4F27657F___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x10143EA0)
#define CLASS_2_C7480A5E4F27657F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10143E50)
#define CLASS_2_C7480A5E4F27657F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10143E90)

inline static constexpr unsigned int Class_2_C7480A5E4F27657F___c_TypeDefinitionIndex = 60661;

class Class_2_C7480A5E4F27657F___c : public ::System::Object
{
public:
	static ::Class_2_C7480A5E4F27657F___c** StaticGet___9()
	{
		return (::Class_2_C7480A5E4F27657F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7480A5E4F27657F___c_TypeDefinitionIndex)->GetStaticField(0x2D4C0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_29*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7480A5E4F27657F___c_TypeDefinitionIndex)->GetStaticField(0x2D4C8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7480A5E4F27657F___c_TypeDefinitionIndex)->GetStaticField(0x2D4D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C7480A5E4F27657F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7480A5E4F27657F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7480A5E4F27657F___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_29* a1, ::Class_2_208CC9941471731A_29* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_29*, ::Class_2_208CC9941471731A_29*))((::PBYTE)hIl2Cpp + CLASS_2_C7480A5E4F27657F___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
