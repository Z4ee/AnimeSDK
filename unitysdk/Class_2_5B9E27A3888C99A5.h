#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_5B9E27A3888C99A5_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x13964BB0)
#define CLASS_2_5B9E27A3888C99A5_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13964D80)
#define CLASS_2_5B9E27A3888C99A5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13964E50)
#define CLASS_2_5B9E27A3888C99A5__CTOR_OFFSET UNITYSDK_OFFSET(0x13964E40)

inline static constexpr unsigned int Class_2_5B9E27A3888C99A5_TypeDefinitionIndex = 74320;

class Class_2_5B9E27A3888C99A5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_11; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9E27A3888C99A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9E27A3888C99A5_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9E27A3888C99A5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9E27A3888C99A5_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
