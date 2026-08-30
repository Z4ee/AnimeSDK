#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T1, typename T2, typename T3, typename T4, typename T5> class CombineLatest_4__CombineLatest_CombineLatestObserver_1; }
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_4__CombineLatest_TypeDefinitionIndex = 35257;

	template <typename T1, typename T2, typename T3, typename TResult>
	class CombineLatest_4__CombineLatest : public ::System::Object
	{
	public:
		::R3::Observer_1<TResult>* observer; // 0x0
		::R3::Observable_1<T1>* source1; // 0x0
		::R3::Observable_1<T2>* source2; // 0x0
		::R3::Observable_1<T3>* source3; // 0x0
		::System::Func_4<T1, T2, T3, TResult>* resultSelector; // 0x0
		::R3::CombineLatest_4__CombineLatest_CombineLatestObserver_1<T1, T2, T3, TResult, T1>* observer1; // 0x0
		::R3::CombineLatest_4__CombineLatest_CombineLatestObserver_1<T1, T2, T3, TResult, T2>* observer2; // 0x0
		::R3::CombineLatest_4__CombineLatest_CombineLatestObserver_1<T1, T2, T3, TResult, T3>* observer3; // 0x0
		::System::Object* gate; // 0x0
		::System::Boolean hasValueAll; // 0x0
		::System::Int32 completedCount; // 0x0
	};
}
