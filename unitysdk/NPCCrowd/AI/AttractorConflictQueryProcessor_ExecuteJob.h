#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/FAttractorBase.h"
#include "unitysdk/NPCCrowd/AI/FConflictData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::AI { class AttractorRuntimeData; }

#define NPCCROWD_AI_ATTRACTORCONFLICTQUERYPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x69C960)
#define NPCCROWD_AI_ATTRACTORCONFLICTQUERYPROCESSOR_EXECUTEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x69C950)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorConflictQueryProcessor_ExecuteJob_TypeDefinitionIndex = 73248;

	struct alignas(8) AttractorConflictQueryProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FAttractorBase> attractorBase; // 0x20
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FConflictData> conflictedArea; // 0x30

		::System::Void _ctor(::NPCCrowd::AI::AttractorRuntimeData* runtimeData, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntimeData*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFLICTQUERYPROCESSOR_EXECUTEJOB__CTOR_OFFSET))(this, runtimeData, deltaTime);
		}

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFLICTQUERYPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
