#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_19FDCE507583BE8F_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xFE70950)
#define CLASS_2_19FDCE507583BE8F_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0xFE70740)
#define CLASS_2_19FDCE507583BE8F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFE709E0)
#define CLASS_2_19FDCE507583BE8F__CTOR_OFFSET UNITYSDK_OFFSET(0xFE709D0)

inline static constexpr unsigned int Class_2_19FDCE507583BE8F_TypeDefinitionIndex = 48096;

class Class_2_19FDCE507583BE8F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x20
	::UnityEngine::CanvasGroup* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x48
	::UnityEngine::RectTransform* Field_2_3; // 0x50
	::UnityEngine::RectTransform* Field_2_9; // 0x58
	::UnityEngine::RectTransform* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19FDCE507583BE8F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_19FDCE507583BE8F_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19FDCE507583BE8F_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_19FDCE507583BE8F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
