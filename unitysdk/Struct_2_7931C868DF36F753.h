#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_7931C868DF36F753_TypeDefinitionIndex = 73734;

template <typename T>
struct Struct_2_7931C868DF36F753
{
	::System::Collections::Generic::List_1<::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<T>*>>* Field_2_0; // 0x0
	::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<T>*>>*> Field_2_1; // 0x0
};
