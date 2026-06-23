#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x1E56F7D0)
#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x1E56F5D0)
#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1E56F8E0)
#define CLASS_2_1DAC8AE00C47D12C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E56F8D0)

inline static constexpr unsigned int Class_2_1DAC8AE00C47D12C_2_TypeDefinitionIndex = 90920;

class Class_2_1DAC8AE00C47D12C_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_6; // 0x38
	::UnityEngine::GameObject* Field_2_7; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
