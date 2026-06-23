#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int LINQX__DoX_d__3_1_TypeDefinitionIndex = 8094;

	template <typename T>
	class LINQX__DoX_d__3_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__source; // 0x0
		::System::Action_1<T>* action; // 0x0
		::System::Action_1<T>* __3__action; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1; // 0x0
	};
}
