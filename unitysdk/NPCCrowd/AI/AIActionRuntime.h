#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ActionContext.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::AI { class AIActionRuntime_ActionDelegate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCHAT_OFFSET UNITYSDK_OFFSET(0x12A80540)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCOLLIDERENABLE_OFFSET UNITYSDK_OFFSET(0x12A84F50)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONDELAYDESTROY_OFFSET UNITYSDK_OFFSET(0x12A844C0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFADE_OFFSET UNITYSDK_OFFSET(0x12A83380)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFOLLOW_OFFSET UNITYSDK_OFFSET(0x12A85240)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONINTERACTMOVETO_OFFSET UNITYSDK_OFFSET(0x12A7FBA0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONNAVMESHTO_OFFSET UNITYSDK_OFFSET(0x12A7F5E0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x10294030)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x10292A20)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGE_OFFSET UNITYSDK_OFFSET(0x10292260)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSINGLECLIPMONTAGE_OFFSET UNITYSDK_OFFSET(0x10293320)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x10293C00)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMBUBBLECHAT_OFFSET UNITYSDK_OFFSET(0x12A82110)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMCHAT_OFFSET UNITYSDK_OFFSET(0x12A81310)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETPATHFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x10292040)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETSTATEPARAM_OFFSET UNITYSDK_OFFSET(0x12A7FFA0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSIMPLEMOVETO_OFFSET UNITYSDK_OFFSET(0x12A847C0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTAGHANDLER_OFFSET UNITYSDK_OFFSET(0x12A83890)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTELEPORT_OFFSET UNITYSDK_OFFSET(0x12A82DC0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTESTFORJOB_OFFSET UNITYSDK_OFFSET(0x12A7EFA0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTONEARESTPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x12A7F130)
#define NPCCROWD_AI_AIACTIONRUNTIME_GETEFFECTVISIBLEDISTANCEBYHIDELOD_OFFSET UNITYSDK_OFFSET(0x102957B0)
#define NPCCROWD_AI_AIACTIONRUNTIME_TRYINVOKEACTION_OFFSET UNITYSDK_OFFSET(0x12A7EE10)
#define NPCCROWD_AI_AIACTIONRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x10295C30)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRuntime_TypeDefinitionIndex = 67762;

	class AIActionRuntime : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_ActionDelegate*>** StaticGet_Type2AIActionConfig2RuntimeForJob()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_ActionDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(AIActionRuntime_TypeDefinitionIndex)->GetStaticField(0x34D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME__CCTOR_OFFSET))();
		}

		static ::System::Void TryInvokeAction(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_TRYINVOKEACTION_OFFSET))(context);
		}

		static ::System::Void AIActionTestForJob(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTESTFORJOB_OFFSET))(context);
		}

		static ::System::Void AIActionToNearestPathFollow(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTONEARESTPATHFOLLOW_OFFSET))(context);
		}

		static ::System::Void AIActionNavmeshTo(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONNAVMESHTO_OFFSET))(context);
		}

		static ::System::Void AIActionInteractMoveTo(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONINTERACTMOVETO_OFFSET))(context);
		}

		static ::System::Void AIActionSetStateParam(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETSTATEPARAM_OFFSET))(context);
		}

		static ::System::Void AIActionChat(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCHAT_OFFSET))(context);
		}

		static ::System::Void AIActionRandomChat(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMCHAT_OFFSET))(context);
		}

		static ::System::Void AIActionRandomBubbleChat(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMBUBBLECHAT_OFFSET))(context);
		}

		static ::System::Void AIActionTeleport(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTELEPORT_OFFSET))(context);
		}

		static ::System::Void AIActionFade(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFADE_OFFSET))(context);
		}

		static ::System::Void AIActionTagHandler(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTAGHANDLER_OFFSET))(context);
		}

		static ::System::Void AIActionDelayDestroy(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONDELAYDESTROY_OFFSET))(context);
		}

		static ::System::Void AIActionSimpleMoveTo(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSIMPLEMOVETO_OFFSET))(context);
		}

		static ::System::Void AIActionColliderEnable(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCOLLIDERENABLE_OFFSET))(context);
		}

		static ::System::Void AIActionFollow(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFOLLOW_OFFSET))(context);
		}

		static ::System::Void AIActionSetPathFollowTarget(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETPATHFOLLOWTARGET_OFFSET))(context);
		}

		static ::System::Void AIActionPlayMontage(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGE_OFFSET))(context);
		}

		static ::System::Void AIActionPlayMontageSequence(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGESEQUENCE_OFFSET))(context);
		}

		static ::System::Void AIActionPlaySingleClipMontage(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSINGLECLIPMONTAGE_OFFSET))(context);
		}

		static ::System::Void AIActionPlaySoundAction(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSOUNDACTION_OFFSET))(context);
		}

		static ::System::Void AIActionPlayEffect(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYEFFECT_OFFSET))(context);
		}

		static ::System::Single GetEffectVisibleDistanceByHideLOD(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Single(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_GETEFFECTVISIBLEDISTANCEBYHIDELOD_OFFSET))(npcComp);
		}
	};
}
