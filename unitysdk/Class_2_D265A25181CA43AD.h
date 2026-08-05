#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_D265A25181CA43AD_Class_2_E89DC7541B30248D_7;
namespace MoleMole { class UIInLevelSkillButtonHackChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonHackLittleRobotInteractChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonLittleRobotChangeChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonLittleRobotSkillChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_D265A25181CA43AD_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x125E2700)
#define CLASS_2_D265A25181CA43AD_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x125E2630)
#define CLASS_2_D265A25181CA43AD_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x125E2640)
#define CLASS_2_D265A25181CA43AD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x125E2970)
#define CLASS_2_D265A25181CA43AD__CTOR_OFFSET UNITYSDK_OFFSET(0x125E2960)

inline static constexpr unsigned int Class_2_D265A25181CA43AD_TypeDefinitionIndex = 90852;

class Class_2_D265A25181CA43AD : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelSkillButtonHackLittleRobotInteractChildWindowController* Field_2_7; // 0x28
	::MoleMole::UIInLevelSkillButtonLittleRobotChangeChildWindowController* Field_2_1; // 0x30
	::MoleMole::UIInLevelSkillButtonHackChildWindowController* Field_2_0; // 0x38
	::MoleMole::UIInLevelSkillButtonLittleRobotSkillChildWindowController* Field_2_2; // 0x40
	::Class_2_D265A25181CA43AD_Class_2_E89DC7541B30248D_7* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D265A25181CA43AD__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D265A25181CA43AD_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_D265A25181CA43AD_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D265A25181CA43AD_METHOD_2_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D265A25181CA43AD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
