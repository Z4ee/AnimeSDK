#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMechBooPrepFreedomWidgetController; }
namespace MoleMole { class UIMechBooPrepWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_14DA2AB09617B4AF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12495930)
#define CLASS_2_14DA2AB09617B4AF_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x124957A0)
#define CLASS_2_14DA2AB09617B4AF_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x12495450)
#define CLASS_2_14DA2AB09617B4AF__CTOR_OFFSET UNITYSDK_OFFSET(0x12495920)

inline static constexpr unsigned int Class_2_14DA2AB09617B4AF_TypeDefinitionIndex = 42212;

class Class_2_14DA2AB09617B4AF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_13; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIMechBooPrepWidgetController*>* Field_2_11; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIMechBooPrepWidgetController*>* Field_2_4; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIMechBooPrepWidgetController*>* Field_2_9; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_2_FDFE69FE7B72463B* Field_2_12; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x50
	::Class_3_826A30478DA34A69<::MoleMole::UIMechBooPrepFreedomWidgetController*>* Field_2_8; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x60
	::UnityEngine::UI::Extension::UITabButton* Field_2_14; // 0x68
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_15; // 0x70
	::Class_3_826A30478DA34A69<::MoleMole::UIMechBooPrepWidgetController*>* Field_2_10; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14DA2AB09617B4AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14DA2AB09617B4AF_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14DA2AB09617B4AF_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14DA2AB09617B4AF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
