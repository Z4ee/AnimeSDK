#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_85DAAED9061AE06B_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x11C15FB0)
#define CLASS_2_85DAAED9061AE06B_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11C16040)
#define CLASS_2_85DAAED9061AE06B_1_METHOD_2_D25F539834051480_OFFSET UNITYSDK_OFFSET(0x11C15DD0)
#define CLASS_2_85DAAED9061AE06B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11C16030)

inline static constexpr unsigned int Class_2_85DAAED9061AE06B_1_TypeDefinitionIndex = 73855;

class Class_2_85DAAED9061AE06B_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85DAAED9061AE06B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D25F539834051480(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85DAAED9061AE06B_1_METHOD_2_D25F539834051480_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85DAAED9061AE06B_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85DAAED9061AE06B_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
