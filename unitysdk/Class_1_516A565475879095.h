#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A49B4EE89301F2D.h"
#include "unitysdk/Struct_2_784439AEF4F0C5A6.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Generic/LinkedList_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;
template <typename T1, typename T2> class Class_1_516A565475879095_Class_1_248A9BE5392099A1;

inline static constexpr unsigned int Class_1_516A565475879095_TypeDefinitionIndex = 18564;

template <typename TKey, typename TValue>
class Class_1_516A565475879095 : public ::System::Object
{
public:
	static ::System::Collections::Generic::EqualityComparer_1<TValue>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::EqualityComparer_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_516A565475879095_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::EqualityComparer_1<TKey>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::EqualityComparer_1<TKey>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_516A565475879095_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>* Field_1_2; // 0x0
	::System::Collections::Generic::LinkedList_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* Field_1_3; // 0x0
};
