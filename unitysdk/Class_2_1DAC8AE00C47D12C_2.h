#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x1EC52D00)
#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x1EC52B00)
#define CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1EC52E10)
#define CLASS_2_1DAC8AE00C47D12C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC52E00)

inline static constexpr unsigned int Class_2_1DAC8AE00C47D12C_2_TypeDefinitionIndex = 94703;

class Class_2_1DAC8AE00C47D12C_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_9; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x40
	::UnityEngine::GameObject* Field_2_10; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DAC8AE00C47D12C_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
