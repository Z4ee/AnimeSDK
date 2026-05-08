#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_LOD_LODITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x573A90)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int LODItem_TypeDefinitionIndex = 52143;

	struct alignas(8) LODItem
	{
		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* item; // 0x10
		::System::Single bias; // 0x18
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>* refPoint2Idx; // 0x20

		::System::Void _ctor(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* item, ::System::Single bias, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>* refPoint2Idx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_LODITEM__CTOR_OFFSET))(this, item, bias, refPoint2Idx);
		}
	};
}
