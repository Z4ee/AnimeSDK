#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIGeneralTopCafeBuffDetailWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_60638234271CCDB8_30_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12F08E10)
#define CLASS_2_60638234271CCDB8_30_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x12F088E0)
#define CLASS_2_60638234271CCDB8_30_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x12F08C40)
#define CLASS_2_60638234271CCDB8_30__CTOR_OFFSET UNITYSDK_OFFSET(0x12F08E00)

inline static constexpr unsigned int Class_2_60638234271CCDB8_30_TypeDefinitionIndex = 44325;

class Class_2_60638234271CCDB8_30 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_8; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralTopCafeBuffDetailWidgetController*>* Field_2_14; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x40
	::MoleMole::MonoGamepadNavigatableList* Field_2_13; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x58
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralRewardListBtnWidgetController*>* Field_2_7; // 0x60
	::MonoUITableScrollV2* Field_2_0; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_15; // 0x70
	::UnityEngine::RectTransform* Field_2_10; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x80
	::Class_2_CA67A9CEB871FFD3* Field_2_2; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_30__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_30_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_30_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_30_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};
