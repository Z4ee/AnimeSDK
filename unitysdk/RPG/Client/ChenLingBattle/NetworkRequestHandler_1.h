#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int NetworkRequestHandler_1_TypeDefinitionIndex = 70813;

	template <typename TResponse>
	class NetworkRequestHandler_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<TResponse>* _Promise; // 0x0
	};
}
