#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace Sofa::Core
{
	inline static constexpr unsigned int ObservableDictionary_2_TypeDefinitionIndex = 41454;

	template <typename TKey, typename TValue>
	class ObservableDictionary_2 : public ::System::Object
	{
	public:
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_CountEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(ObservableDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_IndexerEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(ObservableDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_KeysEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(ObservableDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_ValuesEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(ObservableDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Object* propertyChangedLock; // 0x0
		::System::Object* collectionChangedLock; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* propertyChanged; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* collectionChanged; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary; // 0x0
	};
}
