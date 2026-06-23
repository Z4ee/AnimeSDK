#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_94911C7709AE6562_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1CC13520)
#define CLASS_2_94911C7709AE6562_6_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0xD387D70)
#define CLASS_2_94911C7709AE6562_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC13510)

inline static constexpr unsigned int Class_2_94911C7709AE6562_6_TypeDefinitionIndex = 67672;

class Class_2_94911C7709AE6562_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x40
	::UnityEngine::GameObject* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x50
	::UnityEngine::GameObject* Field_2_5; // 0x58
	::UnityEngine::GameObject* Field_2_2; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x68
	::UnityEngine::RectTransform* Field_2_12; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94911C7709AE6562_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94911C7709AE6562_6_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94911C7709AE6562_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
