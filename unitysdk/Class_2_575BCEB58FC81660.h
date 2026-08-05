#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_575BCEB58FC81660_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x156F8360)
#define CLASS_2_575BCEB58FC81660_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x156F8100)
#define CLASS_2_575BCEB58FC81660_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x156F8450)
#define CLASS_2_575BCEB58FC81660__CTOR_OFFSET UNITYSDK_OFFSET(0x156F8440)

inline static constexpr unsigned int Class_2_575BCEB58FC81660_TypeDefinitionIndex = 73831;

class Class_2_575BCEB58FC81660 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x18
	::UnityEngine::RectTransform* Field_2_9; // 0x20
	::MoleMole::NotificationBadge* Field_2_12; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_15; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_13; // 0x48
	::UnityEngine::RectTransform* Field_2_14; // 0x50
	::UnityEngine::Transform* Field_2_8; // 0x58
	::MoleMole::NotificationBadge* Field_2_11; // 0x60
	::UnityEngine::RectTransform* Field_2_5; // 0x68
	::MonoUITableScrollV2* Field_2_6; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_575BCEB58FC81660__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_575BCEB58FC81660_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_575BCEB58FC81660_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_575BCEB58FC81660_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
