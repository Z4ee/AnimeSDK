#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"

namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_4_TypeDefinitionIndex = 35256;

	template <typename T1, typename T2, typename T3, typename TResult>
	class CombineLatest_4 : public ::R3::Observable_1<TResult>
	{
	public:
		::R3::Observable_1<T1>* _source1_P; // 0x0
		::R3::Observable_1<T2>* _source2_P; // 0x0
		::R3::Observable_1<T3>* _source3_P; // 0x0
		::System::Func_4<T1, T2, T3, TResult>* _resultSelector_P; // 0x0
	};
}
