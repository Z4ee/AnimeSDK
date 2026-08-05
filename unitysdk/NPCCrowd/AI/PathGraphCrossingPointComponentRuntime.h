#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphCrossingPointComponent_StopMode.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponentRuntime.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineNodeRuntime_BlockState_EBlockState.h"

namespace NPCCrowd::AI { class PathGraphCrossingPointComponent; }
namespace NPCCrowd::AI { class PathGraphSplineLocatorComponent; }
namespace NPCCrowd::Ability { class InteractWaitingSlot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x114D8AB0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME_GET_GM_SWITCHOFF_OFFSET UNITYSDK_OFFSET(0x114D8C00)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0x114D88A0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME_SETSWITCHOFF_OFFSET UNITYSDK_OFFSET(0x114D8C10)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x114D94E0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME__SETSWITCHOFF_G__GETSTARTBLOCKSTATE_9_1_OFFSET UNITYSDK_OFFSET(0x114D94C0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME__SETSWITCHOFF_G__GETSTOPBLOCKSTATE_9_0_OFFSET UNITYSDK_OFFSET(0x114D94A0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___BASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x114D94F0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x114D9580)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointComponentRuntime_TypeDefinitionIndex = 87330;

	class PathGraphCrossingPointComponentRuntime : public ::NPCCrowd::AI::PathGraphFeaturePointComponentRuntime
	{
	public:
		::NPCCrowd::AI::PathGraphCrossingPointComponent* _config; // 0x18
		::NPCCrowd::Ability::InteractWaitingSlot* _waitingSlot; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>* _toLocators; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>* _fromLocators; // 0x30
		::System::Boolean _switchOff; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Boolean get_GM_SwitchOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME_GET_GM_SWITCHOFF_OFFSET))(this);
		}

		::System::Void SetSwitchOff(::System::Boolean switchOff)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME_SETSWITCHOFF_OFFSET))(this, switchOff);
		}

		static ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState_EBlockState _SetSwitchOff_g__GetStopBlockState_9_0(::NPCCrowd::AI::PathGraphCrossingPointComponent_StopMode stopMode)
		{
			return ((::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState_EBlockState(*)(::NPCCrowd::AI::PathGraphCrossingPointComponent_StopMode))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME__SETSWITCHOFF_G__GETSTOPBLOCKSTATE_9_0_OFFSET))(stopMode);
		}

		static ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState_EBlockState _SetSwitchOff_g__GetStartBlockState_9_1(::NPCCrowd::AI::PathGraphCrossingPointComponent_StopMode stopMode)
		{
			return ((::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState_EBlockState(*)(::NPCCrowd::AI::PathGraphCrossingPointComponent_StopMode))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME__SETSWITCHOFF_G__GETSTARTBLOCKSTATE_9_1_OFFSET))(stopMode);
		}

		::System::Void __base_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___BASE_CLEAR_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___BASE_INIT_OFFSET))(this);
		}
	};
}
