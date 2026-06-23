#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_BD3C09A68C53DE66.h"

class Class_0_16E4307DCC419505_199;
class Class_2_23507AFE621AF375_Class_2_E89DC7541B30248D_3;
namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_23507AFE621AF375_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x142B3650)
#define CLASS_2_23507AFE621AF375_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x142B3720)
#define CLASS_2_23507AFE621AF375_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x142B3660)
#define CLASS_2_23507AFE621AF375_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142B3850)
#define CLASS_2_23507AFE621AF375__CTOR_OFFSET UNITYSDK_OFFSET(0x142B3840)

inline static constexpr unsigned int Class_2_23507AFE621AF375_TypeDefinitionIndex = 73976;

class Class_2_23507AFE621AF375 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_23507AFE621AF375_Class_2_E89DC7541B30248D_3* Field_2_0; // 0x28
	::MoleMole::UIInLevelDamageTextContainerChildWindowController* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23507AFE621AF375__CTOR_OFFSET))(this);
	}

	::Enum_3_BD3C09A68C53DE66 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BD3C09A68C53DE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23507AFE621AF375_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_199* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_23507AFE621AF375_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23507AFE621AF375_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23507AFE621AF375_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
