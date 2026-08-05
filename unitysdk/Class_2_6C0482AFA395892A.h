#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_6C0482AFA395892A_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x16490F30)
#define CLASS_2_6C0482AFA395892A_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x16491110)
#define CLASS_2_6C0482AFA395892A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x164911C0)
#define CLASS_2_6C0482AFA395892A__CTOR_OFFSET UNITYSDK_OFFSET(0x164911B0)

inline static constexpr unsigned int Class_2_6C0482AFA395892A_TypeDefinitionIndex = 63118;

class Class_2_6C0482AFA395892A : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_1; // 0x48
	::UnityEngine::RectTransform* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C0482AFA395892A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C0482AFA395892A_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C0482AFA395892A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C0482AFA395892A_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
