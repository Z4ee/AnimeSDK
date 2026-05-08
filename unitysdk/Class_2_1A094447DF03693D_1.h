#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_1A094447DF03693D_1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x12864D80)
#define CLASS_2_1A094447DF03693D_1_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x12864B60)
#define CLASS_2_1A094447DF03693D_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12864E80)
#define CLASS_2_1A094447DF03693D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12864E70)

inline static constexpr unsigned int Class_2_1A094447DF03693D_1_TypeDefinitionIndex = 56757;

class Class_2_1A094447DF03693D_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x40
	::UnityEngine::RectTransform* Field_2_1; // 0x48
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A094447DF03693D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A094447DF03693D_1_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A094447DF03693D_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A094447DF03693D_1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
