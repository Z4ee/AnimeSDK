#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }

#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xF3E4100)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_GETTIME_OFFSET UNITYSDK_OFFSET(0xF3E41A0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xF3E40C0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_RANDRANGE_1_OFFSET UNITYSDK_OFFSET(0xF3E4250)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_RANDRANGE_OFFSET UNITYSDK_OFFSET(0xF3E41E0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0xF3E4140)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E42A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointComponentRuntime_TypeDefinitionIndex = 45564;

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
