#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseHelpers___c__DisplayClass0_0_2_TypeDefinitionIndex = 9562;

	template <typename T1, typename T2>
	class PromiseHelpers___c__DisplayClass0_0_2 : public ::System::Object
	{
	public:
		T1 val1; // 0x0
		::System::Int32 numUnresolved; // 0x0
		::RPG::Client::Promises::Promise_1<::System::Tuple_2<T1, T2>*>* promise; // 0x0
		T2 val2; // 0x0
		::System::Boolean alreadyRejected; // 0x0
	};
}
