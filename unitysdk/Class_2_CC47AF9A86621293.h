#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_CC47AF9A86621293_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13E11350)
#define CLASS_2_CC47AF9A86621293_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x13E11110)
#define CLASS_2_CC47AF9A86621293_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13E11450)
#define CLASS_2_CC47AF9A86621293__CTOR_OFFSET UNITYSDK_OFFSET(0x13E11440)

inline static constexpr unsigned int Class_2_CC47AF9A86621293_TypeDefinitionIndex = 53697;

class Class_2_CC47AF9A86621293 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_11; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_15; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x58
	::UnityEngine::RectTransform* Field_2_8; // 0x60
	::MonoUITableScrollV2* Field_2_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC47AF9A86621293__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CC47AF9A86621293_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC47AF9A86621293_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CC47AF9A86621293_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
