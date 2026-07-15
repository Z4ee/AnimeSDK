#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Entitas
{
	inline static constexpr unsigned int ReactiveSystem_1_TypeDefinitionIndex = 9717;

	template <typename TEntity>
	class ReactiveSystem_1 : public ::System::Object
	{
	public:
		::Entitas::ICollector_1<TEntity>* _collector; // 0x0
		::System::Collections::Generic::List_1<TEntity>* _buffer; // 0x0
		::System::String* _toStringCache; // 0x0
	};
}
