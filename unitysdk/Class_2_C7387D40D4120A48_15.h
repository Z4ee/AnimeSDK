#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_C7387D40D4120A48_15_Class_2_2B4A00883B7DDDB4_2;
class Class_2_C7387D40D4120A48_15_Class_2_913533322067CFEA;
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
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_C7387D40D4120A48_15_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x12DE5A30)
#define CLASS_2_C7387D40D4120A48_15_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x12DE56B0)
#define CLASS_2_C7387D40D4120A48_15_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12DE5B50)
#define CLASS_2_C7387D40D4120A48_15__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE5B40)

inline static constexpr unsigned int Class_2_C7387D40D4120A48_15_TypeDefinitionIndex = 82860;

class Class_2_C7387D40D4120A48_15 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_15; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_10; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralTokenWidgetController*>* Field_2_6; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_C7387D40D4120A48_15_Class_2_913533322067CFEA*>* Field_2_3; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_12; // 0x40
	::UnityEngine::RectTransform* Field_2_13; // 0x48
	::UnityEngine::GameObject* Field_2_14; // 0x50
	::UnityEngine::GameObject* Field_2_11; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x68
	::MonoUITableScrollV2* Field_2_1; // 0x70
	::Class_2_0D31A1661D004892<::Class_2_C7387D40D4120A48_15_Class_2_2B4A00883B7DDDB4_2*>* Field_2_8; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x80
	::UnityEngine::GameObject* Field_2_9; // 0x88
	::MonoUITableScrollV2* Field_2_2; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_15__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_15_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_15_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7387D40D4120A48_15_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
