#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass60_0_1_TypeDefinitionIndex = 9583;

	template <typename ConvertedT>
	class Promise___c__DisplayClass60_0_1 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise_1<ConvertedT>*>*>* chain; // 0x0
	};
}
