#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/PooledCollection_1.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace Collections::Pooled { template <typename T> class PooledObservableCollection_1_SimpleMonitor; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledObservableCollection_1_TypeDefinitionIndex = 5099;

	template <typename T>
	class PooledObservableCollection_1 : public ::Collections::Pooled::PooledCollection_1<T>
	{
	public:
		::Collections::Pooled::PooledObservableCollection_1_SimpleMonitor<T>* _monitor; // 0x0
		::System::Int32 _blockReentrancyCount; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0
	};
}
