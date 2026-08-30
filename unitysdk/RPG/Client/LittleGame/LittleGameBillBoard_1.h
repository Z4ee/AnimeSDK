#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class LittleGameBillboardHost; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }
namespace RPG::GameCore { class LittleGameBillboardConfig; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int LittleGameBillBoard_1_TypeDefinitionIndex = 76000;

	template <typename TEntity>
	class LittleGameBillBoard_1 : public ::System::Object
	{
	public:
		::System::Boolean _IsStarted_k__BackingField; // 0x0
		::System::Boolean _IsShow_k__BackingField; // 0x0
		::RPG::GameCore::LittleGameBillboardConfig* _billBoardConfig; // 0x0
		TEntity _billBoardEntity; // 0x0
		::RPG::Client::LittleGame::Services_1<TEntity>* _services; // 0x0
		::RPG::Client::Billboard::LittleGameBillboardHost* _Host; // 0x0
		::System::UInt32 _groupID; // 0x0
		::System::UInt32 _instanceID; // 0x0
	};
}
