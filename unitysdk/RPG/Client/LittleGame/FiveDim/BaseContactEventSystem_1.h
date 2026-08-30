#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseContactEventSystem_1_TypeDefinitionIndex = 76600;

	template <typename T>
	class BaseContactEventSystem_1 : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<T>* _ContactEventEmitterGroup; // 0x0
		::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* _ContactPlayerEntities; // 0x0
	};
}
