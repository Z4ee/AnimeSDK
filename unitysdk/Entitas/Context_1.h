#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DesperateDevs::Utils { template <typename T> class ObjectPool_1; }
namespace Entitas { class ContextEntityChanged; }
namespace Entitas { class ContextGroupChanged; }
namespace Entitas { class ContextInfo; }
namespace Entitas { class EntityComponentChanged; }
namespace Entitas { class EntityComponentReplaced; }
namespace Entitas { class EntityEvent; }
namespace Entitas { class IAERC; }
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace Entitas { class IEntityIndex; }
namespace Entitas { template <typename T> class GroupChanged_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Entitas
{
	inline static constexpr unsigned int Context_1_TypeDefinitionIndex = 9649;

	template <typename TEntity>
	class Context_1 : public ::System::Object
	{
	public:
		::Entitas::ContextEntityChanged* OnEntityCreated; // 0x0
		::Entitas::ContextEntityChanged* OnEntityWillBeDestroyed; // 0x0
		::Entitas::ContextEntityChanged* OnEntityDestroyed; // 0x0
		::Entitas::ContextGroupChanged* OnGroupCreated; // 0x0
		::System::Int32 _totalComponents; // 0x0
		::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* _componentPools; // 0x0
		::Entitas::ContextInfo* _contextInfo; // 0x0
		::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>* _aercFactory; // 0x0
		::System::Func_1<TEntity>* _entityFactory; // 0x0
		::System::Collections::Generic::HashSet_1<TEntity>* _entities; // 0x0
		::System::Collections::Generic::Stack_1<TEntity>* _reusableEntities; // 0x0
		::System::Collections::Generic::HashSet_1<TEntity>* _retainedEntities; // 0x0
		::System::Collections::Generic::Dictionary_2<::Entitas::IMatcher_1<TEntity>*, ::Entitas::IGroup_1<TEntity>*>* _groups; // 0x0
		::Il2CppArray<::System::Collections::Generic::List_1<::Entitas::IGroup_1<TEntity>*>*>* _groupsForIndex; // 0x0
		::DesperateDevs::Utils::ObjectPool_1<::System::Collections::Generic::List_1<::Entitas::GroupChanged_1<TEntity>*>*>* _groupChangedListPool; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Entitas::IEntityIndex*>* _entityIndices; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, TEntity>* _entitiesByCreationIndex; // 0x0
		::System::Int32 _creationIndex; // 0x0
		::Il2CppArray<TEntity>* _entitiesCache; // 0x0
		::Entitas::EntityComponentChanged* _cachedEntityChanged; // 0x0
		::Entitas::EntityComponentReplaced* _cachedComponentReplaced; // 0x0
		::Entitas::EntityEvent* _cachedEntityReleased; // 0x0
		::Entitas::EntityEvent* _cachedDestroyEntity; // 0x0
	};
}
