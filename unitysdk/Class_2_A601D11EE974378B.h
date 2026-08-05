#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_A601D11EE974378B_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x12A7BE90)
#define CLASS_2_A601D11EE974378B_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x12A7BF70)
#define CLASS_2_A601D11EE974378B_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x12A7BC40)
#define CLASS_2_A601D11EE974378B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A7C090)
#define CLASS_2_A601D11EE974378B_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x12A7BFF0)
#define CLASS_2_A601D11EE974378B__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7BFE0)

inline static constexpr unsigned int Class_2_A601D11EE974378B_TypeDefinitionIndex = 78512;

class Class_2_A601D11EE974378B : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_11; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20
	::MoleMole::NotificationBadge* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_10; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::UnityEngine::RectTransform* Field_2_15; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x60
	::UnityEngine::RectTransform* Field_2_8; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A601D11EE974378B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A601D11EE974378B_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_A601D11EE974378B_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_A601D11EE974378B_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A601D11EE974378B_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A601D11EE974378B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
