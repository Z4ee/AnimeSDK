#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_5A96F48F21CB3A57;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_74D12AF56898CDA2_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17D50270)
#define CLASS_1_74D12AF56898CDA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D50350)

inline static constexpr unsigned int Class_1_74D12AF56898CDA2_TypeDefinitionIndex = 56414;

class Class_1_74D12AF56898CDA2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A96F48F21CB3A57*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A96F48F21CB3A57*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x26980);
	}
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x26988);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x74F0);
	}
	static ::System::UInt32* StaticGet_Field_1_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x74F4);
	}
	static ::System::UInt32* StaticGet_Field_1_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x74F8);
	}
	static ::System::UInt32* StaticGet_Field_1_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x74FC);
	}
	static ::System::UInt32* StaticGet_Field_1_6()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x7500);
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
