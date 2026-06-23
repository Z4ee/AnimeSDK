#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/NotifyCollectionChangedEventArgs_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_139;
class Class_0_16E4307DCC419505_142;
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_ABDEC71785FA04E7_Class_3_B6136C2F127116DF_5;
template <typename T> class Class_0_16E4307DCC41950C_12;

inline static constexpr unsigned int Class_1_ABDEC71785FA04E7_TypeDefinitionIndex = 34585;

template <typename TSource, typename TTarget>
class Class_1_ABDEC71785FA04E7 : public ::System::Object
{
public:
	::ObservableCollections::NotifyCollectionChangedEventHandler_1<TSource>* Field_1_0; // 0x0
	::Class_0_16E4307DCC41950C_12<TSource>* Field_1_1; // 0x0
	::Class_0_16E4307DCC41950C_12<TTarget>* Field_1_2; // 0x0
	::Class_1_ABDEC71785FA04E7_Class_3_B6136C2F127116DF_5<TSource, TTarget>* Field_1_3; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_142*>* Field_1_4; // 0x0
};
