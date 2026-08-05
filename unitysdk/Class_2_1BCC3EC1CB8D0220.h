#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1BCC3EC1CB8D0220_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x1258D930)
#define CLASS_2_1BCC3EC1CB8D0220_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1258DB30)
#define CLASS_2_1BCC3EC1CB8D0220_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1258DC00)
#define CLASS_2_1BCC3EC1CB8D0220__CTOR_OFFSET UNITYSDK_OFFSET(0x1258DBF0)

inline static constexpr unsigned int Class_2_1BCC3EC1CB8D0220_TypeDefinitionIndex = 75590;

class Class_2_1BCC3EC1CB8D0220 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_5; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::MoleMole::NotificationBadge* Field_2_9; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x48
	::UnityEngine::RectTransform* Field_2_0; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BCC3EC1CB8D0220__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1BCC3EC1CB8D0220_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1BCC3EC1CB8D0220_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BCC3EC1CB8D0220_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
