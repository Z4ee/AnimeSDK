#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int LINQX__CombineX_d__4_3_TypeDefinitionIndex = 8107;

	template <typename TIn1, typename TIn2, typename TOut>
	class LINQX__CombineX_d__4_3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TOut __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<TIn1>* in1; // 0x0
		::System::Collections::Generic::IEnumerable_1<TIn1>* __3__in1; // 0x0
		::System::Collections::Generic::IEnumerable_1<TIn2>* in2; // 0x0
		::System::Collections::Generic::IEnumerable_1<TIn2>* __3__in2; // 0x0
		::System::Func_3<TIn1, TIn2, TOut>* func; // 0x0
		::System::Func_3<TIn1, TIn2, TOut>* __3__func; // 0x0
		::System::Collections::Generic::IEnumerator_1<TIn1>* _e1_5__2; // 0x0
		::System::Collections::Generic::IEnumerator_1<TIn2>* _e2_5__3; // 0x0
	};
}
