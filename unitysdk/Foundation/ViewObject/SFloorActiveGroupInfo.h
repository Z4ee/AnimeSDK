#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SFloorActiveGroupInfo_TypeDefinitionIndex = 82077;

	struct alignas(8) SFloorActiveGroupInfo
	{
		::System::UInt32 CurrentCheckFloor; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* ActiveGroupList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GroupSuitIndex; // 0x20
	};
}
