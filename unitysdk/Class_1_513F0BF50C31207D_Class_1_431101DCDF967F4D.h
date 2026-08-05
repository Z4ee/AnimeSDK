#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_513F0BF50C31207D_Class_1_431101DCDF967F4D_TypeDefinitionIndex = 49850;

template <typename T>
class Class_1_513F0BF50C31207D_Class_1_431101DCDF967F4D : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<T>*>** StaticGet_Field_1_0()
	{
		return (::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_513F0BF50C31207D_Class_1_431101DCDF967F4D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
