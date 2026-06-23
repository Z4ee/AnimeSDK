#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define CLASS_2_55CF77FE649EF7CB_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x11D12850)
#define CLASS_2_55CF77FE649EF7CB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11D12CD0)
#define CLASS_2_55CF77FE649EF7CB_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x11D12B30)
#define CLASS_2_55CF77FE649EF7CB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D12CC0)

inline static constexpr unsigned int Class_2_55CF77FE649EF7CB_TypeDefinitionIndex = 61447;

class Class_2_55CF77FE649EF7CB : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_13; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::MoleMole::MonoGamepadModule* Field_2_12; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x50
	::UnityEngine::UI::Extension::UISlider* Field_2_5; // 0x58
	::UnityEngine::Animation* Field_2_11; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55CF77FE649EF7CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_55CF77FE649EF7CB_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55CF77FE649EF7CB_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_55CF77FE649EF7CB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
