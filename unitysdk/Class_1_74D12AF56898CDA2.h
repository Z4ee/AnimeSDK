#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_5A96F48F21CB3A57;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_74D12AF56898CDA2_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13BC9510)
#define CLASS_1_74D12AF56898CDA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BC95F0)

inline static constexpr unsigned int Class_1_74D12AF56898CDA2_TypeDefinitionIndex = 55181;

class Class_1_74D12AF56898CDA2 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x22A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A96F48F21CB3A57*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A96F48F21CB3A57*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x22A8);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xDD0);
	}
	static ::System::UInt32* StaticGet_Field_1_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xDD4);
	}
	static ::System::UInt32* StaticGet_Field_1_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xDD8);
	}
	static ::System::UInt32* StaticGet_Field_1_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xDDC);
	}
	static ::System::UInt32* StaticGet_Field_1_6()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xDE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_74D12AF56898CDA2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_74D12AF56898CDA2_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}
};
