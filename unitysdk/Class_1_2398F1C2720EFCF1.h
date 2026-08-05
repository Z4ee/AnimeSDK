#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2398F1C2720EFCF1__CCTOR_OFFSET UNITYSDK_OFFSET(0x12372840)

inline static constexpr unsigned int Class_1_2398F1C2720EFCF1_TypeDefinitionIndex = 44152;

class Class_1_2398F1C2720EFCF1 : public ::System::Object
{
public:
	static ::MoleMole::GameplayTag* StaticGet_Field_1_1()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2398F1C2720EFCF1_TypeDefinitionIndex)->GetStaticField(0x389A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Ability::InLevelAbilityTargetMask>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Ability::InLevelAbilityTargetMask>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2398F1C2720EFCF1_TypeDefinitionIndex)->GetStaticField(0x389B0);
	}
	static ::MoleMole::GameplayTag* StaticGet_Field_1_0()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2398F1C2720EFCF1_TypeDefinitionIndex)->GetStaticField(0x389B8);
	}
	static ::MoleMole::Ability::InLevelAbilityTargetMask* StaticGet_Field_1_7()
	{
		return (::MoleMole::Ability::InLevelAbilityTargetMask*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2398F1C2720EFCF1_TypeDefinitionIndex)->GetStaticField(0xD6E0);
	}
	// static const ::System::String* Field_1_2; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2398F1C2720EFCF1__CCTOR_OFFSET))();
	}
};
