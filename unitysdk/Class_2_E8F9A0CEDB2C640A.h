#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchInterKnotNoteTutorialWidgetController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_E8F9A0CEDB2C640A_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x10599BE0)
#define CLASS_2_E8F9A0CEDB2C640A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10599CB0)
#define CLASS_2_E8F9A0CEDB2C640A_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x10599A40)
#define CLASS_2_E8F9A0CEDB2C640A__CTOR_OFFSET UNITYSDK_OFFSET(0x10599CA0)

inline static constexpr unsigned int Class_2_E8F9A0CEDB2C640A_TypeDefinitionIndex = 40069;

class Class_2_E8F9A0CEDB2C640A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28
	::UnityEngine::Animation* Field_2_1; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIWorkBenchInterKnotNoteTutorialWidgetController*>* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F9A0CEDB2C640A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E8F9A0CEDB2C640A_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F9A0CEDB2C640A_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E8F9A0CEDB2C640A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
