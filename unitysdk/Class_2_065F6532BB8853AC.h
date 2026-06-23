#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_065F6532BB8853AC_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x167E7FF0)
#define CLASS_2_065F6532BB8853AC_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x167E7DB0)
#define CLASS_2_065F6532BB8853AC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x167E8100)
#define CLASS_2_065F6532BB8853AC__CTOR_OFFSET UNITYSDK_OFFSET(0x167E80F0)

inline static constexpr unsigned int Class_2_065F6532BB8853AC_TypeDefinitionIndex = 71552;

class Class_2_065F6532BB8853AC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_8; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x20
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_3; // 0x38
	::UnityEngine::GameObject* Field_2_2; // 0x40
	::UnityEngine::CanvasGroup* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UITabButton* Field_2_10; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065F6532BB8853AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_065F6532BB8853AC_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_065F6532BB8853AC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065F6532BB8853AC_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
