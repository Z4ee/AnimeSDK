#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int ListPool_1_TypeDefinitionIndex = 7993;

	template <typename T>
	class ListPool_1 : public ::System::Object
	{
	public:
		static ::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<T>*>** StaticGet_s_Pool()
		{
			return (::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(ListPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
