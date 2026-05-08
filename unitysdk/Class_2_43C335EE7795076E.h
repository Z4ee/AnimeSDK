#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_43C335EE7795076E_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x15AFC3E0)
#define CLASS_2_43C335EE7795076E_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x15AFC610)
#define CLASS_2_43C335EE7795076E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15AFC790)
#define CLASS_2_43C335EE7795076E__CTOR_OFFSET UNITYSDK_OFFSET(0x15AFC780)

inline static constexpr unsigned int Class_2_43C335EE7795076E_TypeDefinitionIndex = 58910;

class Class_2_43C335EE7795076E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::MonoUITableScrollV2* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x28
	::MoleMole::MonoGamepadNavigatableList* Field_2_5; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x48
	::UnityEngine::RectTransform* Field_2_2; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C335EE7795076E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_43C335EE7795076E_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C335EE7795076E_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_43C335EE7795076E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
