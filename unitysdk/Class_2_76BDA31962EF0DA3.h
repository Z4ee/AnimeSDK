#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define CLASS_2_76BDA31962EF0DA3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D4D9E0)
#define CLASS_2_76BDA31962EF0DA3_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13D4D8E0)
#define CLASS_2_76BDA31962EF0DA3__CTOR_OFFSET UNITYSDK_OFFSET(0x13D4D9D0)

inline static constexpr unsigned int Class_2_76BDA31962EF0DA3_TypeDefinitionIndex = 41022;

class Class_2_76BDA31962EF0DA3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::UI::Text* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UISlider* Field_2_7; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76BDA31962EF0DA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_76BDA31962EF0DA3_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_76BDA31962EF0DA3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
