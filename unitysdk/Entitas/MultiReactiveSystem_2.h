#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class ICollector; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Entitas
{
	inline static constexpr unsigned int MultiReactiveSystem_2_TypeDefinitionIndex = 9716;

	template <typename TEntity, typename TContexts>
	class MultiReactiveSystem_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::Entitas::ICollector*>* _collectors; // 0x0
		::System::Collections::Generic::HashSet_1<TEntity>* _collectedEntities; // 0x0
		::System::Collections::Generic::List_1<TEntity>* _buffer; // 0x0
		::System::String* _toStringCache; // 0x0
	};
}
