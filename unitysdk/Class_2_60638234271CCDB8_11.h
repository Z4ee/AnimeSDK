#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIAbyssS2InfoBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_60638234271CCDB8_11_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13764520)
#define CLASS_2_60638234271CCDB8_11_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13764630)
#define CLASS_2_60638234271CCDB8_11_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x137641A0)
#define CLASS_2_60638234271CCDB8_11__CTOR_OFFSET UNITYSDK_OFFSET(0x13764620)

inline static constexpr unsigned int Class_2_60638234271CCDB8_11_TypeDefinitionIndex = 59075;

class Class_2_60638234271CCDB8_11 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIAbyssS2InfoBtnWidgetController*>* Field_2_9; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_16; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_10; // 0x38
	::UnityEngine::RectTransform* Field_2_8; // 0x40
	::UnityEngine::RectTransform* Field_2_18; // 0x48
	::UnityEngine::Transform* Field_2_6; // 0x50
	::UnityEngine::GameObject* Field_2_5; // 0x58
	::UnityEngine::RectTransform* Field_2_4; // 0x60
	::UnityEngine::RectTransform* Field_2_12; // 0x68
	::Class_2_FDFE69FE7B72463B* Field_2_19; // 0x70
	::UnityEngine::GameObject* Field_2_17; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x80
	::UnityEngine::RectTransform* Field_2_13; // 0x88
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_23; // 0x90
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_15; // 0x98
	::Class_2_B4378B46E0020E85* Field_2_0; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_11__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_11_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_11_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_11_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
