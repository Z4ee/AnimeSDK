#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_6FA0188978D80149_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x164614F0)
#define CLASS_2_6FA0188978D80149_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x164612E0)
#define CLASS_2_6FA0188978D80149_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16461610)
#define CLASS_2_6FA0188978D80149__CTOR_OFFSET UNITYSDK_OFFSET(0x16461600)

inline static constexpr unsigned int Class_2_6FA0188978D80149_TypeDefinitionIndex = 49806;

class Class_2_6FA0188978D80149 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_7; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA0188978D80149__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6FA0188978D80149_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6FA0188978D80149_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA0188978D80149_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
