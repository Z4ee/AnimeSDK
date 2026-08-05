#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_AA91BA5163021926_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x15D009E0)
#define CLASS_2_AA91BA5163021926_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x15D00BD0)
#define CLASS_2_AA91BA5163021926_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15D00CC0)
#define CLASS_2_AA91BA5163021926__CTOR_OFFSET UNITYSDK_OFFSET(0x15D00CB0)

inline static constexpr unsigned int Class_2_AA91BA5163021926_TypeDefinitionIndex = 81232;

class Class_2_AA91BA5163021926 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x20
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::MoleMole::NotificationBadge* Field_2_11; // 0x40
	::UnityEngine::GameObject* Field_2_5; // 0x48
	::UnityEngine::GameObject* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA91BA5163021926__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AA91BA5163021926_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AA91BA5163021926_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA91BA5163021926_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
