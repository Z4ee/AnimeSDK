#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0597192E98B9E538.h"

class Class_1_D93F8AE271D8A728;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Task_1_TypeDefinitionIndex = 35423;

	template <typename TConfig>
	class ST_Task_1 : public ::Class_1_0597192E98B9E538
	{
	public:
		TConfig _Config; // 0x0
		::Class_1_D93F8AE271D8A728* _TaskContext; // 0x0
	};
}
