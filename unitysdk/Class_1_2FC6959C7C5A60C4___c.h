#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_296;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_2FC6959C7C5A60C4___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x18982D70)
#define CLASS_1_2FC6959C7C5A60C4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18982D20)
#define CLASS_1_2FC6959C7C5A60C4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18982D60)

inline static constexpr unsigned int Class_1_2FC6959C7C5A60C4___c_TypeDefinitionIndex = 16594;

class Class_1_2FC6959C7C5A60C4___c : public ::System::Object
{
public:
	static ::Class_1_2FC6959C7C5A60C4___c** StaticGet___9()
	{
		return (::Class_1_2FC6959C7C5A60C4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FC6959C7C5A60C4___c_TypeDefinitionIndex)->GetStaticField(0x8E70);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_296*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_296*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FC6959C7C5A60C4___c_TypeDefinitionIndex)->GetStaticField(0x8E78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FC6959C7C5A60C4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC6959C7C5A60C4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_296* a1, ::Class_2_208CC9941471731A_296* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_296*, ::Class_2_208CC9941471731A_296*))((::PBYTE)hIl2Cpp + CLASS_1_2FC6959C7C5A60C4___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
