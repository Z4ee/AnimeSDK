#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_B1E7170D9A960AAF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11B472E0)
#define CLASS_2_B1E7170D9A960AAF_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x11B47170)
#define CLASS_2_B1E7170D9A960AAF_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x11B46EF0)
#define CLASS_2_B1E7170D9A960AAF__CTOR_OFFSET UNITYSDK_OFFSET(0x11B472D0)

inline static constexpr unsigned int Class_2_B1E7170D9A960AAF_TypeDefinitionIndex = 64159;

class Class_2_B1E7170D9A960AAF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::UnityEngine::CanvasGroup* Field_2_9; // 0x38
	::UnityEngine::RectTransform* Field_2_10; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_8; // 0x48
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_0; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1E7170D9A960AAF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B1E7170D9A960AAF_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1E7170D9A960AAF_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B1E7170D9A960AAF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
