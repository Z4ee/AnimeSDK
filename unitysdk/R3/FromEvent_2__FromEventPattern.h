#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace R3 { template <typename T> class Observer_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int FromEvent_2__FromEventPattern_TypeDefinitionIndex = 35235;

	template <typename TDelegate, typename T>
	class FromEvent_2__FromEventPattern : public ::System::Object
	{
	public:
		::R3::Observer_1<T>* observer; // 0x0
		::System::Action_1<TDelegate>* removeHandler; // 0x0
		TDelegate registeredHandler; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
	};
}
