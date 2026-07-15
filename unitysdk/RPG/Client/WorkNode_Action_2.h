#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

namespace RPG::Client { template <typename T1, typename T2> class WorkNode_ActionParam_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int WorkNode_Action_2_TypeDefinitionIndex = 58335;

	template <typename T1, typename T2>
	class WorkNode_Action_2 : public ::RPG::Client::WorkNode_1<::RPG::Client::WorkNode_ActionParam_2<T1, T2>*>
	{
	public:
	};
}
