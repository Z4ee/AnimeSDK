#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityScaledTimeService_1; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseBillBoardSystem_1_TypeDefinitionIndex = 62602;

	template <typename T>
	class BaseBillBoardSystem_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::IEntityScaledTimeService_1<T>* _EntityScaledTimeService; // 0x0
		::Entitas::IGroup_1<T>* _BillBoardGroup; // 0x0
	};
}
