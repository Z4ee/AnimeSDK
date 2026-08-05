#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }

#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x10294DA0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_GETTIME_OFFSET UNITYSDK_OFFSET(0x10294E40)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0x10294D60)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_RANDRANGE_1_OFFSET UNITYSDK_OFFSET(0x10294EF0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_RANDRANGE_OFFSET UNITYSDK_OFFSET(0x10294E80)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0x10294DE0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x10294F40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointComponentRuntime_TypeDefinitionIndex = 54621;

	class PathGraphFeaturePointComponentRuntime : public ::System::Object
	{
	public:
		::NPCCrowd::AI::PathGraphFeaturePointV2Config* Config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Single GetTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_GETTIME_OFFSET))();
		}

		static ::System::Single RandRange(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_RANDRANGE_OFFSET))(min, max);
		}

		static ::System::Int32 RandRange_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_RANDRANGE_1_OFFSET))(min, max);
		}
	};
}
