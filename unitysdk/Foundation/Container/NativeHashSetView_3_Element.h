#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSetView_3_Element_TypeDefinitionIndex = 8481;

	template <typename TUserData, typename T, typename TKeyFunc>
	struct NativeHashSetView_3_Element
	{
		T Item; // 0x0
		::Foundation::Container::NativeHashSetElementId Next; // 0x0
		::System::Int32 BucketIndex; // 0x0
	};
}
