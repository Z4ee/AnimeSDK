#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_77D12983AB7F9492_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x11BCF600)
#define CLASS_2_77D12983AB7F9492_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x11BCF7F0)
#define CLASS_2_77D12983AB7F9492_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11BCF900)
#define CLASS_2_77D12983AB7F9492__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCF8F0)

inline static constexpr unsigned int Class_2_77D12983AB7F9492_TypeDefinitionIndex = 67167;

class Class_2_77D12983AB7F9492 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
