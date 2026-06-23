#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4A9A5FD337E1C8A8_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x108421B0)
#define CLASS_2_4A9A5FD337E1C8A8_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x10841F30)
#define CLASS_2_4A9A5FD337E1C8A8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x108422C0)
#define CLASS_2_4A9A5FD337E1C8A8__CTOR_OFFSET UNITYSDK_OFFSET(0x108422B0)

inline static constexpr unsigned int Class_2_4A9A5FD337E1C8A8_TypeDefinitionIndex = 63639;

class Class_2_4A9A5FD337E1C8A8 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x18
	::UnityEngine::GameObject* Field_2_11; // 0x20
	::UnityEngine::GameObject* Field_2_8; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x38
	::MonoUITableScrollV2* Field_2_0; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x50
	::UnityEngine::Animation* Field_2_2; // 0x58
	::UnityEngine::GameObject* Field_2_9; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A9A5FD337E1C8A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A9A5FD337E1C8A8_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A9A5FD337E1C8A8_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4A9A5FD337E1C8A8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
