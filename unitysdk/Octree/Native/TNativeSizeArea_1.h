#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/Native/EnsureSizePolicy.h"
#include "unitysdk/Octree/Native/NativeSizeAreaOptions.h"
#include "unitysdk/System/ValueType.h"

namespace Octree::Native
{
	inline static constexpr unsigned int TNativeSizeArea_1_TypeDefinitionIndex = 45700;

	template <typename T>
	struct TNativeSizeArea_1
	{
		::System::Void* m_Buffer; // 0x0
		::System::Int32 m_Size; // 0x0
		::System::Int32 m_Count; // 0x0
		::System::Int32 m_Capacity; // 0x0
		::System::Int32 m_Position; // 0x0
		::System::Int32 m_NodeSize; // 0x0
		::Octree::Native::EnsureSizePolicy m_EnsurePolicy; // 0x0
		// static const ::System::Int32 PADDING_SIZE = 0x80; // 0x0
	};
}
