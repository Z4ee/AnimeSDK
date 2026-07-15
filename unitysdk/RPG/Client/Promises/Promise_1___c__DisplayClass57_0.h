#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass57_0_TypeDefinitionIndex = 9553;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::Func_2<PromisedT, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>* chain; // 0x0
	};
}
