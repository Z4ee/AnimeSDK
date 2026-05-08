#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AggregateObject_1_ComponentData.h"
#include "unitysdk/Foundation/AggregateObject_1_InterfaceData.h"
#include "unitysdk/Foundation/AggregateObject_1_Status.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AggregateObjectCache; }
namespace Foundation { template <typename T> class AggregateObject_1_ComponentBuilder; }
namespace Foundation { template <typename T> class AggregateObject_1_ComponentDependencyBuilder; }
namespace Foundation { template <typename T> class IAggregateComponent_1; }
namespace Foundation { template <typename T> class IAggregateObjectEventContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_TypeDefinitionIndex = 9163;

	template <typename TEvent>
	class AggregateObject_1 : public ::System::Object
	{
	public:
		::System::Boolean _builtFromCache; // 0x0
		::Foundation::AggregateObject_1_Status<TEvent> _status; // 0x0
		::System::Collections::Generic::List_1<::System::Int64>* _componentTypeHash; // 0x0
		::System::Collections::Generic::List_1<::System::Int64>* _interfaceTypeHash; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AggregateObject_1_InterfaceData<TEvent>>* _interfaceData; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AggregateObject_1_ComponentData<TEvent>>* _componentData; // 0x0
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* _eventDispatcher; // 0x0
		::System::Collections::Generic::List_1<::Foundation::IAggregateComponent_1<TEvent>*>* _components; // 0x0
		static ::Il2CppArray<::System::Int64>** StaticGet_SortedEvents()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(AggregateObject_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
