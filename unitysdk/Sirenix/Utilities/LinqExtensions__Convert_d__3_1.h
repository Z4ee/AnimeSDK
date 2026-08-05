#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int LinqExtensions__Convert_d__3_1_TypeDefinitionIndex = 6451;

	template <typename T>
	class LinqExtensions__Convert_d__3_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::IEnumerable* source; // 0x0
		::System::Collections::IEnumerable* __3__source; // 0x0
		::System::Func_2<::System::Object*, T>* converter; // 0x0
		::System::Func_2<::System::Object*, T>* __3__converter; // 0x0
		::System::Collections::IEnumerator* __7__wrap1; // 0x0
	};
}
