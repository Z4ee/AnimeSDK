#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class IObjectPoolAllocator_1; }
namespace Foundation { template <typename T> class ObjectPoolInstance_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolThreadSafe_1_TypeDefinitionIndex = 8247;

	template <typename T>
	class ObjectPoolThreadSafe_1 : public ::System::Object
	{
	public:
		static ::Foundation::ObjectPoolInstance_1<T>** StaticGet__objectPoolInstance()
		{
			return (::Foundation::ObjectPoolInstance_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolThreadSafe_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
