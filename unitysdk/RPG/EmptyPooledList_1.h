#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T> class PooledList_1; }

namespace RPG
{
	inline static constexpr unsigned int EmptyPooledList_1_TypeDefinitionIndex = 6743;

	template <typename T>
	class EmptyPooledList_1 : public ::System::Object
	{
	public:
		static ::Collections::Pooled::PooledList_1<T>** StaticGet_Instance()
		{
			return (::Collections::Pooled::PooledList_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyPooledList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
