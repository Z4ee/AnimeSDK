#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass46_0_TypeDefinitionIndex = 9544;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Action_1<PromisedT>* onResolved; // 0x0
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
		::System::Action_1<::System::Exception*>* onRejected; // 0x0
	};
}
