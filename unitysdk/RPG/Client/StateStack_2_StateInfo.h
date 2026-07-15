#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StateStack_2_StateInfo_TypeDefinitionIndex = 67029;

	template <typename T, typename KEY>
	class StateStack_2_StateInfo : public ::System::Object
	{
	public:
		KEY kEY; // 0x0
		::System::Int32 priority; // 0x0
		T Value; // 0x0
	};
}
