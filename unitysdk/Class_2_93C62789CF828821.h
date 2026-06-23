#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_93C62789CF828821_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x14CE1F30)
#define CLASS_2_93C62789CF828821_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x14CE2180)
#define CLASS_2_93C62789CF828821_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14CE2250)
#define CLASS_2_93C62789CF828821__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE2240)

inline static constexpr unsigned int Class_2_93C62789CF828821_TypeDefinitionIndex = 84714;

class Class_2_93C62789CF828821 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::CanvasGroup* Field_2_4; // 0x30
	::MoleMole::NotificationBadge* Field_2_3; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x40
	::UnityEngine::RectTransform* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x58
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C62789CF828821__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_93C62789CF828821_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C62789CF828821_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_93C62789CF828821_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
