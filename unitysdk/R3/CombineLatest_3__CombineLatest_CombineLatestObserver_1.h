#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace R3 { template <typename T1, typename T2, typename T3> class CombineLatest_3__CombineLatest; }
namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_3__CombineLatest_CombineLatestObserver_1_TypeDefinitionIndex = 35255;

	template <typename T1, typename T2, typename TResult, typename T>
	class CombineLatest_3__CombineLatest_CombineLatestObserver_1 : public ::R3::Observer_1<T>
	{
	public:
		::R3::CombineLatest_3__CombineLatest<T1, T2, TResult>* _parent_P; // 0x0
		T _Value_k__BackingField; // 0x0
		::System::Boolean _HasValue_k__BackingField; // 0x0
	};
}
