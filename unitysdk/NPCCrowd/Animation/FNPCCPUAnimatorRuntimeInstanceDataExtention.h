#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCAnimatorRuntimeInstanceAnimClipData.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCPUAnimatorRuntimeInstanceData.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_FNPCCPUANIMATORRUNTIMEINSTANCEDATAEXTENTION_GETANIMCLIPDATA_OFFSET UNITYSDK_OFFSET(0xFB56C40)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCPUAnimatorRuntimeInstanceDataExtention_TypeDefinitionIndex = 51098;

	class FNPCCPUAnimatorRuntimeInstanceDataExtention : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData& GetAnimClipData(::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData& data, ::System::Int32 layerIdx)
		{
			return ((::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData&(*)(::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FNPCCPUANIMATORRUNTIMEINSTANCEDATAEXTENTION_GETANIMCLIPDATA_OFFSET))(data, layerIdx);
		}
	};
}
