#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AIActionProcessor_JobData.h"
#include "unitysdk/NPCCrowd/AI/NPCAIActionState.h"
#include "unitysdk/NPCCrowd/AI/TimeControl.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI { class IAIActionConfig; }

#define NPCCROWD_AI_ACTIONCONTEXT_REQUESTSLEEP_OFFSET UNITYSDK_OFFSET(0x6662D0)
#define NPCCROWD_AI_ACTIONCONTEXT_SETFORCEEXIT_OFFSET UNITYSDK_OFFSET(0x666280)
#define NPCCROWD_AI_ACTIONCONTEXT_SETHANDLER_OFFSET UNITYSDK_OFFSET(0x666230)
#define NPCCROWD_AI_ACTIONCONTEXT_SETJOBDATA_OFFSET UNITYSDK_OFFSET(0x666330)
#define NPCCROWD_AI_ACTIONCONTEXT_SETSTATE_OFFSET UNITYSDK_OFFSET(0x6662E0)
#define NPCCROWD_AI_ACTIONCONTEXT_SETTIMECONTROL_OFFSET UNITYSDK_OFFSET(0x6663D0)
#define NPCCROWD_AI_ACTIONCONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x666420)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ActionContext_TypeDefinitionIndex = 82620;

	struct alignas(8) ActionContext
	{
		::System::UInt32 entityID; // 0x10
		::NPCCrowd::AI::IAIActionConfig* config; // 0x18
		::NPCCrowd::AI::AIActionProcessor_JobData jobData; // 0x20
		::System::Int32 jobIdx; // 0xC0
		::System::Single timer; // 0xC4
		::NPCCrowd::AI::NPCAIActionState state; // 0xC8
		::System::Boolean forceExit; // 0xCC
		::NPCCrowd::AI::TimeControl timeControl; // 0xD0
		::System::Int32 handler; // 0xD8

		::System::Void SetHandler(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ACTIONCONTEXT_SETHANDLER_OFFSET))(this, handler);
		}

		::System::Void SetForceExit(::System::Boolean forceExit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ACTIONCONTEXT_SETFORCEEXIT_OFFSET))(this, forceExit);
		}

		::System::Void RequestSleep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ACTIONCONTEXT_REQUESTSLEEP_OFFSET))(this);
		}

		::System::Void SetState(::NPCCrowd::AI::NPCAIActionState state)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::NPCAIActionState))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ACTIONCONTEXT_SETSTATE_OFFSET))(this, state);
		}

		::System::Void SetJobData(::NPCCrowd::AI::AIActionProcessor_JobData jobData, ::System::Int32 jobIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AIActionProcessor_JobData, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ACTIONCONTEXT_SETJOBDATA_OFFSET))(this, jobData, jobIdx);
		}

		::System::Void SetTimeControl(::NPCCrowd::AI::TimeControl timeControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::TimeControl))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ACTIONCONTEXT_SETTIMECONTROL_OFFSET))(this, timeControl);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ACTIONCONTEXT_UPDATE_OFFSET))(this, deltaTime);
		}
	};
}
