#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPoolOfT_1_ObjectHandler_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class IObjectPoolAllocator_1; }
namespace Foundation { template <typename T> class ObjectPoolInstance_1; }
namespace System { template <typename T> class Func_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolOfT_1_TypeDefinitionIndex = 7783;

	template <typename T>
	class ObjectPoolOfT_1 : public ::System::Object
	{
	public:
		static ::System::Func_1<T>** StaticGet__currentAllocator_k__BackingField()
		{
			return (::System::Func_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolOfT_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Foundation::ObjectPoolInstance_1<T>** StaticGet__objectPoolInstance()
		{
			return (::Foundation::ObjectPoolInstance_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolOfT_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
