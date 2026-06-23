#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_47A774E9A13DE875_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x127AFBC0)
#define CLASS_2_47A774E9A13DE875_1_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x127AF950)
#define CLASS_2_47A774E9A13DE875_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x127AFC50)
#define CLASS_2_47A774E9A13DE875_1__CTOR_OFFSET UNITYSDK_OFFSET(0x127AFC40)

inline static constexpr unsigned int Class_2_47A774E9A13DE875_1_TypeDefinitionIndex = 56593;

class Class_2_47A774E9A13DE875_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_10; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_11; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50
	::Class_2_134E5210FBBAC6E5* Field_2_9; // 0x58
	::UnityEngine::Transform* Field_2_2; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47A774E9A13DE875_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_47A774E9A13DE875_1_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_47A774E9A13DE875_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47A774E9A13DE875_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
