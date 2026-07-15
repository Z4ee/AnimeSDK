#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMazeBuffBaseTask_1_TypeDefinitionIndex = 55290;

	template <typename T>
	class AddMazeBuffBaseTask_1 : public ::RPG::GameCore::ImmediateTaskBase_1<T>
	{
	public:
		::Class_1_5F51D4049EA87B7B* _ConditionTask; // 0x0
		::RPG::GameCore::TaskContext* _ConditionContext; // 0x0
		::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* _DynamicFloatList; // 0x0
	};
}
