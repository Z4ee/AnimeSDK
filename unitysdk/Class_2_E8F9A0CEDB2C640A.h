#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchInterKnotNoteTutorialWidgetController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_E8F9A0CEDB2C640A_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13FE43F0)
#define CLASS_2_E8F9A0CEDB2C640A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13FE44C0)
#define CLASS_2_E8F9A0CEDB2C640A_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x13FE4250)
#define CLASS_2_E8F9A0CEDB2C640A__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE44B0)

inline static constexpr unsigned int Class_2_E8F9A0CEDB2C640A_TypeDefinitionIndex = 52853;

class Class_2_E8F9A0CEDB2C640A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_6; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIWorkBenchInterKnotNoteTutorialWidgetController*>* Field_2_2; // 0x30
	::UnityEngine::Animation* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F9A0CEDB2C640A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E8F9A0CEDB2C640A_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F9A0CEDB2C640A_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E8F9A0CEDB2C640A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
