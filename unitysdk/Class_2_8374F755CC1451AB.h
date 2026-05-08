#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityWaterFinalRewardWidgetController; }
namespace MoleMole { class UIActivityWaterNormalRewardWidgetController; }
namespace MoleMole { class UIActivityWaterProgressBarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_8374F755CC1451AB_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x143FEA70)
#define CLASS_2_8374F755CC1451AB_METHOD_2_3C7894053D92B638_OFFSET UNITYSDK_OFFSET(0x143FEC80)
#define CLASS_2_8374F755CC1451AB_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x143FEE60)
#define CLASS_2_8374F755CC1451AB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x143FEF10)
#define CLASS_2_8374F755CC1451AB__CTOR_OFFSET UNITYSDK_OFFSET(0x143FEF00)

inline static constexpr unsigned int Class_2_8374F755CC1451AB_TypeDefinitionIndex = 75371;

class Class_2_8374F755CC1451AB : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>* Field_2_4; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityWaterFinalRewardWidgetController*>* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityWaterProgressBarWidgetController*>* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>* Method_2_3C7894053D92B638(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_3C7894053D92B638_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
