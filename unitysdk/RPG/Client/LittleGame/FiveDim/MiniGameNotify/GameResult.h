#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_GAMERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xD4FF3E0)

namespace RPG::Client::LittleGame::FiveDim::MiniGameNotify
{
	inline static constexpr unsigned int GameResult_TypeDefinitionIndex = 76776;

	class GameResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* RepeatableRewardItems; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* OneTimeRewardItems; // 0x18
		::System::UInt32 TotalScore; // 0x20
		::System::Single ScoreMultiplier; // 0x24
		::System::Boolean IsMaxScore; // 0x28
		::System::UInt32 CoinScore; // 0x2C
		::System::UInt32 CoinNum; // 0x30
		::System::UInt32 TimeInSeconds; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_GAMERESULT__CTOR_OFFSET))(this);
		}
	};
}
