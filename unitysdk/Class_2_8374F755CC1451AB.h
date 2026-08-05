#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityWaterFinalRewardWidgetController; }
namespace MoleMole { class UIActivityWaterNormalRewardWidgetController; }
namespace MoleMole { class UIActivityWaterProgressBarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_8374F755CC1451AB_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x10F4C3C0)
#define CLASS_2_8374F755CC1451AB_METHOD_2_3887B6B08A207E7A_OFFSET UNITYSDK_OFFSET(0x10F4C5D0)
#define CLASS_2_8374F755CC1451AB_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x10F4C7B0)
#define CLASS_2_8374F755CC1451AB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10F4C860)
#define CLASS_2_8374F755CC1451AB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F4C850)

inline static constexpr unsigned int Class_2_8374F755CC1451AB_TypeDefinitionIndex = 86368;

class Class_2_8374F755CC1451AB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityWaterFinalRewardWidgetController*>* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::MonoUITableScrollV2* Field_2_1; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityWaterProgressBarWidgetController*>* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>* Method_2_3887B6B08A207E7A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_3887B6B08A207E7A_OFFSET))(this, a1, a2);
	}
};
