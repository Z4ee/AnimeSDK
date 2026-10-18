#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_129;

#define CLASS_1_B07EE2D20D5B40BB___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C521FD0)
#define CLASS_1_B07EE2D20D5B40BB___C__DISPLAYCLASS10_0__EXCEPT_B__0_OFFSET UNITYSDK_OFFSET(0x1C5225D0)

inline static constexpr unsigned int Class_1_B07EE2D20D5B40BB___c__DisplayClass10_0_TypeDefinitionIndex = 41744;

class Class_1_B07EE2D20D5B40BB___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_129* traits; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07EE2D20D5B40BB___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Except_b__0(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_B07EE2D20D5B40BB___C__DISPLAYCLASS10_0__EXCEPT_B__0_OFFSET))(this, a1);
	}
};
