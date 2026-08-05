#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_07A269AF52AEE003_Class_2_E89DC7541B30248D;
namespace MoleMole { class UIHackDroneOutOfRangeChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonDroneDownChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonDroneRechargeChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonDroneUpChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonHackChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_07A269AF52AEE003_METHOD_2_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x198FC0C0)
#define CLASS_2_07A269AF52AEE003_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x198FBFF0)
#define CLASS_2_07A269AF52AEE003_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x198FC000)
#define CLASS_2_07A269AF52AEE003_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x198FC3A0)
#define CLASS_2_07A269AF52AEE003__CTOR_OFFSET UNITYSDK_OFFSET(0x198FC390)

inline static constexpr unsigned int Class_2_07A269AF52AEE003_TypeDefinitionIndex = 41480;

class Class_2_07A269AF52AEE003 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelSkillButtonDroneRechargeChildWindowController* Field_2_5; // 0x28
	::MoleMole::UIHackDroneOutOfRangeChildWindowController* Field_2_4; // 0x30
	::Class_2_07A269AF52AEE003_Class_2_E89DC7541B30248D* Field_2_1; // 0x38
	::MoleMole::UIInLevelSkillButtonDroneDownChildWindowController* Field_2_7; // 0x40
	::MoleMole::UIInLevelSkillButtonHackChildWindowController* Field_2_6; // 0x48
	::MoleMole::UIInLevelSkillButtonDroneUpChildWindowController* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07A269AF52AEE003__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07A269AF52AEE003_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_07A269AF52AEE003_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07A269AF52AEE003_METHOD_2_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07A269AF52AEE003_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
