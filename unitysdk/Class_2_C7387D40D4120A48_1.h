#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_C7387D40D4120A48_1_Class_2_2B4A00883B7DDDB4;
class Class_2_C7387D40D4120A48_1_Class_2_F337642F742B11D4;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralTokenWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_C7387D40D4120A48_1_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x1399E270)
#define CLASS_2_C7387D40D4120A48_1_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x1399DEF0)
#define CLASS_2_C7387D40D4120A48_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1399E390)
#define CLASS_2_C7387D40D4120A48_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1399E380)

inline static constexpr unsigned int Class_2_C7387D40D4120A48_1_TypeDefinitionIndex = 42558;

class Class_2_C7387D40D4120A48_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_C7387D40D4120A48_1_Class_2_2B4A00883B7DDDB4*>* Field_2_8; // 0x30
	::UnityEngine::GameObject* Field_2_18; // 0x38
	::MoleMole::UIGeneralButtonController* Field_2_14; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralTokenWidgetController*>* Field_2_10; // 0x48
	::UnityEngine::GameObject* Field_2_13; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_C7387D40D4120A48_1_Class_2_F337642F742B11D4*>* Field_2_5; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x60
	::UnityEngine::GameObject* Field_2_15; // 0x68
	::UnityEngine::RectTransform* Field_2_19; // 0x70
	::MoleMole::MonoGamepadModule* Field_2_17; // 0x78
	::Class_2_FDFE69FE7B72463B* Field_2_12; // 0x80
	::MonoUITableScrollV2* Field_2_7; // 0x88
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_1_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_1_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
