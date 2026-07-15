#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/ProgressHandler.h"
#include "unitysdk/RPG/Client/Promises/PromiseState.h"
#include "unitysdk/RPG/Client/Promises/RejectHandler.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class IRejectable; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1_TypeDefinitionIndex = 9539;

	template <typename PromisedT>
	class Promise_1 : public ::System::Object
	{
	public:
		::System::Exception* rejectionException; // 0x0
		PromisedT resolveValue; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::Promises::RejectHandler>* rejectHandlers; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::Promises::ProgressHandler>* progressHandlers; // 0x0
		::System::Collections::Generic::List_1<::System::Action_1<PromisedT>*>* resolveCallbacks; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::Promises::IRejectable*>* resolveRejectables; // 0x0
		::System::Int32 id; // 0x0
		::System::String* _Name_k__BackingField; // 0x0
		::RPG::Client::Promises::PromiseState _CurState_k__BackingField; // 0x0
	};
}
