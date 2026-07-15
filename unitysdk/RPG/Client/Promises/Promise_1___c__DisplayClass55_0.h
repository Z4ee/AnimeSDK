#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass55_0_TypeDefinitionIndex = 9550;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* progress; // 0x0
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::IEnumerable_1<PromisedT>*>* resultPromise; // 0x0
		::Il2CppArray<PromisedT>* results; // 0x0
		::System::Int32 remainingCount; // 0x0
		::System::Action_1<::System::Exception*>* __9__3; // 0x0
	};
}
