#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E18273998F3C44B7_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x1489BB40)
#define CLASS_2_E18273998F3C44B7_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1489BD50)
#define CLASS_2_E18273998F3C44B7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1489BE20)
#define CLASS_2_E18273998F3C44B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1489BE10)

inline static constexpr unsigned int Class_2_E18273998F3C44B7_TypeDefinitionIndex = 85478;

class Class_2_E18273998F3C44B7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x18
	::Class_2_134E5210FBBAC6E5* Field_2_7; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E18273998F3C44B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E18273998F3C44B7_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E18273998F3C44B7_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E18273998F3C44B7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
