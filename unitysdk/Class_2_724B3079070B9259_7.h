#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_724B3079070B9259_7_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x153D2610)
#define CLASS_2_724B3079070B9259_7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x153D2A10)
#define CLASS_2_724B3079070B9259_7_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x153D28A0)
#define CLASS_2_724B3079070B9259_7__CTOR_OFFSET UNITYSDK_OFFSET(0x153D2A00)

inline static constexpr unsigned int Class_2_724B3079070B9259_7_TypeDefinitionIndex = 85315;

class Class_2_724B3079070B9259_7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30
	::UnityEngine::GameObject* Field_2_2; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_724B3079070B9259_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_724B3079070B9259_7_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_724B3079070B9259_7_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_724B3079070B9259_7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
