#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_54134CBC16D70821_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13466C80)
#define CLASS_2_54134CBC16D70821_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13466AE0)
#define CLASS_2_54134CBC16D70821__CTOR_OFFSET UNITYSDK_OFFSET(0x13466C70)

inline static constexpr unsigned int Class_2_54134CBC16D70821_TypeDefinitionIndex = 79132;

class Class_2_54134CBC16D70821 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_8; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::UI::GridLayoutGroup* Field_2_5; // 0x28
	::UnityEngine::GameObject* Field_2_9; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::UI::ContentSizeFitter* Field_2_7; // 0x40
	::UnityEngine::Animation* Field_2_0; // 0x48
	::UnityEngine::GameObject* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_4; // 0x58
	::UnityEngine::UI::VerticalLayoutGroup* Field_2_6; // 0x60
	::MonoUITableScrollV2* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54134CBC16D70821__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_54134CBC16D70821_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_54134CBC16D70821_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
