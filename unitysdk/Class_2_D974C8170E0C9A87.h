#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_D974C8170E0C9A87_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x11E69980)
#define CLASS_2_D974C8170E0C9A87_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x11E69BC0)
#define CLASS_2_D974C8170E0C9A87_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11E69D00)
#define CLASS_2_D974C8170E0C9A87__CTOR_OFFSET UNITYSDK_OFFSET(0x11E69CF0)

inline static constexpr unsigned int Class_2_D974C8170E0C9A87_TypeDefinitionIndex = 72140;

class Class_2_D974C8170E0C9A87 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_8; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x50
	::UnityEngine::RectTransform* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D974C8170E0C9A87__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D974C8170E0C9A87_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D974C8170E0C9A87_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D974C8170E0C9A87_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
