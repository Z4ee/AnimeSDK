#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AggregateObjectCache_ComponentData.h"
#include "unitysdk/Foundation/AggregateObjectCache_InterfaceData.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_AGGREGATEOBJECTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51F6B0)

namespace Foundation
{
	inline static constexpr unsigned int AggregateObjectCache_TypeDefinitionIndex = 8967;

	class AggregateObjectCache : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* EventDispatcher; // 0x10
		::System::Collections::Generic::List_1<::Foundation::AggregateObjectCache_InterfaceData>* Interfaces; // 0x18
		::System::Collections::Generic::List_1<::Foundation::AggregateObjectCache_ComponentData>* Components; // 0x20
		::System::Int64 EventTypeHash; // 0x28

		::System::Void _ctor(::System::Int64 eventTypeHash, ::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* eventDispatcher, ::System::Collections::Generic::List_1<::Foundation::AggregateObjectCache_InterfaceData>* interfaces, ::System::Collections::Generic::List_1<::Foundation::AggregateObjectCache_ComponentData>* components)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Collections::Generic::List_1<::Foundation::AggregateObjectCache_InterfaceData>*, ::System::Collections::Generic::List_1<::Foundation::AggregateObjectCache_ComponentData>*))((::PBYTE)hIl2Cpp + FOUNDATION_AGGREGATEOBJECTCACHE__CTOR_OFFSET))(this, eventTypeHash, eventDispatcher, interfaces, components);
		}
	};
}
