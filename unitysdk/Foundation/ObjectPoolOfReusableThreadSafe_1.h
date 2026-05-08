#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class IPolisher_6; }
namespace Foundation { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class ISpawner_6; }
namespace Foundation { template <typename T1, typename T2, typename T3, typename T4, typename T5> class IPolisher_5; }
namespace Foundation { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ISpawner_5; }
namespace Foundation { template <typename T1, typename T2, typename T3, typename T4> class IPolisher_4; }
namespace Foundation { template <typename T1, typename T2, typename T3, typename T4> class ISpawner_4; }
namespace Foundation { template <typename T1, typename T2, typename T3> class IPolisher_3; }
namespace Foundation { template <typename T1, typename T2, typename T3> class ISpawner_3; }
namespace Foundation { template <typename T1, typename T2> class IPolisher_2; }
namespace Foundation { template <typename T1, typename T2> class ISpawner_2; }
namespace Foundation { template <typename T> class IPolisher_1; }
namespace Foundation { template <typename T> class ISpawner_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolOfReusableThreadSafe_1_TypeDefinitionIndex = 8230;

	template <typename T>
	class ObjectPoolOfReusableThreadSafe_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* _cache; // 0x0
	};
}
