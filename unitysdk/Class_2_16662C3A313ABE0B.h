#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_16662C3A313ABE0B_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x18B3B310)
#define CLASS_2_16662C3A313ABE0B_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x18B3B050)
#define CLASS_2_16662C3A313ABE0B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18B3B430)
#define CLASS_2_16662C3A313ABE0B__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3B420)

inline static constexpr unsigned int Class_2_16662C3A313ABE0B_TypeDefinitionIndex = 64156;

class Class_2_16662C3A313ABE0B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralSortWidgetController*>* Field_2_7; // 0x30
	::MoleMole::MonoGamepadNavigatableList* Field_2_10; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x50
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_8; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x60
	::UnityEngine::RectTransform* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16662C3A313ABE0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16662C3A313ABE0B_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16662C3A313ABE0B_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16662C3A313ABE0B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
