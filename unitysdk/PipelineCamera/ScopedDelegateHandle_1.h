#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int ScopedDelegateHandle_1_TypeDefinitionIndex = 36085;

	template <typename TContext>
	struct ScopedDelegateHandle_1
	{
		::System::Action_1<TContext>* _onDestroy; // 0x0
		TContext _context; // 0x0
	};
}
