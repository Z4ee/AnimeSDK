#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int LinqExtensions__PrependIf_d__17_1_TypeDefinitionIndex = 6458;

	template <typename T>
	class LinqExtensions__PrependIf_d__17_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Func_2<::System::Collections::Generic::IEnumerable_1<T>*, ::System::Boolean>* condition; // 0x0
		::System::Func_2<::System::Collections::Generic::IEnumerable_1<T>*, ::System::Boolean>* __3__condition; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__source; // 0x0
		T prepend; // 0x0
		T __3__prepend; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1; // 0x0
	};
}
