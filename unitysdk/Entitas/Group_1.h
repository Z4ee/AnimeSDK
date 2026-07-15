#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class GroupChanged_1; }
namespace Entitas { template <typename T> class GroupUpdated_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Entitas
{
	inline static constexpr unsigned int Group_1_TypeDefinitionIndex = 9690;

	template <typename TEntity>
	class Group_1 : public ::System::Object
	{
	public:
		::Entitas::GroupChanged_1<TEntity>* OnEntityAdded; // 0x0
		::Entitas::GroupChanged_1<TEntity>* OnEntityRemoved; // 0x0
		::Entitas::GroupUpdated_1<TEntity>* OnEntityUpdated; // 0x0
		::Entitas::IMatcher_1<TEntity>* _matcher; // 0x0
		::System::Collections::Generic::HashSet_1<TEntity>* _entities; // 0x0
		::Il2CppArray<TEntity>* _entitiesCache; // 0x0
		TEntity _singleEntityCache; // 0x0
		::System::String* _toStringCache; // 0x0
	};
}
