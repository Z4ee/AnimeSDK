#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateTaskBase_1_TypeDefinitionIndex = 52309;

	template <typename TConfig>
	class PredicateTaskBase_1 : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		TConfig _ConfigRef; // 0x0
	};
}
