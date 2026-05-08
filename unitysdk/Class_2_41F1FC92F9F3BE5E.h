#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_41F1FC92F9F3BE5E_Class_2_47F94C3827CAB3BB_3;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_41F1FC92F9F3BE5E_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x10159E90)
#define CLASS_2_41F1FC92F9F3BE5E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10159FD0)
#define CLASS_2_41F1FC92F9F3BE5E_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x10159C20)
#define CLASS_2_41F1FC92F9F3BE5E__CTOR_OFFSET UNITYSDK_OFFSET(0x10159FC0)

inline static constexpr unsigned int Class_2_41F1FC92F9F3BE5E_TypeDefinitionIndex = 47744;

class Class_2_41F1FC92F9F3BE5E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_41F1FC92F9F3BE5E_Class_2_47F94C3827CAB3BB_3*>* Field_2_7; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_41F1FC92F9F3BE5E_Class_2_47F94C3827CAB3BB_3*>* Field_2_8; // 0x30
	::MoleMole::NotificationBadge* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_0; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F1FC92F9F3BE5E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_41F1FC92F9F3BE5E_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_41F1FC92F9F3BE5E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41F1FC92F9F3BE5E_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
