#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_RtTask_1_TypeDefinitionIndex = 51244;

	template <typename TConfig>
	class ST_RtTask_1 : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		TConfig _Config; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
	};
}
