#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_BD3C09A68C53DE66.h"

class Class_0_16E4307DCC419505_199;
class Class_2_06D9ABE83F7E8323_Class_2_8504E12A716501A1_13;
namespace MoleMole { class UIMainCityActionTipsWidgetController; }
namespace MoleMole { class UIMainCityClockWidgetController; }
namespace MoleMole { class UIMainCityPersonalOutWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_06D9ABE83F7E8323_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xE82B930)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xE82B860)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xE82B870)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE82BAE0)
#define CLASS_2_06D9ABE83F7E8323__CTOR_OFFSET UNITYSDK_OFFSET(0xE82BAD0)

inline static constexpr unsigned int Class_2_06D9ABE83F7E8323_TypeDefinitionIndex = 55306;

class Class_2_06D9ABE83F7E8323 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_06D9ABE83F7E8323_Class_2_8504E12A716501A1_13* Field_2_1; // 0x28
	::MoleMole::UIMainCityPersonalOutWidgetController* Field_2_2; // 0x30
	::MoleMole::UIMainCityClockWidgetController* Field_2_3; // 0x38
	::MoleMole::UIMainCityActionTipsWidgetController* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323__CTOR_OFFSET))(this);
	}

	::Enum_3_BD3C09A68C53DE66 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BD3C09A68C53DE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_199* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
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
