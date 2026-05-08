#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_85DAAED9061AE06B_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x132AC390)
#define CLASS_2_85DAAED9061AE06B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x132AC420)
#define CLASS_2_85DAAED9061AE06B_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x132AC210)
#define CLASS_2_85DAAED9061AE06B__CTOR_OFFSET UNITYSDK_OFFSET(0x132AC410)

inline static constexpr unsigned int Class_2_85DAAED9061AE06B_TypeDefinitionIndex = 42727;

class Class_2_85DAAED9061AE06B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85DAAED9061AE06B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85DAAED9061AE06B_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85DAAED9061AE06B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85DAAED9061AE06B_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
