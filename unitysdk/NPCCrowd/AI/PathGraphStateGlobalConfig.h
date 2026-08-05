#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphStateGlobalConfig_PathStateGraphParameter.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_PATHGRAPHSTATEGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF0CAC40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphStateGlobalConfig_TypeDefinitionIndex = 64521;

	class PathGraphStateGlobalConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphStateGlobalConfig_PathStateGraphParameter>* pathGraphConfigMap; // 0x10
		::NPCCrowd::AI::PathGraphStateGlobalConfig_PathStateGraphParameter defaultPathGraphConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATEGLOBALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
