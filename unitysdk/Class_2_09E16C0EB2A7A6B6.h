#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_09E16C0EB2A7A6B6_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xD0B7C20)
#define CLASS_2_09E16C0EB2A7A6B6_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0xD0B7A10)
#define CLASS_2_09E16C0EB2A7A6B6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD0B7CF0)
#define CLASS_2_09E16C0EB2A7A6B6__CTOR_OFFSET UNITYSDK_OFFSET(0xD0B7CE0)

inline static constexpr unsigned int Class_2_09E16C0EB2A7A6B6_TypeDefinitionIndex = 50390;

class Class_2_09E16C0EB2A7A6B6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::UnityEngine::RectTransform* Field_2_8; // 0x40
	::MonoUITableScrollV2* Field_2_4; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x58
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E16C0EB2A7A6B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_09E16C0EB2A7A6B6_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_09E16C0EB2A7A6B6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E16C0EB2A7A6B6_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
