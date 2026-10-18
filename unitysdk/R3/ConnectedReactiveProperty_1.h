#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/ReactiveProperty_1.h"

namespace R3 { template <typename T> class Observable_1; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace R3
{
	inline static constexpr unsigned int ConnectedReactiveProperty_1_TypeDefinitionIndex = 35964;

	template <typename T>
	class ConnectedReactiveProperty_1 : public ::R3::ReactiveProperty_1<T>
	{
	public:
		::System::IDisposable* sourceSubscription; // 0x0
	};
}
