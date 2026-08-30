#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudCardAreaViewModel_CardAnimationEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDANIMATIONSEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCF680B0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudCardAreaViewModel_CardAnimationSegment_TypeDefinitionIndex = 79567;

	class FateRinBattleHudCardAreaViewModel_CardAnimationSegment : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardAnimationEntry*>* Entries; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDANIMATIONSEGMENT__CTOR_OFFSET))(this);
		}
	};
}
