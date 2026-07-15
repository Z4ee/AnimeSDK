#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BattleAddCardReason.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4C203A1FE99C454C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A0A0A0)

inline static constexpr unsigned int Class_1_4C203A1FE99C454C_TypeDefinitionIndex = 75581;

class Class_1_4C203A1FE99C454C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D294488719556168*>* Field_1_0; // 0x10
	::Class_2_7EA45D2647F35CDD* Field_1_1; // 0x18
	::RPG::Client::FateRin::BattleAddCardReason Field_1_2; // 0x20
	::RPG::GameCore::FateRinCardPileType Field_1_3; // 0x24
	::RPG::GameCore::FateRinCardPileType Field_1_4; // 0x26

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::System::Collections::Generic::List_1<::Class_1_D294488719556168*>* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4, ::RPG::Client::FateRin::BattleAddCardReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::System::Collections::Generic::List_1<::Class_1_D294488719556168*>*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::RPG::Client::FateRin::BattleAddCardReason))((::PBYTE)hIl2Cpp + CLASS_1_4C203A1FE99C454C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
