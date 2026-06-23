#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1DAC8AE00C47D12C_1_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x113925A0)
#define CLASS_2_1DAC8AE00C47D12C_1_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x113927C0)
#define CLASS_2_1DAC8AE00C47D12C_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11392920)
#define CLASS_2_1DAC8AE00C47D12C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11392910)

inline static constexpr unsigned int Class_2_1DAC8AE00C47D12C_1_TypeDefinitionIndex = 70789;

class Class_2_1DAC8AE00C47D12C_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_1_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_1_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
