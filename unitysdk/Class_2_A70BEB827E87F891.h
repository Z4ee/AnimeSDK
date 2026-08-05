#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_A70BEB827E87F891_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x1787F790)
#define CLASS_2_A70BEB827E87F891_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1787F4F0)
#define CLASS_2_A70BEB827E87F891_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1787F8B0)
#define CLASS_2_A70BEB827E87F891__CTOR_OFFSET UNITYSDK_OFFSET(0x1787F8A0)

inline static constexpr unsigned int Class_2_A70BEB827E87F891_TypeDefinitionIndex = 73613;

class Class_2_A70BEB827E87F891 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_11; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_9; // 0x30
	::MoleMole::NotificationBadgeEx* Field_2_0; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_14; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_13; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70BEB827E87F891__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A70BEB827E87F891_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A70BEB827E87F891_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70BEB827E87F891_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
