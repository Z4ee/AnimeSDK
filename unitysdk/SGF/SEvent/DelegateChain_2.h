#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SGF::SEvent { template <typename T1, typename T2> class DelegateChain_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateChain_2_TypeDefinitionIndex = 7891;

	template <typename TInput, typename TOutput>
	class DelegateChain_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Func_2<TInput, TOutput>*>* handlers; // 0x0
		::System::Func_2<TOutput, ::System::Boolean>* shouldContinue; // 0x0
		TOutput defaultValue; // 0x0
	};
}
