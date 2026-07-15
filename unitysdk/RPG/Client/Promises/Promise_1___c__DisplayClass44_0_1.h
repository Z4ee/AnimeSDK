#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass44_0_1_TypeDefinitionIndex = 9542;

	template <typename PromisedT, typename ConvertedT>
	class Promise_1___c__DisplayClass44_0_1 : public ::System::Object
	{
	public:
		::System::Func_2<PromisedT, ::RPG::Client::Promises::IPromise_1<ConvertedT>*>* onResolved; // 0x0
		::RPG::Client::Promises::Promise_1<ConvertedT>* resultPromise; // 0x0
		::System::Func_2<::System::Exception*, ::RPG::Client::Promises::IPromise_1<ConvertedT>*>* onRejected; // 0x0
		::System::Action_1<::System::Single>* __9__2; // 0x0
		::System::Action_1<ConvertedT>* __9__3; // 0x0
		::System::Action_1<::System::Exception*>* __9__4; // 0x0
		::System::Action_1<ConvertedT>* __9__5; // 0x0
		::System::Action_1<::System::Exception*>* __9__6; // 0x0
	};
}
