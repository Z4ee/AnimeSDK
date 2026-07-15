#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/AbstractEntityIndex_2.h"

namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Entitas
{
	inline static constexpr unsigned int EntityIndex_2_TypeDefinitionIndex = 9682;

	template <typename TEntity, typename TKey>
	class EntityIndex_2 : public ::Entitas::AbstractEntityIndex_2<TEntity, TKey>
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::HashSet_1<TEntity>*>* _index; // 0x0
	};
}
