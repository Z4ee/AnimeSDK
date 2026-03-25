#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceFunctionTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceValidTurnType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_D311B9D517905070_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x16B0FEB0)
#define CLASS_1_D311B9D517905070__CTOR_OFFSET UNITYSDK_OFFSET(0x16B103A0)

inline static constexpr unsigned int Class_1_D311B9D517905070_TypeDefinitionIndex = 10517;

class Class_1_D311B9D517905070 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_8; // 0x18
	::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* Field_1_10; // 0x20
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x28
	::RPG::Client::TextID Field_1_1; // 0x30
	::RPG::GameCore::DiceCombatDiceType Field_1_3; // 0x40
	::System::Boolean Field_1_2; // 0x44
	::RPG::Client::TextID Field_1_9; // 0x48
	::RPG::GameCore::DiceCombatDiceRare Field_1_4; // 0x58
	::RPG::GameCore::DiceCombatDiceValidTurnType Field_1_6; // 0x5C
	::System::UInt32 Field_1_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D311B9D517905070__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_D311B9D517905070*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_D311B9D517905070*&))((::PBYTE)hIl2Cpp + CLASS_1_D311B9D517905070_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
