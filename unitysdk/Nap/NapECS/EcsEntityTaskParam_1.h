#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityTaskParam_1_TypeDefinitionIndex = 38007;

	template <typename T>
	class EcsEntityTaskParam_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
