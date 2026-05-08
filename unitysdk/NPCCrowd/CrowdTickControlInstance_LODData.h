#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA_GETVALIDBATCH_OFFSET UNITYSDK_OFFSET(0x698760)
#define NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA_RECYCLEVALIDBATCH_OFFSET UNITYSDK_OFFSET(0x698770)
#define NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA_REFRESHVALIDBATCH_OFFSET UNITYSDK_OFFSET(0x6986F0)
#define NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA_UPDATEBATCHTICK_OFFSET UNITYSDK_OFFSET(0x6987D0)
#define NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x6986E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int CrowdTickControlInstance_LODData_TypeDefinitionIndex = 76524;

	struct alignas(8) CrowdTickControlInstance_LODData
	{
		::System::UInt32 TickScale; // 0x10
		::System::Int32 CurrentTick; // 0x14
		::System::Collections::Generic::Stack_1<::System::UInt32>* ValidBatch; // 0x18

		::System::Void _ctor(::System::UInt32 tickScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA__CTOR_OFFSET))(this, tickScale);
		}

		::System::Void RefreshValidBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA_REFRESHVALIDBATCH_OFFSET))(this);
		}

		::System::UInt32 GetValidBatch()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA_GETVALIDBATCH_OFFSET))(this);
		}

		::System::Void RecycleValidBatch(::System::UInt32 batch)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA_RECYCLEVALIDBATCH_OFFSET))(this, batch);
		}

		::System::Void UpdateBatchTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_LODDATA_UPDATEBATCHTICK_OFFSET))(this);
		}
	};
}
