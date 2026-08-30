#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/ReadOnlyReactiveProperty_1.h"

namespace R3 { template <typename T> class Observer_1; }
namespace R3 { template <typename T> class ReactiveProperty_1_ObserverNode; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace R3
{
	inline static constexpr unsigned int ReactiveProperty_1_TypeDefinitionIndex = 35277;

	template <typename T>
	class ReactiveProperty_1 : public ::R3::ReadOnlyReactiveProperty_1<T>
	{
	public:
		::System::Byte completeState; // 0x0
		::System::Exception* error; // 0x0
		T currentValue; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* equalityComparer; // 0x0
		::R3::ReactiveProperty_1_ObserverNode<T>* root; // 0x0
	};
}
