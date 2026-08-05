#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2C66C4B4F4D48C29_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1D5B7790)
#define CLASS_2_2C66C4B4F4D48C29_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1D5B75D0)
#define CLASS_2_2C66C4B4F4D48C29__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B7780)

inline static constexpr unsigned int Class_2_2C66C4B4F4D48C29_TypeDefinitionIndex = 72634;

class Class_2_2C66C4B4F4D48C29 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x28
	::UnityEngine::Transform* Field_2_10; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x38
	::UnityEngine::Transform* Field_2_11; // 0x40
	::UnityEngine::Transform* Field_2_6; // 0x48
	::UnityEngine::Transform* Field_2_1; // 0x50
	::UnityEngine::UI::Text* Field_2_7; // 0x58
	::UnityEngine::UI::Text* Field_2_2; // 0x60
	::UnityEngine::Transform* Field_2_5; // 0x68
	::UnityEngine::UI::Text* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C66C4B4F4D48C29__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2C66C4B4F4D48C29_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2C66C4B4F4D48C29_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
