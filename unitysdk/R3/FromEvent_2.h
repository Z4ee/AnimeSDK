#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int FromEvent_2_TypeDefinitionIndex = 35234;

	template <typename TDelegate, typename T>
	class FromEvent_2 : public ::R3::Observable_1<T>
	{
	public:
		::System::Func_2<::System::Action_1<T>*, TDelegate>* _conversion_P; // 0x0
		::System::Action_1<TDelegate>* _addHandler_P; // 0x0
		::System::Action_1<TDelegate>* _removeHandler_P; // 0x0
		::System::Threading::CancellationToken _cancellationToken_P; // 0x0
	};
}
