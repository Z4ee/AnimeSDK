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

inline static constexpr unsigned int Class_1_38F81D6A5D792EE0_TypeDefinitionIndex = 34003;

template <typename TKey, typename TValue>
class Class_1_38F81D6A5D792EE0 : public ::System::Object
{
public:
	static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_Field_1_0()
	{
		return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38F81D6A5D792EE0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_Field_1_1()
	{
		return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38F81D6A5D792EE0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_Field_1_2()
	{
		return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38F81D6A5D792EE0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_Field_1_3()
	{
		return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38F81D6A5D792EE0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Object* Field_1_4; // 0x0
	::System::Object* Field_1_5; // 0x0
	::System::ComponentModel::PropertyChangedEventHandler* Field_1_6; // 0x0
	::System::Collections::Specialized::NotifyCollectionChangedEventHandler* Field_1_7; // 0x0
	::System::Collections::Generic::Dictionary_2<TKey, TValue>* Field_1_8; // 0x0
};
