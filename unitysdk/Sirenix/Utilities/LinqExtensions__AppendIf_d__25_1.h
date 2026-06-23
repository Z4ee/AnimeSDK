#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int LinqExtensions__AppendIf_d__25_1_TypeDefinitionIndex = 6466;

	template <typename T>
	class LinqExtensions__AppendIf_d__25_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__source; // 0x0
		::System::Func_1<::System::Boolean>* condition; // 0x0
		::System::Func_1<::System::Boolean>* __3__condition; // 0x0
		::System::Func_1<T>* append; // 0x0
		::System::Func_1<T>* __3__append; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1; // 0x0
	};
}
