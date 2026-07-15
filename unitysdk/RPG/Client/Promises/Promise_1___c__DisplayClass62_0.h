#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Action; }
namespace System { class Exception; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass62_0_TypeDefinitionIndex = 9556;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x0
		::RPG::Client::Promises::Promise_1<PromisedT>* promise; // 0x0
	};
}
