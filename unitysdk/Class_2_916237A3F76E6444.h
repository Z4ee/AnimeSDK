#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_916237A3F76E6444_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x14FEB720)
#define CLASS_2_916237A3F76E6444_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x14FEB8F0)
#define CLASS_2_916237A3F76E6444_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14FEB9C0)
#define CLASS_2_916237A3F76E6444__CTOR_OFFSET UNITYSDK_OFFSET(0x14FEB9B0)

inline static constexpr unsigned int Class_2_916237A3F76E6444_TypeDefinitionIndex = 56037;

class Class_2_916237A3F76E6444 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_8; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x48
	::MonoUITableScrollV2* Field_2_0; // 0x50
	::MoleMole::NotificationBadgeEx* Field_2_10; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916237A3F76E6444__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_916237A3F76E6444_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_916237A3F76E6444_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_916237A3F76E6444_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
