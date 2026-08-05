#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class Class_1_4BBF2D747CC2DDFA;

inline static constexpr unsigned int Class_1_4BBF2D747CC2DDFA_Struct_2_2BE65D17B6ACCA13_TypeDefinitionIndex = 84413;

template <typename TKey, typename TValue>
struct Class_1_4BBF2D747CC2DDFA_Struct_2_2BE65D17B6ACCA13
{
	::Class_1_4BBF2D747CC2DDFA<TKey, TValue>* Field_2_3; // 0x0
	::System::Int32 Field_2_2; // 0x0
	::System::Int32 Field_2_1; // 0x0
	::System::Collections::Generic::KeyValuePair_2<TKey, ::System::Collections::Generic::IEnumerable_1<TValue>*> Field_2_0; // 0x0
};
