#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitingTaskBase_1_TypeDefinitionIndex = 50134;

	template <typename TConfig>
	class AdvWaitingTaskBase_1 : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		TConfig _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::Struct_2_D3027B1CDFF61281 _TaskExecutor; // 0x0
		::Class_1_5F51D4049EA87B7B* _ConditionTask; // 0x0
		::System::Boolean _LoopWaiting; // 0x0
		::System::Boolean _EventReceived; // 0x0
	};
}
