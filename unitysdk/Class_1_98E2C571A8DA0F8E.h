#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_304;
class Class_3_E342D954CB576697;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }

#define CLASS_1_98E2C571A8DA0F8E_METHOD_1_2FC7288EAE16CCCF_OFFSET UNITYSDK_OFFSET(0x16A5C980)
#define CLASS_1_98E2C571A8DA0F8E__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5C970)

inline static constexpr unsigned int Class_1_98E2C571A8DA0F8E_TypeDefinitionIndex = 58963;

class Class_1_98E2C571A8DA0F8E : public ::System::Object
{
public:
	::MoleMole::MonoGamepadNavigatableList* Field_1_4; // 0x10
	::Class_0_16E4307DCC419505_304* Field_1_2; // 0x18
	::MoleMole::MonoGamepadNestedListDelegate* Field_1_5; // 0x20
	::Class_3_E342D954CB576697* Field_1_7; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Boolean Field_1_8; // 0x31
	::System::Int32 Field_1_0; // 0x34
	::System::Single Field_1_3; // 0x38
	::System::Int32 Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E2C571A8DA0F8E__CTOR_OFFSET))(this);
	}

	::MoleMole::MonoGamepadNavigatableList* Method_1_2FC7288EAE16CCCF()
	{
		return ((::MoleMole::MonoGamepadNavigatableList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E2C571A8DA0F8E_METHOD_1_2FC7288EAE16CCCF_OFFSET))(this);
	}
};
