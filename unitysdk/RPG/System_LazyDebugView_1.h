#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/LazyThreadSafetyMode.h"

namespace RPG { template <typename T> class GCFreeLazy_1; }

namespace RPG
{
	inline static constexpr unsigned int System_LazyDebugView_1_TypeDefinitionIndex = 6750;

	template <typename T>
	class System_LazyDebugView_1 : public ::System::Object
	{
	public:
		::RPG::GCFreeLazy_1<T>* m_lazy; // 0x0
	};
}
