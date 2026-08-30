#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"

namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	inline static constexpr unsigned int Select_2_TypeDefinitionIndex = 35263;

	template <typename T, typename TResult>
	class Select_2 : public ::R3::Observable_1<TResult>
	{
	public:
		::R3::Observable_1<T>* _source_P; // 0x0
		::System::Func_2<T, TResult>* _selector_P; // 0x0
	};
}
