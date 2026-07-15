#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1_Segment; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentQueue_1__Enumerate_d__27_TypeDefinitionIndex = 1515;

	template <typename T>
	class ConcurrentQueue_1__Enumerate_d__27 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* head; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* tail; // 0x0
		::System::Int32 tailTail; // 0x0
		::System::Int32 headHead; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1<T>* __4__this; // 0x0
		::System::Int32 _i_5__1; // 0x0
		::System::Int32 _headTail_5__2; // 0x0
		::System::Int32 _i_5__3; // 0x0
		::System::Int32 _i_5__4; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* _s_5__5; // 0x0
		::System::Int32 _i_5__6; // 0x0
		::System::Int32 _sTail_5__7; // 0x0
		::System::Int32 _i_5__8; // 0x0
	};
}
