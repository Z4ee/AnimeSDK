#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/GroupEvent.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class GroupChanged_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

namespace Entitas
{
	inline static constexpr unsigned int Collector_1_TypeDefinitionIndex = 9642;

	template <typename TEntity>
	class Collector_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<TEntity>* _collectedEntities; // 0x0
		::Il2CppArray<::Entitas::IGroup_1<TEntity>*>* _groups; // 0x0
		::Il2CppArray<::Entitas::GroupEvent>* _groupEvents; // 0x0
		::Entitas::GroupChanged_1<TEntity>* _addEntityCache; // 0x0
		::System::String* _toStringCache; // 0x0
		::System::Text::StringBuilder* _toStringBuilder; // 0x0
	};
}
