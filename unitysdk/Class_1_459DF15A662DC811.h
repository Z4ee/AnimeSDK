#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_459DF15A662DC811_Struct_2_6F78FEE82F482190.h"
#include "unitysdk/Class_1_459DF15A662DC811_Struct_2_CAA278D42E99CAAC.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_1_459DF15A662DC811_Class_3_B6136C2F127116DF_26;
template <typename T1, typename T2> class Class_1_459DF15A662DC811_Class_3_EC018E7EAD15B9B5;

inline static constexpr unsigned int Class_1_459DF15A662DC811_TypeDefinitionIndex = 75662;

template <typename TKey, typename TValue>
class Class_1_459DF15A662DC811 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<TKey, ::Class_1_459DF15A662DC811_Struct_2_CAA278D42E99CAAC<TKey, TValue>>* Field_1_1; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x0
	::Class_1_459DF15A662DC811_Class_3_EC018E7EAD15B9B5<TKey, TValue>* Field_1_3; // 0x0
	::Class_1_459DF15A662DC811_Class_3_B6136C2F127116DF_26<TKey, TValue>* Field_1_4; // 0x0
};
