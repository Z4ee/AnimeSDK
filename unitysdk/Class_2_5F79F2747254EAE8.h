#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_5F79F2747254EAE8_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1A841B10)
#define CLASS_2_5F79F2747254EAE8_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x1A841900)
#define CLASS_2_5F79F2747254EAE8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A841BA0)
#define CLASS_2_5F79F2747254EAE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A841B90)

inline static constexpr unsigned int Class_2_5F79F2747254EAE8_TypeDefinitionIndex = 58557;

class Class_2_5F79F2747254EAE8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_9; // 0x18
	::UnityEngine::UI::Text* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x30
	::UnityEngine::UI::Text* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_8; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x48
	::MonoUITableScrollV2* Field_2_4; // 0x50
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_6; // 0x58
	::UnityEngine::RectTransform* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F79F2747254EAE8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F79F2747254EAE8_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F79F2747254EAE8_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F79F2747254EAE8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
