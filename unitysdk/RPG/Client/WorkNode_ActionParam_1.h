#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int WorkNode_ActionParam_1_TypeDefinitionIndex = 58332;

	template <typename T>
	class WorkNode_ActionParam_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* Action; // 0x0
		T Param; // 0x0
	};
}
