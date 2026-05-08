#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int EventRouter_EventDelegate_1_TypeDefinitionIndex = 27038;

	template <typename T>
	class EventRouter_EventDelegate_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
