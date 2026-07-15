#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass45_0_TypeDefinitionIndex = 9543;

	template <typename PromisedT>
	class Promise_1___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Func_2<PromisedT, ::RPG::Client::Promises::IPromise*>* onResolved; // 0x0
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
		::System::Action_1<::System::Exception*>* onRejected; // 0x0
		::System::Action_1<::System::Single>* __9__2; // 0x0
		::System::Action* __9__3; // 0x0
		::System::Action_1<::System::Exception*>* __9__4; // 0x0
	};
}
