#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_9AF4DC35DE74AB23_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x114392D0)
#define CLASS_2_9AF4DC35DE74AB23_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x11439080)
#define CLASS_2_9AF4DC35DE74AB23_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x114393C0)
#define CLASS_2_9AF4DC35DE74AB23__CTOR_OFFSET UNITYSDK_OFFSET(0x114393B0)

inline static constexpr unsigned int Class_2_9AF4DC35DE74AB23_TypeDefinitionIndex = 52053;

class Class_2_9AF4DC35DE74AB23 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::UnityEngine::GameObject* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::MoleMole::MonoGamepadSelectable* Field_2_1; // 0x48
	::UnityEngine::GameObject* Field_2_3; // 0x50
	::UnityEngine::GameObject* Field_2_2; // 0x58
	::UnityEngine::RectTransform* Field_2_8; // 0x60
	::UnityEngine::GameObject* Field_2_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AF4DC35DE74AB23__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9AF4DC35DE74AB23_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9AF4DC35DE74AB23_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AF4DC35DE74AB23_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
