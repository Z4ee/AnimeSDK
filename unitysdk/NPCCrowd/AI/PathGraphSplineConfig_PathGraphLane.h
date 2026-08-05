#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineConfig_PathGraphLane_LaneDirection.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphSplineConfig_PathGraphLane_PathCountItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHLANE_GET_ALLOWEDMAXCROWD_OFFSET UNITYSDK_OFFSET(0x10295290)
#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHLANE_REFRESHRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x102954B0)
#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x102954F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphLane_TypeDefinitionIndex = 76880;

	class PathGraphSplineConfig_PathGraphLane : public ::System::Object
	{
	public:
		::System::Single fullWidth; // 0x10
		::System::Single pathWidth; // 0x14
		::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane_LaneDirection direction; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane_PathCountItem*>* pathCountItems; // 0x20
		::System::Boolean inited; // 0x28
		::System::Int32 pathCountIdx; // 0x2C
		::System::Single weight; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHLANE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_allowedMaxCrowd()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHLANE_GET_ALLOWEDMAXCROWD_OFFSET))(this);
		}

		::System::Void RefreshRuntimeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHLANE_REFRESHRUNTIMEDATA_OFFSET))(this);
		}
	};
}
