#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_79AE422BA06F6D26_25;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_F034913F0CE169E2_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x12E70040)
#define CLASS_2_F034913F0CE169E2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12E70240)
#define CLASS_2_F034913F0CE169E2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12E70310)
#define CLASS_2_F034913F0CE169E2__CTOR_OFFSET UNITYSDK_OFFSET(0x12E70300)

inline static constexpr unsigned int Class_2_F034913F0CE169E2_TypeDefinitionIndex = 72577;

class Class_2_F034913F0CE169E2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_25*>* Field_2_7; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x28
	::MonoUITableScrollV2* Field_2_5; // 0x30
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_6; // 0x38
	::UnityEngine::Transform* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x48
	::UnityEngine::RectTransform* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F034913F0CE169E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F034913F0CE169E2_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F034913F0CE169E2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F034913F0CE169E2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
