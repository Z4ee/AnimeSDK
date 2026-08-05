#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class QueuePool_1___c; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace Foundation
{
	inline static constexpr unsigned int QueuePool_1___c_TypeDefinitionIndex = 8304;

	template <typename T>
	class QueuePool_1___c : public ::System::Object
	{
	public:
		static ::Foundation::QueuePool_1___c<T>** StaticGet___9()
		{
			return (::Foundation::QueuePool_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(QueuePool_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
