#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T1, typename T2> class Promise_1___c__DisplayClass51_0_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass51_1_1_TypeDefinitionIndex = 9547;

	template <typename PromisedT, typename T>
	class Promise_1___c__DisplayClass51_1_1 : public ::System::Object
	{
	public:
		::System::Int32 itemSequence; // 0x0
		::System::Func_1<::RPG::Client::Promises::IPromise_1<T>*>* fn; // 0x0
		::RPG::Client::Promises::Promise_1<T>* newPromise; // 0x0
		::RPG::Client::Promises::Promise_1___c__DisplayClass51_0_1<PromisedT, T>* CS___8__locals1; // 0x0
		::System::Action_1<T>* __9__5; // 0x0
	};
}
