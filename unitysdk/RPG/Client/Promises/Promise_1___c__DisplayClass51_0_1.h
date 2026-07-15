#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Func_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass51_0_1_TypeDefinitionIndex = 9546;

	template <typename PromisedT, typename T>
	class Promise_1___c__DisplayClass51_0_1 : public ::System::Object
	{
	public:
		::System::Int32 count; // 0x0
		::RPG::Client::Promises::Promise_1<T>* promise; // 0x0
	};
}
