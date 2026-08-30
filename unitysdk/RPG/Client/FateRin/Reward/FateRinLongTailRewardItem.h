#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

namespace RPG::Client::FateRin::Reward
{
	inline static constexpr unsigned int FateRinLongTailRewardItem_TypeDefinitionIndex = 79408;

	struct alignas(8) FateRinLongTailRewardItem
	{
		::System::UInt32 FightID; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* QuestList; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::System::UInt32 ClaimedCount; // 0x30
	};
}
