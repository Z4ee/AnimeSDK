#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4994931DD1E6D64C_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x14A5D950)
#define CLASS_2_4994931DD1E6D64C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14A5DA70)
#define CLASS_2_4994931DD1E6D64C_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x14A5D6A0)
#define CLASS_2_4994931DD1E6D64C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5DA60)

inline static constexpr unsigned int Class_2_4994931DD1E6D64C_TypeDefinitionIndex = 69131;

class Class_2_4994931DD1E6D64C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x28
	::MoleMole::NotificationBadge* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_10; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x40
	::Class_2_FDFE69FE7B72463B* Field_2_9; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x58
	::UnityEngine::GameObject* Field_2_7; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4994931DD1E6D64C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4994931DD1E6D64C_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4994931DD1E6D64C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4994931DD1E6D64C_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
