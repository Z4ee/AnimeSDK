#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralEquipDetailV2WidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_60638234271CCDB8_11_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x11392370)
#define CLASS_2_60638234271CCDB8_11_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x113924A0)
#define CLASS_2_60638234271CCDB8_11_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x11391FD0)
#define CLASS_2_60638234271CCDB8_11__CTOR_OFFSET UNITYSDK_OFFSET(0x11392490)

inline static constexpr unsigned int Class_2_60638234271CCDB8_11_TypeDefinitionIndex = 40119;

class Class_2_60638234271CCDB8_11 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_17; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_4; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_19; // 0x38
	::UnityEngine::GameObject* Field_2_16; // 0x40
	::UnityEngine::GameObject* Field_2_20; // 0x48
	::UnityEngine::RectTransform* Field_2_9; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x60
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralEquipDetailV2WidgetController*>* Field_2_5; // 0x68
	::UnityEngine::GameObject* Field_2_14; // 0x70
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x78
	::UnityEngine::GameObject* Field_2_7; // 0x80
	::UnityEngine::GameObject* Field_2_15; // 0x88
	::MoleMole::MonoGamepadModule* Field_2_8; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_18; // 0x98
	::Class_2_B4378B46E0020E85* Field_2_0; // 0xA0
	::MonoUITableScrollV2* Field_2_10; // 0xA8
	::Class_2_B4378B46E0020E85* Field_2_12; // 0xB0
	::UnityEngine::GameObject* Field_2_13; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_11__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_11_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_11_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_11_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
