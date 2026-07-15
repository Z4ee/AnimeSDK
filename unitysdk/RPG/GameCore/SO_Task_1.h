#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_9A097580DF02CED3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_Task_1_TypeDefinitionIndex = 49740;

	template <typename TConfig>
	class SO_Task_1 : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		TConfig _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x0
		::Class_2_9A097580DF02CED3* _SOComp; // 0x0
		::System::String* _Name; // 0x0
	};
}
