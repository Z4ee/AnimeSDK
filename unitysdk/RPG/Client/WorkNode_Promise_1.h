#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

namespace RPG::Client { template <typename T> class WorkNode_PromiseParam_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int WorkNode_Promise_1_TypeDefinitionIndex = 58340;

	template <typename PromisedT>
	class WorkNode_Promise_1 : public ::RPG::Client::WorkNode_1<::RPG::Client::WorkNode_PromiseParam_1<PromisedT>*>
	{
	public:
	};
}
