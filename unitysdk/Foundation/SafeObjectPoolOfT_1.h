#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SafeObjectHandle_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class SafeObjectPoolInstance_1; }
namespace Foundation { template <typename T> class SafeObject_1; }
namespace System { template <typename T> class Func_1; }

namespace Foundation
{
	inline static constexpr unsigned int SafeObjectPoolOfT_1_TypeDefinitionIndex = 8048;

	template <typename T>
	class SafeObjectPoolOfT_1 : public ::System::Object
	{
	public:
		static ::System::Func_1<T>** StaticGet__currentAllocator_k__BackingField()
		{
			return (::System::Func_1<T>**)Il2CppClass::FromTypeDefinitionIndex(SafeObjectPoolOfT_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Foundation::SafeObjectPoolInstance_1<T>** StaticGet__objectPoolInstance()
		{
			return (::Foundation::SafeObjectPoolInstance_1<T>**)Il2CppClass::FromTypeDefinitionIndex(SafeObjectPoolOfT_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
