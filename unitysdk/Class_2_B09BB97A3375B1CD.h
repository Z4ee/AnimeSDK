#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIActivityCameraBountyWidgetController; }
namespace MoleMole { class UIActivityCameraExplorationWidgetController; }
namespace MoleMole { class UIActivityFruitToysSettlementWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_B09BB97A3375B1CD_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x15BBFC80)
#define CLASS_2_B09BB97A3375B1CD_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x15BC0020)
#define CLASS_2_B09BB97A3375B1CD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15BC0210)
#define CLASS_2_B09BB97A3375B1CD__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC0200)

inline static constexpr unsigned int Class_2_B09BB97A3375B1CD_TypeDefinitionIndex = 87218;

class Class_2_B09BB97A3375B1CD : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCameraExplorationWidgetController*>* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityFruitToysSettlementWidgetController*>* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x38
	::Class_2_CA67A9CEB871FFD3* Field_2_11; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCameraBountyWidgetController*>* Field_2_5; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_15; // 0x70
	::Class_2_FDFE69FE7B72463B* Field_2_13; // 0x78
	::UnityEngine::RectTransform* Field_2_14; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09BB97A3375B1CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B09BB97A3375B1CD_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09BB97A3375B1CD_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B09BB97A3375B1CD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
