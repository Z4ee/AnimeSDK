#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierCasterType.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_AC77597D4FE9B922_1_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0x182D5870)
#define CLASS_3_AC77597D4FE9B922_1_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x182D56A0)
#define CLASS_3_AC77597D4FE9B922_1__CTOR_OFFSET UNITYSDK_OFFSET(0x182D57A0)

inline static constexpr unsigned int Class_3_AC77597D4FE9B922_1_TypeDefinitionIndex = 23187;

class Class_3_AC77597D4FE9B922_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_17; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_7; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_9; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_6; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x38
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x40
	::RPG::GameCore::DynamicString* Field_3_1; // 0x48
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_24; // 0x50
	::RPG::GameCore::DynamicFloat* Field_3_10; // 0x58
	::RPG::GameCore::DynamicFloat* Field_3_8; // 0x60
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x68
	::System::String* Field_3_2; // 0x70
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_26; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_11; // 0x80
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_25; // 0x88
	::System::String* Field_3_21; // 0x90
	::RPG::MVector3 Field_3_18; // 0x98
	::System::Boolean Field_3_20; // 0xA4
	::System::Boolean Field_3_23; // 0xA5
	::System::Boolean Field_3_19; // 0xA6
	::System::Boolean Field_3_14; // 0xA7
	::RPG::GameCore::ModifierCasterType Field_3_12; // 0xA8
	::RPG::GameCore::ModifierStackingFlag Field_3_3; // 0xAC
	::System::Boolean Field_3_13; // 0xB0
	::System::Boolean Field_3_22; // 0xB1
	::System::Single Field_3_16; // 0xB4
	::System::Single Field_3_15; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC77597D4FE9B922_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AC77597D4FE9B922_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AC77597D4FE9B922_1*&))((::PBYTE)hIl2Cpp + CLASS_3_AC77597D4FE9B922_1_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DC061678298D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AC77597D4FE9B922_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AC77597D4FE9B922_1*))((::PBYTE)hIl2Cpp + CLASS_3_AC77597D4FE9B922_1_METHOD_3_7DC061678298D63E_OFFSET))(a1, a2);
	}
};
