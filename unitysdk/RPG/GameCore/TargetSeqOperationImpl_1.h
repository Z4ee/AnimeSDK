#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSeqOperationImpl_1_TypeDefinitionIndex = 56558;

	template <typename TConfig>
	class TargetSeqOperationImpl_1 : public ::System::Object
	{
	public:
		TConfig _Config; // 0x0
	};
}
