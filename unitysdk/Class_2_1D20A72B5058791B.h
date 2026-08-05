#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1D20A72B5058791B_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x12897B00)
#define CLASS_2_1D20A72B5058791B_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12897CF0)
#define CLASS_2_1D20A72B5058791B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12897DA0)
#define CLASS_2_1D20A72B5058791B__CTOR_OFFSET UNITYSDK_OFFSET(0x12897D90)

inline static constexpr unsigned int Class_2_1D20A72B5058791B_TypeDefinitionIndex = 76079;

class Class_2_1D20A72B5058791B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_11; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D20A72B5058791B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1D20A72B5058791B_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D20A72B5058791B_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1D20A72B5058791B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
