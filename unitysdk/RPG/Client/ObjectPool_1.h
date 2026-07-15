#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ObjectPool_1_TypeDefinitionIndex = 33874;

	template <typename T>
	class ObjectPool_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<T>** StaticGet_objects()
		{
			return (::System::Collections::Generic::Queue_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
