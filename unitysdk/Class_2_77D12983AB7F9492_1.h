#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_77D12983AB7F9492_1_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1197DD30)
#define CLASS_2_77D12983AB7F9492_1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1197DF20)
#define CLASS_2_77D12983AB7F9492_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1197E010)
#define CLASS_2_77D12983AB7F9492_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1197E000)

inline static constexpr unsigned int Class_2_77D12983AB7F9492_1_TypeDefinitionIndex = 90601;

class Class_2_77D12983AB7F9492_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::UnityEngine::Transform* Field_2_11; // 0x38
	::UnityEngine::Transform* Field_2_6; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_1_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
