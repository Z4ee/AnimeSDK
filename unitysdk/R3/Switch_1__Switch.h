#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/R3/SerialDisposableCore.h"

namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class Exception; }
namespace System { class Object; }

namespace R3
{
	inline static constexpr unsigned int Switch_1__Switch_TypeDefinitionIndex = 35272;

	template <typename T>
	class Switch_1__Switch : public ::R3::Observer_1<::R3::Observable_1<T>*>
	{
	public:
		::R3::Observer_1<T>* observer; // 0x0
		::System::Object* gate; // 0x0
		::R3::SerialDisposableCore subscription; // 0x0
		::System::UInt64 id; // 0x0
		::System::Boolean runningInner; // 0x0
		::System::Boolean stoppedOuter; // 0x0
	};
}
