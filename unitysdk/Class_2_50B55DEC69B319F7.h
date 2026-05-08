#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_50B55DEC69B319F7_Class_2_8EA0A9912C2F9EFB;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIActivityCheckinFinalRewardWidgetController; }
namespace MoleMole { class UIActivityCheckinProgressBarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_50B55DEC69B319F7_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x15480F30)
#define CLASS_2_50B55DEC69B319F7_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x15480D40)
#define CLASS_2_50B55DEC69B319F7_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x15480A80)
#define CLASS_2_50B55DEC69B319F7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15481070)
#define CLASS_2_50B55DEC69B319F7__CTOR_OFFSET UNITYSDK_OFFSET(0x15481060)

inline static constexpr unsigned int Class_2_50B55DEC69B319F7_TypeDefinitionIndex = 57790;

class Class_2_50B55DEC69B319F7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityCheckinProgressBarWidgetController*>* Field_2_6; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityCheckinFinalRewardWidgetController*>* Field_2_8; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_2; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x48
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_50B55DEC69B319F7_Class_2_8EA0A9912C2F9EFB*>*>* Field_2_0; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50B55DEC69B319F7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50B55DEC69B319F7_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50B55DEC69B319F7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_50B55DEC69B319F7_Class_2_8EA0A9912C2F9EFB*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_50B55DEC69B319F7_Class_2_8EA0A9912C2F9EFB*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50B55DEC69B319F7_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50B55DEC69B319F7_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
