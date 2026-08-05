#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_334F241D84137A22_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x119B2820)
#define CLASS_2_334F241D84137A22_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x119B2A80)
#define CLASS_2_334F241D84137A22_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x119B2C00)
#define CLASS_2_334F241D84137A22__CTOR_OFFSET UNITYSDK_OFFSET(0x119B2BF0)

inline static constexpr unsigned int Class_2_334F241D84137A22_TypeDefinitionIndex = 71134;

class Class_2_334F241D84137A22 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_8; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_334F241D84137A22__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_334F241D84137A22_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_334F241D84137A22_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_334F241D84137A22_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}
};
