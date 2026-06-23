#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AggregateComponentAssignableInterface.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int AggregateComponentAssignableInterfaceCache_2_TypeDefinitionIndex = 8536;

	template <typename TEvent, typename T>
	class AggregateComponentAssignableInterfaceCache_2 : public ::System::Object
	{
	public:
		static ::Foundation::AggregateComponentAssignableInterface* StaticGet_Instance()
		{
			return (::Foundation::AggregateComponentAssignableInterface*)Il2CppClass::FromTypeDefinitionIndex(AggregateComponentAssignableInterfaceCache_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
