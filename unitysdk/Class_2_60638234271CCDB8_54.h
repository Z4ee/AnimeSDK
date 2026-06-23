#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_60638234271CCDB8_54_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x13451840)
#define CLASS_2_60638234271CCDB8_54_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13451960)
#define CLASS_2_60638234271CCDB8_54_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x13451500)
#define CLASS_2_60638234271CCDB8_54__CTOR_OFFSET UNITYSDK_OFFSET(0x13451950)

inline static constexpr unsigned int Class_2_60638234271CCDB8_54_TypeDefinitionIndex = 78952;

class Class_2_60638234271CCDB8_54 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_15; // 0x38
	::UnityEngine::Transform* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_13; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_14; // 0x58
	::Class_2_CA67A9CEB871FFD3* Field_2_6; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x70
	::MoleMole::NotificationBadge* Field_2_10; // 0x78
	::Class_2_FDFE69FE7B72463B* Field_2_11; // 0x80
	::MonoUITableScrollV2* Field_2_1; // 0x88
	::MoleMole::UIGeneralButtonController* Field_2_9; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_54__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_54_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_54_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_54_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
