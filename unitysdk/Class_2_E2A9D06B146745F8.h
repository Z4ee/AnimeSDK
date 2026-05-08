#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E2A9D06B146745F8_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x104631F0)
#define CLASS_2_E2A9D06B146745F8_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x10463420)
#define CLASS_2_E2A9D06B146745F8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x104634F0)
#define CLASS_2_E2A9D06B146745F8__CTOR_OFFSET UNITYSDK_OFFSET(0x104634E0)

inline static constexpr unsigned int Class_2_E2A9D06B146745F8_TypeDefinitionIndex = 52495;

class Class_2_E2A9D06B146745F8 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_10; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x28
	::MoleMole::MonoGamepadModule* Field_2_9; // 0x30
	::UnityEngine::Transform* Field_2_3; // 0x38
	::UnityEngine::UI::Text* Field_2_0; // 0x40
	::UnityEngine::Transform* Field_2_1; // 0x48
	::UnityEngine::UI::GridLayoutGroup* Field_2_8; // 0x50
	::UnityEngine::UI::Text* Field_2_4; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x60
	::MonoUITableScrollV2* Field_2_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A9D06B146745F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2A9D06B146745F8_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A9D06B146745F8_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2A9D06B146745F8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
