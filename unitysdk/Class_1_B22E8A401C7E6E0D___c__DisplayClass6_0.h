#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }

#define CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS6_0__CREATEREFLOWCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xB8AC6D0)
#define CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AB290)

inline static constexpr unsigned int Class_1_B22E8A401C7E6E0D___c__DisplayClass6_0_TypeDefinitionIndex = 79522;

class Class_1_B22E8A401C7E6E0D___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* handCardLayout; // 0x10
	::System::Single duration; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateReflowCommand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS6_0__CREATEREFLOWCOMMAND_B__0_OFFSET))(this);
	}
};
