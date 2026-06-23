#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace Foundation
{
	inline static constexpr unsigned int QueuePool_1_TypeDefinitionIndex = 8356;

	template <typename T>
	class QueuePool_1 : public ::System::Object
	{
	public:
		static ::Foundation::ObjectPool_1<::System::Collections::Generic::Queue_1<T>*>** StaticGet_s_Pool()
		{
			return (::Foundation::ObjectPool_1<::System::Collections::Generic::Queue_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(QueuePool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
