#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_C31421CDE660CB44_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x134F7B00)
#define CLASS_2_C31421CDE660CB44_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x134F7900)
#define CLASS_2_C31421CDE660CB44_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x134F7C20)
#define CLASS_2_C31421CDE660CB44__CTOR_OFFSET UNITYSDK_OFFSET(0x134F7C10)

inline static constexpr unsigned int Class_2_C31421CDE660CB44_TypeDefinitionIndex = 42058;

class Class_2_C31421CDE660CB44 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C31421CDE660CB44__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C31421CDE660CB44_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C31421CDE660CB44_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C31421CDE660CB44_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
