#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_D6D284A69AB5382B.h"

class Class_0_16E4307DCC419505_132;
class Class_2_CB66BECDB85D4FDA_Class_2_114E1D9C960D1410;
namespace MoleMole { class UIEtherEyesInteractBtnChildWindowController; }
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole { class UIInLevelSkillButtonInteractChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x147546C0)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x147548D0)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x147545F0)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x14754600)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14754840)
#define CLASS_2_CB66BECDB85D4FDA__CTOR_OFFSET UNITYSDK_OFFSET(0x14754830)

inline static constexpr unsigned int Class_2_CB66BECDB85D4FDA_TypeDefinitionIndex = 46918;

class Class_2_CB66BECDB85D4FDA : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_CB66BECDB85D4FDA_Class_2_114E1D9C960D1410* Field_2_3; // 0x28
	::MoleMole::UIGeneralInteractingContainerController* Field_2_1; // 0x30
	::MoleMole::UIEtherEyesInteractBtnChildWindowController* Field_2_2; // 0x38
	::MoleMole::UIInLevelSkillButtonInteractChildWindowController* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA__CTOR_OFFSET))(this);
	}

	::Enum_3_D6D284A69AB5382B Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6D284A69AB5382B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}
};
