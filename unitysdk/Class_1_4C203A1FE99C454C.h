#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BattleAddCardReason.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4C203A1FE99C454C__CTOR_OFFSET UNITYSDK_OFFSET(0x16293B10)

inline static constexpr unsigned int Class_1_4C203A1FE99C454C_TypeDefinitionIndex = 79214;

class Class_1_4C203A1FE99C454C : public ::System::Object
{
public:
	::Class_2_7EA45D2647F35CDD* ELIMDKMMGBO; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D294488719556168*>* PIBKHIILLLF; // 0x18
	::RPG::GameCore::FateRinCardPileType CHPHAMGMKBO; // 0x20
	::RPG::GameCore::FateRinCardPileType CCFDOHBOHMG; // 0x22
	::RPG::Client::FateRin::BattleAddCardReason KDHPKOFLNFM; // 0x24

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::System::Collections::Generic::List_1<::Class_1_D294488719556168*>* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4, ::RPG::Client::FateRin::BattleAddCardReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::System::Collections::Generic::List_1<::Class_1_D294488719556168*>*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::RPG::Client::FateRin::BattleAddCardReason))((::PBYTE)hIl2Cpp + CLASS_1_4C203A1FE99C454C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
