#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHudTweenBarController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define CLASS_2_60638234271CCDB8_119_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x154D0D00)
#define CLASS_2_60638234271CCDB8_119_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x154D0A70)
#define CLASS_2_60638234271CCDB8_119__CTOR_OFFSET UNITYSDK_OFFSET(0x154D0CF0)

inline static constexpr unsigned int Class_2_60638234271CCDB8_119_TypeDefinitionIndex = 62929;

class Class_2_60638234271CCDB8_119 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UISlider* Field_2_1; // 0x20
	::UnityEngine::Animation* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UISlider* Field_2_15; // 0x30
	::UnityEngine::UI::Extension::UISlider* Field_2_5; // 0x38
	::UnityEngine::Animation* Field_2_11; // 0x40
	::UnityEngine::UI::GridLayoutGroup* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UISlider* Field_2_17; // 0x50
	::UnityEngine::UI::Text* Field_2_18; // 0x58
	::UnityEngine::RectTransform* Field_2_14; // 0x60
	::UnityEngine::CanvasGroup* Field_2_9; // 0x68
	::UnityEngine::UI::Extension::UISlider* Field_2_16; // 0x70
	::UnityEngine::RectTransform* Field_2_0; // 0x78
	::UnityEngine::GameObject* Field_2_19; // 0x80
	::UnityEngine::CanvasGroup* Field_2_12; // 0x88
	::UnityEngine::CanvasGroup* Field_2_10; // 0x90
	::UnityEngine::RectTransform* Field_2_13; // 0x98
	::UnityEngine::Transform* Field_2_3; // 0xA0
	::MoleMole::UIHudTweenBarController* Field_2_2; // 0xA8
	::UnityEngine::Animation* Field_2_8; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_119__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_119_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_119_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
