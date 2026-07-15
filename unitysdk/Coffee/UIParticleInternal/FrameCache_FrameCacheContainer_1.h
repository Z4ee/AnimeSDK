#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int FrameCache_FrameCacheContainer_1_TypeDefinitionIndex = 42329;

	template <typename T>
	class FrameCache_FrameCacheContainer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, T>* _caches; // 0x0
	};
}
