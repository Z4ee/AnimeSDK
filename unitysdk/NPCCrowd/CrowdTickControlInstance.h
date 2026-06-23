#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/CrowdTickControlInstance_LODData.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { class ICrowdLODTickData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_CROWDTICKCONTROLINSTANCE_NEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xEBDC980)
#define NPCCROWD_CROWDTICKCONTROLINSTANCE_ONCHANGELOD_OFFSET UNITYSDK_OFFSET(0xEBDC2B0)
#define NPCCROWD_CROWDTICKCONTROLINSTANCE_ONREMOVELOD_OFFSET UNITYSDK_OFFSET(0xEBDC640)
#define NPCCROWD_CROWDTICKCONTROLINSTANCE_UPDATEBATCH_OFFSET UNITYSDK_OFFSET(0xEBDC820)
#define NPCCROWD_CROWDTICKCONTROLINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDC060)

namespace NPCCrowd
{
	inline static constexpr unsigned int CrowdTickControlInstance_TypeDefinitionIndex = 79363;

	class CrowdTickControlInstance : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MAX_SCALE = 0x1E; // 0x0
		// static const ::System::Int32 BATCH_STACK_CNT = 0x1E; // 0x0
		::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance_LODData>* LODBatchData; // 0x10
		::System::Int32 handler; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* tickScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE__CTOR_OFFSET))(this, tickScale);
		}

		::System::Void OnChangeLOD(::NPCCrowd::ICrowdLODTickData* tickData, ::System::Int32 oldLOD, ::System::Int32 newLOD)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::ICrowdLODTickData*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_ONCHANGELOD_OFFSET))(this, tickData, oldLOD, newLOD);
		}

		::System::Void OnRemoveLOD(::NPCCrowd::ICrowdLODTickData* tickData, ::System::Int32 oldLOD)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::ICrowdLODTickData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_ONREMOVELOD_OFFSET))(this, tickData, oldLOD);
		}

		::System::Void UpdateBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_UPDATEBATCH_OFFSET))(this);
		}

		::System::Boolean NeedUpdate(::NPCCrowd::ICrowdLODTickData* tickData)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::ICrowdLODTickData*))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDTICKCONTROLINSTANCE_NEEDUPDATE_OFFSET))(this, tickData);
		}
	};
}
