#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_5A96F48F21CB3A57;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_74D12AF56898CDA2_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x180C0A90)
#define CLASS_1_74D12AF56898CDA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x180C0B70)

inline static constexpr unsigned int Class_1_74D12AF56898CDA2_TypeDefinitionIndex = 59198;

class Class_1_74D12AF56898CDA2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A96F48F21CB3A57*>** StaticGet_ACLPBLGLFNK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5A96F48F21CB3A57*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x27E0);
	}
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_LFNKPBCGKCI()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0x27E8);
	}
	static ::System::UInt32* StaticGet_DPLIKGABGAM()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xE80);
	}
	static ::System::UInt32* StaticGet_EDOCNFBOPOA()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xE84);
	}
	static ::System::UInt32* StaticGet_JBMOMLJPJOC()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xE88);
	}
	static ::System::UInt32* StaticGet_HCKLOHHIBFB()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xE8C);
	}
	static ::System::UInt32* StaticGet_HJHIHAGLAAE()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74D12AF56898CDA2_TypeDefinitionIndex)->GetStaticField(0xE90);
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
