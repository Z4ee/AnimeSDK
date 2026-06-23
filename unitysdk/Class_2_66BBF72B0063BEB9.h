#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_66BBF72B0063BEB9_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0x15191D60)
#define CLASS_2_66BBF72B0063BEB9_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x15191F90)
#define CLASS_2_66BBF72B0063BEB9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15192060)
#define CLASS_2_66BBF72B0063BEB9__CTOR_OFFSET UNITYSDK_OFFSET(0x15192050)

inline static constexpr unsigned int Class_2_66BBF72B0063BEB9_TypeDefinitionIndex = 45235;

class Class_2_66BBF72B0063BEB9 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x58
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66BBF72B0063BEB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_66BBF72B0063BEB9_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_66BBF72B0063BEB9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66BBF72B0063BEB9_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
