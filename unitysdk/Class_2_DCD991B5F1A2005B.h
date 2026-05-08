#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_DCD991B5F1A2005B_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x11203C30)
#define CLASS_2_DCD991B5F1A2005B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11203D30)
#define CLASS_2_DCD991B5F1A2005B_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x11203950)
#define CLASS_2_DCD991B5F1A2005B__CTOR_OFFSET UNITYSDK_OFFSET(0x11203D20)

inline static constexpr unsigned int Class_2_DCD991B5F1A2005B_TypeDefinitionIndex = 69751;

class Class_2_DCD991B5F1A2005B : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::Class_2_134E5210FBBAC6E5* Field_2_9; // 0x30
	::MoleMole::MonoGamepadNavigatableList* Field_2_8; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralSortWidgetController*>* Field_2_5; // 0x48
	::UnityEngine::RectTransform* Field_2_11; // 0x50
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_6; // 0x58
	::UnityEngine::RectTransform* Field_2_10; // 0x60
	::UnityEngine::RectTransform* Field_2_0; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCD991B5F1A2005B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DCD991B5F1A2005B_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCD991B5F1A2005B_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DCD991B5F1A2005B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
