#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_43FA4FF0D1457215_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x145D69B0)
#define CLASS_2_43FA4FF0D1457215_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x145D6BD0)
#define CLASS_2_43FA4FF0D1457215_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x145D6C80)
#define CLASS_2_43FA4FF0D1457215__CTOR_OFFSET UNITYSDK_OFFSET(0x145D6C70)

inline static constexpr unsigned int Class_2_43FA4FF0D1457215_TypeDefinitionIndex = 79715;

class Class_2_43FA4FF0D1457215 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_8; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_9; // 0x40
	::MoleMole::NotificationBadge* Field_2_7; // 0x48
	::UnityEngine::RectTransform* Field_2_1; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x58
	::UnityEngine::RectTransform* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43FA4FF0D1457215__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_43FA4FF0D1457215_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43FA4FF0D1457215_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_43FA4FF0D1457215_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
