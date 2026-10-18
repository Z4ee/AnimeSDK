#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace R3 { template <typename T> class CombineLatest_1__CombineLatest; }
namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_1__CombineLatest_CombineLatestObserver_TypeDefinitionIndex = 35909;

	template <typename T>
	class CombineLatest_1__CombineLatest_CombineLatestObserver : public ::R3::Observer_1<T>
	{
	public:
		::R3::CombineLatest_1__CombineLatest<T>* _parent_P; // 0x0
		T _Value_k__BackingField; // 0x0
		::System::Boolean _HasValue_k__BackingField; // 0x0
	};
}
