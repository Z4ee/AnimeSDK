#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace Entitas
{
	inline static constexpr unsigned int GroupUpdated_1_TypeDefinitionIndex = 9696;

	template <typename TEntity>
	class GroupUpdated_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
