#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

namespace RPG::Client { template <typename T> class WorkNode_ActionParam_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int WorkNode_Action_1_TypeDefinitionIndex = 58334;

	template <typename T>
	class WorkNode_Action_1 : public ::RPG::Client::WorkNode_1<::RPG::Client::WorkNode_ActionParam_1<T>*>
	{
	public:
	};
}
