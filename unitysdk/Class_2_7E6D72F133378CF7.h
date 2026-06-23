#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_1;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_7E6D72F133378CF7_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1609AFB0)
#define CLASS_2_7E6D72F133378CF7_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x1609B440)
#define CLASS_2_7E6D72F133378CF7_METHOD_2_AB67BFD8CD826D9C_OFFSET UNITYSDK_OFFSET(0x1609B240)
#define CLASS_2_7E6D72F133378CF7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1609B580)
#define CLASS_2_7E6D72F133378CF7__CTOR_OFFSET UNITYSDK_OFFSET(0x1609B570)

inline static constexpr unsigned int Class_2_7E6D72F133378CF7_TypeDefinitionIndex = 79994;

class Class_2_7E6D72F133378CF7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x28
	::UnityEngine::Animation* Field_2_10; // 0x30
	::MoleMole::NotificationBadge* Field_2_9; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::System::Collections::Generic::List_1<::Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_1*>* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x58
	::MoleMole::UIGeneralButtonController* Field_2_11; // 0x60
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_1*>* Method_2_AB67BFD8CD826D9C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_1*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_METHOD_2_AB67BFD8CD826D9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
