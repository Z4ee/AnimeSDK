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

#define CLASS_2_60638234271CCDB8_108_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1634B790)
#define CLASS_2_60638234271CCDB8_108_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1634B230)
#define CLASS_2_60638234271CCDB8_108_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1634B5E0)
#define CLASS_2_60638234271CCDB8_108__CTOR_OFFSET UNITYSDK_OFFSET(0x1634B780)

inline static constexpr unsigned int Class_2_60638234271CCDB8_108_TypeDefinitionIndex = 60384;

class Class_2_60638234271CCDB8_108 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_19; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_10; // 0x20
	::UnityEngine::RectTransform* Field_2_13; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x58
	::UnityEngine::GameObject* Field_2_8; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x68
	::UnityEngine::GameObject* Field_2_6; // 0x70
	::UnityEngine::RectTransform* Field_2_0; // 0x78
	::Class_2_FDFE69FE7B72463B* Field_2_18; // 0x80
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x88
	::MoleMole::MonoGamepadModule* Field_2_9; // 0x90
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x98
	::UnityEngine::RectTransform* Field_2_1; // 0xA0
	::Class_2_1A39E1B51756BF41* Field_2_16; // 0xA8
	::ShaderAniHelp* Field_2_17; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_108__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_108_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_108_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_108_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};
