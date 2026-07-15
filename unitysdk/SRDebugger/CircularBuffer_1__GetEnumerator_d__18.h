#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { template <typename T> class CircularBuffer_1; }

namespace SRDebugger
{
	inline static constexpr unsigned int CircularBuffer_1__GetEnumerator_d__18_TypeDefinitionIndex = 36401;

	template <typename T>
	class CircularBuffer_1__GetEnumerator_d__18 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::SRDebugger::CircularBuffer_1<T>* __4__this; // 0x0
		::Il2CppArray<::System::ArraySegment_1<T>>* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		::System::ArraySegment_1<T> _segment_5__4; // 0x0
		::System::Int32 _i_5__5; // 0x0
	};
}
