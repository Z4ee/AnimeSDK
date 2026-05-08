#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_316079372BAE164B_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xF3E1CF0)
#define CLASS_2_316079372BAE164B_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xF3E1F70)
#define CLASS_2_316079372BAE164B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF3E2040)
#define CLASS_2_316079372BAE164B__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E2030)

inline static constexpr unsigned int Class_2_316079372BAE164B_TypeDefinitionIndex = 73470;

class Class_2_316079372BAE164B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_134E5210FBBAC6E5* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_2_9; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UITabButton* Field_2_8; // 0x50
	::MonoUITableScrollV2* Field_2_1; // 0x58
	::UnityEngine::Transform* Field_2_10; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x68
	::UnityEngine::RectTransform* Field_2_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_316079372BAE164B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_316079372BAE164B_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_316079372BAE164B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_316079372BAE164B_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
