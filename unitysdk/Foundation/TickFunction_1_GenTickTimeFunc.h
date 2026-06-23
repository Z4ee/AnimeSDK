#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickTime.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickFunction_1_GenTickTimeFunc_TypeDefinitionIndex = 8439;

	template <typename TTickingGroup>
	class TickFunction_1_GenTickTimeFunc : public ::System::MulticastDelegate
	{
	public:
	};
}
