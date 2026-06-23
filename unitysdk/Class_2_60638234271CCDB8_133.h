#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class ShaderAniHelp;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_60638234271CCDB8_133_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x13777A70)
#define CLASS_2_60638234271CCDB8_133_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13777BD0)
#define CLASS_2_60638234271CCDB8_133_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x13777740)
#define CLASS_2_60638234271CCDB8_133__CTOR_OFFSET UNITYSDK_OFFSET(0x13777BC0)

inline static constexpr unsigned int Class_2_60638234271CCDB8_133_TypeDefinitionIndex = 76583;

class Class_2_60638234271CCDB8_133 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_8; // 0x28
	::UnityEngine::GameObject* Field_2_15; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x60
	::UnityEngine::RectTransform* Field_2_11; // 0x68
	::UnityEngine::GameObject* Field_2_5; // 0x70
	::MoleMole::MonoGamepadModule* Field_2_7; // 0x78
	::ShaderAniHelp* Field_2_13; // 0x80
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x88
	::Class_2_FDFE69FE7B72463B* Field_2_14; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_133__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_133_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_133_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_133_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
