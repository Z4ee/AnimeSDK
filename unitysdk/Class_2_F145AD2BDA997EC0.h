#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_F145AD2BDA997EC0_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xEC1B7D0)
#define CLASS_2_F145AD2BDA997EC0_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xEC1B9D0)
#define CLASS_2_F145AD2BDA997EC0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xEC1BAA0)
#define CLASS_2_F145AD2BDA997EC0__CTOR_OFFSET UNITYSDK_OFFSET(0xEC1BA90)

inline static constexpr unsigned int Class_2_F145AD2BDA997EC0_TypeDefinitionIndex = 54435;

class Class_2_F145AD2BDA997EC0 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_8; // 0x30
	::UnityEngine::Transform* Field_2_3; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40
	::UnityEngine::UI::Text* Field_2_0; // 0x48
	::UnityEngine::Transform* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F145AD2BDA997EC0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F145AD2BDA997EC0_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F145AD2BDA997EC0_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F145AD2BDA997EC0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
