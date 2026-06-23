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
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_DCD991B5F1A2005B_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13CECEE0)
#define CLASS_2_DCD991B5F1A2005B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13CECFE0)
#define CLASS_2_DCD991B5F1A2005B_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x13CECC00)
#define CLASS_2_DCD991B5F1A2005B__CTOR_OFFSET UNITYSDK_OFFSET(0x13CECFD0)

inline static constexpr unsigned int Class_2_DCD991B5F1A2005B_TypeDefinitionIndex = 83887;

class Class_2_DCD991B5F1A2005B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_11; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralSortWidgetController*>* Field_2_5; // 0x30
	::Class_2_134E5210FBBAC6E5* Field_2_9; // 0x38
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_6; // 0x40
	::MonoUITableScrollV2* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x50
	::UnityEngine::RectTransform* Field_2_10; // 0x58
	::UnityEngine::RectTransform* Field_2_0; // 0x60
	::MoleMole::MonoGamepadNavigatableList* Field_2_8; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCD991B5F1A2005B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DCD991B5F1A2005B_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DCD991B5F1A2005B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCD991B5F1A2005B_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
