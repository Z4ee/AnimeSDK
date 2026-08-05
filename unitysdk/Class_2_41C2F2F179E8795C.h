#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_41C2F2F179E8795C_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x16B280B0)
#define CLASS_2_41C2F2F179E8795C_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x16B27E20)
#define CLASS_2_41C2F2F179E8795C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16B281B0)
#define CLASS_2_41C2F2F179E8795C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B281A0)

inline static constexpr unsigned int Class_2_41C2F2F179E8795C_TypeDefinitionIndex = 87655;

class Class_2_41C2F2F179E8795C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x38
	::UnityEngine::RectTransform* Field_2_9; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x48
	::MoleMole::NotificationBadge* Field_2_11; // 0x50
	::MoleMole::NotificationBadgeEx* Field_2_19; // 0x58
	::UnityEngine::RectTransform* Field_2_8; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x68
	::UnityEngine::UI::Extension::UITabButton* Field_2_10; // 0x70
	::UnityEngine::RectTransform* Field_2_0; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41C2F2F179E8795C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_41C2F2F179E8795C_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41C2F2F179E8795C_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_41C2F2F179E8795C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
