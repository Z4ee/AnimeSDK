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
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_8374F755CC1451AB_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x134CEA30)
#define CLASS_2_8374F755CC1451AB_METHOD_2_3C7894053D92B638_OFFSET UNITYSDK_OFFSET(0x134CEC40)
#define CLASS_2_8374F755CC1451AB_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x134CEE20)
#define CLASS_2_8374F755CC1451AB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x134CEED0)
#define CLASS_2_8374F755CC1451AB__CTOR_OFFSET UNITYSDK_OFFSET(0x134CEEC0)

inline static constexpr unsigned int Class_2_8374F755CC1451AB_TypeDefinitionIndex = 82990;

class Class_2_8374F755CC1451AB : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityWaterProgressBarWidgetController*>* Field_2_6; // 0x30
	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>* Field_2_4; // 0x38
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityWaterFinalRewardWidgetController*>* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>* Method_2_3C7894053D92B638(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityWaterNormalRewardWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8374F755CC1451AB_METHOD_2_3C7894053D92B638_OFFSET))(this, a1, a2);
	}
};
