#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int LINQX__FromEnumeratorX_d__2_1_TypeDefinitionIndex = 8095;

	template <typename T>
	class LINQX__FromEnumeratorX_d__2_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* enumerator; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __3__enumerator; // 0x0
	};
}
