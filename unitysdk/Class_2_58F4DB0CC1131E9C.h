#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_D6D284A69AB5382B.h"

class Class_0_16E4307DCC419505_132;
class Class_2_58F4DB0CC1131E9C_Class_2_A1328A9A0985CB18_1;
namespace MoleMole { class UIInLevelLinkZoneInfoPanelChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_58F4DB0CC1131E9C_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xF253340)
#define CLASS_2_58F4DB0CC1131E9C_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xF253350)
#define CLASS_2_58F4DB0CC1131E9C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xF253420)
#define CLASS_2_58F4DB0CC1131E9C__CTOR_OFFSET UNITYSDK_OFFSET(0xF253410)

inline static constexpr unsigned int Class_2_58F4DB0CC1131E9C_TypeDefinitionIndex = 54477;

class Class_2_58F4DB0CC1131E9C : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelLinkZoneInfoPanelChildWindowController* Field_2_0; // 0x28
	::Class_2_58F4DB0CC1131E9C_Class_2_A1328A9A0985CB18_1* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58F4DB0CC1131E9C__CTOR_OFFSET))(this);
	}

	::Enum_3_D6D284A69AB5382B Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6D284A69AB5382B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58F4DB0CC1131E9C_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_58F4DB0CC1131E9C_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58F4DB0CC1131E9C_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
