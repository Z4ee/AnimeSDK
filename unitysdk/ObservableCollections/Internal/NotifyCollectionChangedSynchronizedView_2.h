#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/SynchronizedViewChangedEventArgs_2.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { class ICollectionEventDispatcher; }
namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedViewFilter_2; }
namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedView_2; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int NotifyCollectionChangedSynchronizedView_2_TypeDefinitionIndex = 25680;

	template <typename T, typename TView>
	class NotifyCollectionChangedSynchronizedView_2 : public ::System::Object
	{
	public:
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_CountPropertyChangedEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(NotifyCollectionChangedSynchronizedView_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedEventArgs*>** StaticGet_raiseChangedEventInvoke()
		{
			return (::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyCollectionChangedSynchronizedView_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::ObservableCollections::ISynchronizedView_2<T, TView>* parent; // 0x0
		::ObservableCollections::ISynchronizedViewFilter_2<T, TView>* currentFilter; // 0x0
		::ObservableCollections::ICollectionEventDispatcher* eventDispatcher; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0
	};
}
