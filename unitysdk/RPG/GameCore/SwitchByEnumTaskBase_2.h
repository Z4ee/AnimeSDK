#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchByEnumTaskBase_2_TypeDefinitionIndex = 43159;

	template <typename TEnum, typename TTaskConfig>
	class SwitchByEnumTaskBase_2 : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		TTaskConfig _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::System::Boolean _TaskExecutorsInitialized; // 0x0
		::System::Collections::Generic::Dictionary_2<TEnum, ::Class_1_69FF5DE516C87A66*>* _TaskExecutors; // 0x0
		::Class_1_69FF5DE516C87A66* _ActiveExecutor; // 0x0
	};
}
