#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int WorkNode_ActionParam_2_TypeDefinitionIndex = 58333;

	template <typename T1, typename T2>
	class WorkNode_ActionParam_2 : public ::System::Object
	{
	public:
		::System::Action_2<T1, T2>* Action; // 0x0
		T1 Param1; // 0x0
		T2 Param2; // 0x0
	};
}
