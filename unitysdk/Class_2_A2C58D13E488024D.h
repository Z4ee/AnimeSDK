#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_A2C58D13E488024D_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xD223950)
#define CLASS_2_A2C58D13E488024D_METHOD_2_B04B0693FD45DBCD_OFFSET UNITYSDK_OFFSET(0xD223720)
#define CLASS_2_A2C58D13E488024D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD223A90)
#define CLASS_2_A2C58D13E488024D__CTOR_OFFSET UNITYSDK_OFFSET(0xD223A80)

inline static constexpr unsigned int Class_2_A2C58D13E488024D_TypeDefinitionIndex = 38386;

class Class_2_A2C58D13E488024D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x20
	::UnityEngine::CanvasGroup* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_2; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_3; // 0x58
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C58D13E488024D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B04B0693FD45DBCD(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A2C58D13E488024D_METHOD_2_B04B0693FD45DBCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C58D13E488024D_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A2C58D13E488024D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
