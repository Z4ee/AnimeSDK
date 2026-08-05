#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_911840E7F0E7B180_Class_2_D9EED50B03092328;
namespace MoleMole { class UIEtherEyesInteractBtnChildWindowController; }
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole { class UIInLevelSKillButtonZenkovInteractChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonInteractChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_911840E7F0E7B180_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x16F14550)
#define CLASS_2_911840E7F0E7B180_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x16F14B60)
#define CLASS_2_911840E7F0E7B180_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x16F14480)
#define CLASS_2_911840E7F0E7B180_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x16F14490)
#define CLASS_2_911840E7F0E7B180_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F14AD0)
#define CLASS_2_911840E7F0E7B180__CTOR_OFFSET UNITYSDK_OFFSET(0x16F14AC0)

inline static constexpr unsigned int Class_2_911840E7F0E7B180_TypeDefinitionIndex = 56740;

class Class_2_911840E7F0E7B180 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelSKillButtonZenkovInteractChildWindowController* Field_2_2; // 0x28
	::MoleMole::UIInLevelSkillButtonInteractChildWindowController* Field_2_3; // 0x30
	::Class_2_911840E7F0E7B180_Class_2_D9EED50B03092328* Field_2_7; // 0x38
	::MoleMole::UIGeneralInteractingContainerController* Field_2_1; // 0x40
	::MoleMole::UIEtherEyesInteractBtnChildWindowController* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_911840E7F0E7B180__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_911840E7F0E7B180_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_911840E7F0E7B180_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_911840E7F0E7B180_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_911840E7F0E7B180_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_911840E7F0E7B180_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}
};
