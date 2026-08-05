#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int EventUniversalDelegate_2_TypeDefinitionIndex = 30110;

	template <typename T1, typename T2>
	class EventUniversalDelegate_2 : public ::System::MulticastDelegate
	{
	public:
	};
}
