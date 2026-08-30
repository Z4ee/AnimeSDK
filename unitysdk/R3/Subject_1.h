#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/CompleteState.h"
#include "unitysdk/R3/Observable_1.h"

namespace R3 { template <typename T> class Observer_1; }
namespace R3 { template <typename T> class Subject_1_ObserverNode; }
namespace System { class IDisposable; }

namespace R3
{
	inline static constexpr unsigned int Subject_1_TypeDefinitionIndex = 35285;

	template <typename T>
	class Subject_1 : public ::R3::Observable_1<T>
	{
	public:
		::R3::CompleteState completeState; // 0x0
		::R3::Subject_1_ObserverNode<T>* root; // 0x0
		::System::UInt64 version; // 0x0
	};
}
