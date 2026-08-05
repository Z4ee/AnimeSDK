#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovWorkbenchRowWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_5E2149D5B3462FFC_METHOD_2_8D764EEFCE1E3A5F_OFFSET UNITYSDK_OFFSET(0x1154E1B0)
#define CLASS_2_5E2149D5B3462FFC_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1154E3D0)
#define CLASS_2_5E2149D5B3462FFC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1154E480)
#define CLASS_2_5E2149D5B3462FFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1154E470)

inline static constexpr unsigned int Class_2_5E2149D5B3462FFC_TypeDefinitionIndex = 74753;

class Class_2_5E2149D5B3462FFC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::UnityEngine::UI::Button* Field_2_8; // 0x28
	::UnityEngine::RectTransform* Field_2_7; // 0x30
	::MoleMole::NotificationBadgeEx* Field_2_15; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x50
	::Class_3_826A30478DA34A69<::MoleMole::UIZenkovWorkbenchRowWidgetController*>* Field_2_5; // 0x58
	::Class_3_826A30478DA34A69<::MoleMole::UIZenkovWorkbenchRowWidgetController*>* Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E2149D5B3462FFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8D764EEFCE1E3A5F(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E2149D5B3462FFC_METHOD_2_8D764EEFCE1E3A5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E2149D5B3462FFC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E2149D5B3462FFC_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
