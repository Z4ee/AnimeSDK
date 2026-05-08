#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_D6D284A69AB5382B.h"

class Class_0_16E4307DCC419505_132;
class Class_2_06D9ABE83F7E8323_Class_2_8504E12A716501A1_28;
namespace MoleMole { class UIMainCityActionTipsWidgetController; }
namespace MoleMole { class UIMainCityClockWidgetController; }
namespace MoleMole { class UIMainCityPersonalOutWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_06D9ABE83F7E8323_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x15AD8180)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x15AD80B0)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x15AD80C0)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15AD8330)
#define CLASS_2_06D9ABE83F7E8323__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD8320)

inline static constexpr unsigned int Class_2_06D9ABE83F7E8323_TypeDefinitionIndex = 82766;

class Class_2_06D9ABE83F7E8323 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIMainCityPersonalOutWidgetController* Field_2_2; // 0x28
	::MoleMole::UIMainCityClockWidgetController* Field_2_3; // 0x30
	::Class_2_06D9ABE83F7E8323_Class_2_8504E12A716501A1_28* Field_2_1; // 0x38
	::MoleMole::UIMainCityActionTipsWidgetController* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323__CTOR_OFFSET))(this);
	}

	::Enum_3_D6D284A69AB5382B Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6D284A69AB5382B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
