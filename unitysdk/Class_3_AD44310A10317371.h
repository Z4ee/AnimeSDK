#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_3_AD44310A10317371_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x134DB4E0)
#define CLASS_3_AD44310A10317371_METHOD_3_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x134DB1E0)
#define CLASS_3_AD44310A10317371_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x134DB440)
#define CLASS_3_AD44310A10317371__CTOR_OFFSET UNITYSDK_OFFSET(0x134DBA10)

inline static constexpr unsigned int Class_3_AD44310A10317371_TypeDefinitionIndex = 51237;

class Class_3_AD44310A10317371 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* Field_3_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_10; // 0x30
	::UnityEngine::RectTransform* Field_3_7; // 0x38
	::UnityEngine::RectTransform* Field_3_3; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_8; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_5; // 0x50
	::MoleMole::NotificationBadgeEx* Field_3_2; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_9; // 0x60
	::Class_2_1A39E1B51756BF41* Field_3_11; // 0x68
	::Class_2_1A39E1B51756BF41* Field_3_1; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_4; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD44310A10317371__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_AD44310A10317371_METHOD_3_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD44310A10317371_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD44310A10317371_METHOD_3_5176DC743E478510_OFFSET))(this);
	}
};
