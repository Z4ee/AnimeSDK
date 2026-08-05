#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_0F81C900BF7F52E0_1_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1823ABE0)
#define CLASS_2_0F81C900BF7F52E0_1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1823AD90)
#define CLASS_2_0F81C900BF7F52E0_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1823AE80)
#define CLASS_2_0F81C900BF7F52E0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1823AE70)

inline static constexpr unsigned int Class_2_0F81C900BF7F52E0_1_TypeDefinitionIndex = 42698;

class Class_2_0F81C900BF7F52E0_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x38
	::MonoUITableScrollV2* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F81C900BF7F52E0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0F81C900BF7F52E0_1_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0F81C900BF7F52E0_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F81C900BF7F52E0_1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
