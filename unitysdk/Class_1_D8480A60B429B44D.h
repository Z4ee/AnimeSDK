#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0.h"
#include "unitysdk/Class_1_D8480A60B429B44D_Struct_2_CAA278D42E99CAAC.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_1_D8480A60B429B44D_Class_3_B6136C2F127116DF_23;
template <typename T1, typename T2> class Class_1_D8480A60B429B44D_Class_3_EC018E7EAD15B9B5;

inline static constexpr unsigned int Class_1_D8480A60B429B44D_TypeDefinitionIndex = 67553;

template <typename TKey, typename TValue>
class Class_1_D8480A60B429B44D : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<TKey, ::Class_1_D8480A60B429B44D_Struct_2_CAA278D42E99CAAC<TKey, TValue>>* Field_1_1; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x0
	::Class_1_D8480A60B429B44D_Class_3_EC018E7EAD15B9B5<TKey, TValue>* Field_1_3; // 0x0
	::Class_1_D8480A60B429B44D_Class_3_B6136C2F127116DF_23<TKey, TValue>* Field_1_4; // 0x0
};
