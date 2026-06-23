#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x109E1F00)
#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x109E2180)
#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x109E22C0)
#define CLASS_2_2BDD92312A1DB6EF__CTOR_OFFSET UNITYSDK_OFFSET(0x109E22B0)

inline static constexpr unsigned int Class_2_2BDD92312A1DB6EF_TypeDefinitionIndex = 65472;

class Class_2_2BDD92312A1DB6EF : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_5; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x20
	::UnityEngine::Animation* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x48
	::UnityEngine::Transform* Field_2_3; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x58
	::UnityEngine::Transform* Field_2_2; // 0x60
	::MoleMole::MonoGamepadModule* Field_2_12; // 0x68
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x70
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
