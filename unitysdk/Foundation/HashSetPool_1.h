#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Foundation
{
	inline static constexpr unsigned int HashSetPool_1_TypeDefinitionIndex = 7859;

	template <typename T>
	class HashSetPool_1 : public ::System::Object
	{
	public:
		static ::Foundation::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>** StaticGet_s_Pool()
		{
			return (::Foundation::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(HashSetPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
