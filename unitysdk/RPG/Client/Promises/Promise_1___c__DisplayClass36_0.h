#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass36_0_TypeDefinitionIndex = 9541;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<PromisedT>* resultPromise; // 0x0
		::System::Func_2<::System::Exception*, PromisedT>* onRejected; // 0x0
	};
}
