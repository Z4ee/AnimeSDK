#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass52_0_1_TypeDefinitionIndex = 9548;

	template <typename PromisedT, typename ConvertedT>
	class Promise_1___c__DisplayClass52_0_1 : public ::System::Object
	{
	public:
		::System::Func_2<PromisedT, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise_1<ConvertedT>*>*>* chain; // 0x0
	};
}
