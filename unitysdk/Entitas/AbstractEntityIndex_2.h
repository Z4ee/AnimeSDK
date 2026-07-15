#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Entitas
{
	inline static constexpr unsigned int AbstractEntityIndex_2_TypeDefinitionIndex = 9681;

	template <typename TEntity, typename TKey>
	class AbstractEntityIndex_2 : public ::System::Object
	{
	public:
		::System::String* _name; // 0x0
		::Entitas::IGroup_1<TEntity>* _group; // 0x0
		::System::Func_3<TEntity, ::Entitas::IComponent*, TKey>* _getKey; // 0x0
		::System::Func_3<TEntity, ::Entitas::IComponent*, ::Il2CppArray<TKey>*>* _getKeys; // 0x0
		::System::Boolean _isSingleKey; // 0x0
	};
}
