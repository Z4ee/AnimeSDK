#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int DelegateExtensions___c__DisplayClass1_0_2_TypeDefinitionIndex = 6439;

	template <typename T, typename TResult>
	class DelegateExtensions___c__DisplayClass1_0_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T, TResult>* dic; // 0x0
		::System::Func_2<T, TResult>* func; // 0x0
	};
}
