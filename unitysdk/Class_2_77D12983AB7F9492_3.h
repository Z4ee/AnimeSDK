#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_77D12983AB7F9492_3_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1921A860)
#define CLASS_2_77D12983AB7F9492_3_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1921AA10)
#define CLASS_2_77D12983AB7F9492_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1921AAE0)
#define CLASS_2_77D12983AB7F9492_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1921AAD0)

inline static constexpr unsigned int Class_2_77D12983AB7F9492_3_TypeDefinitionIndex = 59590;

class Class_2_77D12983AB7F9492_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_3_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D12983AB7F9492_3_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
