#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MeshDecimator::Collections { template <typename T> class ResizableArray_1; }

namespace MeshDecimator::Collections
{
	inline static constexpr unsigned int UVChannels_1_TypeDefinitionIndex = 34830;

	template <typename TVec>
	class UVChannels_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::MeshDecimator::Collections::ResizableArray_1<TVec>*>* channels; // 0x0
		::Il2CppArray<::Il2CppArray<TVec>*>* channelsData; // 0x0
	};
}
