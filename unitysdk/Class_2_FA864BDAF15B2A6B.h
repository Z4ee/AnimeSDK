#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_FA864BDAF15B2A6B_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13CB0750)
#define CLASS_2_FA864BDAF15B2A6B_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x13CB04B0)
#define CLASS_2_FA864BDAF15B2A6B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13CB0850)
#define CLASS_2_FA864BDAF15B2A6B__CTOR_OFFSET UNITYSDK_OFFSET(0x13CB0840)

inline static constexpr unsigned int Class_2_FA864BDAF15B2A6B_TypeDefinitionIndex = 50997;

class Class_2_FA864BDAF15B2A6B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_12; // 0x28
	::MoleMole::MonoGamepadModule* Field_2_10; // 0x30
	::MonoUITableScrollV2* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x40
	::UnityEngine::RectTransform* Field_2_6; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x68
	::MonoUITableScrollV2* Field_2_1; // 0x70
	::UnityEngine::RectTransform* Field_2_11; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA864BDAF15B2A6B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FA864BDAF15B2A6B_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA864BDAF15B2A6B_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FA864BDAF15B2A6B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
