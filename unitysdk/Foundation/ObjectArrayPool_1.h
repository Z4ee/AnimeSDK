#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectArrayPool_1_ObjectHandler_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ArrayObjectPoolInstance_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectArrayPool_1_TypeDefinitionIndex = 7996;

	template <typename T>
	class ObjectArrayPool_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_CommonEventParamCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectArrayPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Foundation::ArrayObjectPoolInstance_1<T>** StaticGet__cache_k__BackingField()
		{
			return (::Foundation::ArrayObjectPoolInstance_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectArrayPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
