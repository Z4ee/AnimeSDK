#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int LINQX__GenerateX_d__0_1_TypeDefinitionIndex = 7990;

	template <typename T>
	class LINQX__GenerateX_d__0_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Func_1<T>* generator; // 0x0
		::System::Func_1<T>* __3__generator; // 0x0
	};
}
