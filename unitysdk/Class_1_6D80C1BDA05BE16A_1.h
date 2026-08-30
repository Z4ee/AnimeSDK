#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;

#define CLASS_1_6D80C1BDA05BE16A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15421150)

inline static constexpr unsigned int Class_1_6D80C1BDA05BE16A_1_TypeDefinitionIndex = 79263;

class Class_1_6D80C1BDA05BE16A_1 : public ::System::Object
{
public:
	::Class_1_D294488719556168* KDFKDNLNDHN; // 0x10
	::Class_2_7EA45D2647F35CDD* ELIMDKMMGBO; // 0x18
	::RPG::GameCore::FateRinCardPileType CCFDOHBOHMG; // 0x20
	::RPG::GameCore::FateRinCardPileType CHPHAMGMKBO; // 0x22

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::Class_1_D294488719556168* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::Class_1_D294488719556168*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType))((::PBYTE)hIl2Cpp + CLASS_1_6D80C1BDA05BE16A_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
