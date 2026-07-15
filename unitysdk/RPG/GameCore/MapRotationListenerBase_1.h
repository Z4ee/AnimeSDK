#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationListenerBase_1_TypeDefinitionIndex = 50587;

	template <typename TConfig>
	class MapRotationListenerBase_1 : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		TConfig _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::Class_1_F3391C70DC37088D* _TaskExecutor; // 0x0
	};
}
