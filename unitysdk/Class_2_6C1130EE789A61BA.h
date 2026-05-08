#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_6C1130EE789A61BA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10C125D0)
#define CLASS_2_6C1130EE789A61BA_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x10C12490)
#define CLASS_2_6C1130EE789A61BA__CTOR_OFFSET UNITYSDK_OFFSET(0x10C125C0)

inline static constexpr unsigned int Class_2_6C1130EE789A61BA_TypeDefinitionIndex = 40437;

class Class_2_6C1130EE789A61BA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_5; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::UnityEngine::Animation* Field_2_6; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1130EE789A61BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C1130EE789A61BA_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C1130EE789A61BA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
