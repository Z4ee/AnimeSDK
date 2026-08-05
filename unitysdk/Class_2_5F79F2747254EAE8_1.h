#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_5F79F2747254EAE8_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1593C640)
#define CLASS_2_5F79F2747254EAE8_1_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x1593C430)
#define CLASS_2_5F79F2747254EAE8_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1593C6D0)
#define CLASS_2_5F79F2747254EAE8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1593C6C0)

inline static constexpr unsigned int Class_2_5F79F2747254EAE8_1_TypeDefinitionIndex = 68106;

class Class_2_5F79F2747254EAE8_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_9; // 0x20
	::UnityEngine::UI::Text* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_10; // 0x30
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_11; // 0x38
	::UnityEngine::RectTransform* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_0; // 0x48
	::UnityEngine::UI::Text* Field_2_7; // 0x50
	::MonoUITableScrollV2* Field_2_5; // 0x58
	::UnityEngine::GameObject* Field_2_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F79F2747254EAE8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F79F2747254EAE8_1_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F79F2747254EAE8_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F79F2747254EAE8_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
