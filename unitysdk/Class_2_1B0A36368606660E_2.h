#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1B0A36368606660E_2_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x1BC3BF80)
#define CLASS_2_1B0A36368606660E_2_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1BC3C150)
#define CLASS_2_1B0A36368606660E_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1BC3C250)
#define CLASS_2_1B0A36368606660E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3C240)

inline static constexpr unsigned int Class_2_1B0A36368606660E_2_TypeDefinitionIndex = 56030;

class Class_2_1B0A36368606660E_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_11; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B0A36368606660E_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B0A36368606660E_2_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B0A36368606660E_2_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B0A36368606660E_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
