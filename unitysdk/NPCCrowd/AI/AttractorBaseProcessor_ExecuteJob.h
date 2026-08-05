#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/FAttractorBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::AI { class AttractorRuntimeData; }

#define NPCCROWD_AI_ATTRACTORBASEPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6664A0)
#define NPCCROWD_AI_ATTRACTORBASEPROCESSOR_EXECUTEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x666490)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorBaseProcessor_ExecuteJob_TypeDefinitionIndex = 43326;

	struct alignas(8) AttractorBaseProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FAttractorBase> attractorBase; // 0x20
		::System::Single deltaTime; // 0x30

		::System::Void _ctor(::NPCCrowd::AI::AttractorRuntimeData* runtimeData, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntimeData*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORBASEPROCESSOR_EXECUTEJOB__CTOR_OFFSET))(this, runtimeData, deltaTime);
		}

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORBASEPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
