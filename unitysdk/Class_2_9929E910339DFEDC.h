#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_9929E910339DFEDC_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x13AFBD20)
#define CLASS_2_9929E910339DFEDC_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x13AFBFB0)
#define CLASS_2_9929E910339DFEDC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13AFC0F0)
#define CLASS_2_9929E910339DFEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFC0E0)

inline static constexpr unsigned int Class_2_9929E910339DFEDC_TypeDefinitionIndex = 65014;

class Class_2_9929E910339DFEDC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x28
	::MoleMole::NotificationBadge* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_12; // 0x50
	::UnityEngine::RectTransform* Field_2_4; // 0x58
	::MonoUITableScrollV2* Field_2_3; // 0x60
	::MoleMole::NotificationBadge* Field_2_13; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x70
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_7; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9929E910339DFEDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9929E910339DFEDC_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9929E910339DFEDC_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9929E910339DFEDC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
