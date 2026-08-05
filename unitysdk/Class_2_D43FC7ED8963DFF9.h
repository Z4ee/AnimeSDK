#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_D43FC7ED8963DFF9_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x16800920)
#define CLASS_2_D43FC7ED8963DFF9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x168009B0)
#define CLASS_2_D43FC7ED8963DFF9_METHOD_2_CC20D6DA42E37FA5_OFFSET UNITYSDK_OFFSET(0x168007A0)
#define CLASS_2_D43FC7ED8963DFF9__CTOR_OFFSET UNITYSDK_OFFSET(0x168009A0)

inline static constexpr unsigned int Class_2_D43FC7ED8963DFF9_TypeDefinitionIndex = 79015;

class Class_2_D43FC7ED8963DFF9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::MonoUITableScrollV2* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x30
	::MoleMole::NotificationBadge* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43FC7ED8963DFF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CC20D6DA42E37FA5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D43FC7ED8963DFF9_METHOD_2_CC20D6DA42E37FA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43FC7ED8963DFF9_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D43FC7ED8963DFF9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
