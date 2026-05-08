#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_26C85AD7ACF3604D_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x139C7640)
#define CLASS_2_26C85AD7ACF3604D_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x139C7880)
#define CLASS_2_26C85AD7ACF3604D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x139C7930)
#define CLASS_2_26C85AD7ACF3604D__CTOR_OFFSET UNITYSDK_OFFSET(0x139C7920)

inline static constexpr unsigned int Class_2_26C85AD7ACF3604D_TypeDefinitionIndex = 69456;

class Class_2_26C85AD7ACF3604D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_8; // 0x30
	::UnityEngine::RectTransform* Field_2_9; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::MonoUITableScrollV2* Field_2_1; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x58
	::UnityEngine::RectTransform* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26C85AD7ACF3604D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_26C85AD7ACF3604D_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26C85AD7ACF3604D_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_26C85AD7ACF3604D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
