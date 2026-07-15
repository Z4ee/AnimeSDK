#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T> class PooledObservableCollection_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledObservableCollection_1_SimpleMonitor_TypeDefinitionIndex = 5100;

	template <typename T>
	class PooledObservableCollection_1_SimpleMonitor : public ::System::Object
	{
	public:
		::System::Int32 _busyCount; // 0x0
		::Collections::Pooled::PooledObservableCollection_1<T>* _collection; // 0x0
	};
}
