#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_2556D4B31F6E596B_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x137C5950)
#define CLASS_2_2556D4B31F6E596B_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x137C5B70)
#define CLASS_2_2556D4B31F6E596B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x137C5CF0)
#define CLASS_2_2556D4B31F6E596B__CTOR_OFFSET UNITYSDK_OFFSET(0x137C5CE0)

inline static constexpr unsigned int Class_2_2556D4B31F6E596B_TypeDefinitionIndex = 72211;

class Class_2_2556D4B31F6E596B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x20
	::MoleMole::NotificationBadge* Field_2_2; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556D4B31F6E596B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2556D4B31F6E596B_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2556D4B31F6E596B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2556D4B31F6E596B_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}
};
