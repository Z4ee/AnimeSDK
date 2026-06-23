#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineNodeRuntime_BlockState_EBlockState.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineNodeRuntime_BlockState_EBlockType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_BLOCKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD5AC270)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineNodeRuntime_BlockState_TypeDefinitionIndex = 83280;

	class PathGraphSplineNodeRuntime_BlockState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* NodeFilterList; // 0x10
		::System::Boolean IsForward; // 0x18
		::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState_EBlockType Type; // 0x1C
		::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState_EBlockState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_BLOCKSTATE__CTOR_OFFSET))(this);
		}
	};
}
