#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_BD3C09A68C53DE66.h"

class Class_0_16E4307DCC419505_199;
class Class_2_CB66BECDB85D4FDA_Class_2_114E1D9C960D1410_1;
namespace MoleMole { class UIEtherEyesInteractBtnChildWindowController; }
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole { class UIInLevelSkillButtonInteractChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x128A00B0)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x128A0320)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1289FFE0)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x1289FFF0)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x128A0290)
#define CLASS_2_CB66BECDB85D4FDA__CTOR_OFFSET UNITYSDK_OFFSET(0x128A0280)

inline static constexpr unsigned int Class_2_CB66BECDB85D4FDA_TypeDefinitionIndex = 77535;

class Class_2_CB66BECDB85D4FDA : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIEtherEyesInteractBtnChildWindowController* Field_2_2; // 0x28
	::MoleMole::UIInLevelSkillButtonInteractChildWindowController* Field_2_0; // 0x30
	::Class_2_CB66BECDB85D4FDA_Class_2_114E1D9C960D1410_1* Field_2_3; // 0x38
	::MoleMole::UIGeneralInteractingContainerController* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA__CTOR_OFFSET))(this);
	}

	::Enum_3_BD3C09A68C53DE66 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BD3C09A68C53DE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_199* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
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
