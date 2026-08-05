#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_64E2BDD85DD544FC_TypeDefinitionIndex = 90896;

template <typename T>
struct Struct_2_64E2BDD85DD544FC
{
	::System::Collections::Generic::List_1<::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<T>*>>* Field_2_0; // 0x0
	::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<T>*>>*> Field_2_7; // 0x0
};
