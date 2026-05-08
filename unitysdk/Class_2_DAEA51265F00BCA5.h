#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define CLASS_2_DAEA51265F00BCA5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D92960)
#define CLASS_2_DAEA51265F00BCA5_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13D92800)
#define CLASS_2_DAEA51265F00BCA5__CTOR_OFFSET UNITYSDK_OFFSET(0x13D92950)

inline static constexpr unsigned int Class_2_DAEA51265F00BCA5_TypeDefinitionIndex = 76822;

class Class_2_DAEA51265F00BCA5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::UnityEngine::UI::GridLayoutGroup* Field_2_7; // 0x28
	::UnityEngine::GameObject* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::UnityEngine::UI::VerticalLayoutGroup* Field_2_6; // 0x40
	::UnityEngine::GameObject* Field_2_4; // 0x48
	::MonoUITableScrollV2* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAEA51265F00BCA5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DAEA51265F00BCA5_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DAEA51265F00BCA5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
