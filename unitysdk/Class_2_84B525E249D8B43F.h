#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_84B525E249D8B43F_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x10C00F20)
#define CLASS_2_84B525E249D8B43F_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x10C01160)
#define CLASS_2_84B525E249D8B43F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10C012A0)
#define CLASS_2_84B525E249D8B43F__CTOR_OFFSET UNITYSDK_OFFSET(0x10C01290)

inline static constexpr unsigned int Class_2_84B525E249D8B43F_TypeDefinitionIndex = 65100;

class Class_2_84B525E249D8B43F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x50
	::UnityEngine::RectTransform* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
