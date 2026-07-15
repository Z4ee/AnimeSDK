#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { template <typename T> class IFrameSyncOperationSource_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseFrameSyncOperation_1_TypeDefinitionIndex = 51190;

	template <typename TContext>
	class BaseFrameSyncOperation_1 : public ::System::Object
	{
	public:
		::System::Int32 _ExecuteFrame_k__BackingField; // 0x0
		::RPG::GameCore::IFrameSyncOperationSource_1<TContext>* _Source_k__BackingField; // 0x0
	};
}
