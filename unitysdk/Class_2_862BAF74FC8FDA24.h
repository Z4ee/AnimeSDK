#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_862BAF74FC8FDA24_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x19F8F800)
#define CLASS_2_862BAF74FC8FDA24_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x19F8F9E0)
#define CLASS_2_862BAF74FC8FDA24_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x19F8FA90)
#define CLASS_2_862BAF74FC8FDA24__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8FA80)

inline static constexpr unsigned int Class_2_862BAF74FC8FDA24_TypeDefinitionIndex = 81713;

class Class_2_862BAF74FC8FDA24 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_9; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_7; // 0x20
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_862BAF74FC8FDA24__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_862BAF74FC8FDA24_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_862BAF74FC8FDA24_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_862BAF74FC8FDA24_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
