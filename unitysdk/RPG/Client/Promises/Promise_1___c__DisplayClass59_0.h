#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass59_0_TypeDefinitionIndex = 9554;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<PromisedT>* resultPromise; // 0x0
		::Il2CppArray<::System::Single>* progress; // 0x0
		::System::Action_1<PromisedT>* __9__2; // 0x0
		::System::Action_1<::System::Exception*>* __9__3; // 0x0
	};
}
