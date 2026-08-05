#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AIActionRuntime_RootRotateActionRuntimeData.h"
#include "unitysdk/NPCCrowd/AI/ActionContext.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::AI { class AIActionRuntime_ActionDelegate; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityManager_CustomAttachTransformProvider; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCHAT_OFFSET UNITYSDK_OFFSET(0xE54A500)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONCOLLIDERENABLE_OFFSET UNITYSDK_OFFSET(0xE54F120)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONDELAYDESTROY_OFFSET UNITYSDK_OFFSET(0xE54E690)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONDOPPLER_OFFSET UNITYSDK_OFFSET(0xE553310)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFADE_OFFSET UNITYSDK_OFFSET(0xE54D520)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONFOLLOW_OFFSET UNITYSDK_OFFSET(0xE54F410)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONINTERACTMOVETO_OFFSET UNITYSDK_OFFSET(0xE549B50)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONNAVMESHTO_OFFSET UNITYSDK_OFFSET(0xE549570)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYEFFECT_OFFSET UNITYSDK_OFFSET(0xE551940)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0xE550210)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYMONTAGE_OFFSET UNITYSDK_OFFSET(0xE54FA10)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSINGLECLIPMONTAGE_OFFSET UNITYSDK_OFFSET(0xE550B50)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONPLAYSOUNDACTION_OFFSET UNITYSDK_OFFSET(0xE551510)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMBUBBLECHAT_OFFSET UNITYSDK_OFFSET(0xE54C120)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONRANDOMCHAT_OFFSET UNITYSDK_OFFSET(0xE54B2F0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONROOTROTATE_OFFSET UNITYSDK_OFFSET(0xE5539B0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETPATHFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xE54F7F0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSETSTATEPARAM_OFFSET UNITYSDK_OFFSET(0xE549F70)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONSIMPLEMOVETO_OFFSET UNITYSDK_OFFSET(0xE54E990)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTAGHANDLER_OFFSET UNITYSDK_OFFSET(0xE54DA30)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTELEPORT_OFFSET UNITYSDK_OFFSET(0xE54CDF0)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTESTFORJOB_OFFSET UNITYSDK_OFFSET(0xE548F70)
#define NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONTONEARESTPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xE5490F0)
#define NPCCROWD_AI_AIACTIONRUNTIME_CLEANUPROOTROTATEACTION_OFFSET UNITYSDK_OFFSET(0xE5541D0)
#define NPCCROWD_AI_AIACTIONRUNTIME_GETEFFECTVISIBLEDISTANCEBYHIDELOD_OFFSET UNITYSDK_OFFSET(0xE553030)
#define NPCCROWD_AI_AIACTIONRUNTIME_ONACTIONREMOVED_OFFSET UNITYSDK_OFFSET(0xE554320)
#define NPCCROWD_AI_AIACTIONRUNTIME_PROVIDEROOTROTATEATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE5543A0)
#define NPCCROWD_AI_AIACTIONRUNTIME_TRYINVOKEACTION_OFFSET UNITYSDK_OFFSET(0xE548DE0)
#define NPCCROWD_AI_AIACTIONRUNTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0xE5547F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRuntime_TypeDefinitionIndex = 89625;

	class AIActionRuntime : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_ActionDelegate*>** StaticGet_Type2AIActionConfig2RuntimeForJob()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_ActionDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(AIActionRuntime_TypeDefinitionIndex)->GetStaticField(0x374A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_RootRotateActionRuntimeData>** StaticGet_RootRotateActionRuntimeDatas()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AIActionRuntime_RootRotateActionRuntimeData>**)Il2CppClass::FromTypeDefinitionIndex(AIActionRuntime_TypeDefinitionIndex)->GetStaticField(0x374A8);
		}
		static ::NPCCrowd::Ability::NPCAbilityManager_CustomAttachTransformProvider** StaticGet_RootRotateAttachTransformProvider()
		{
			return (::NPCCrowd::Ability::NPCAbilityManager_CustomAttachTransformProvider**)Il2CppClass::FromTypeDefinitionIndex(AIActionRuntime_TypeDefinitionIndex)->GetStaticField(0x374B0);
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

		static ::System::Void AIActionDoppler(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONDOPPLER_OFFSET))(context);
		}

		static ::System::Void AIActionRootRotate(::NPCCrowd::AI::ActionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::ActionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_AIACTIONROOTROTATE_OFFSET))(context);
		}

		static ::System::Void OnActionRemoved(::System::Int32 handler)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_ONACTIONREMOVED_OFFSET))(handler);
		}

		static ::System::Void CleanupRootRotateAction(::System::Int32 handler)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_CLEANUPROOTROTATEACTION_OFFSET))(handler);
		}

		static ::System::Boolean ProvideRootRotateAttachTransform(::System::Int32 handler, ::System::UInt32 entityId, ::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::FTransformFragment baseTransform, ::NPCCrowd::Ability::FTransformFragment& attachTransform)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32, ::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_PROVIDEROOTROTATEATTACHTRANSFORM_OFFSET))(handler, entityId, ability, baseTransform, attachTransform);
		}

		static ::System::Single GetEffectVisibleDistanceByHideLOD(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Single(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRUNTIME_GETEFFECTVISIBLEDISTANCEBYHIDELOD_OFFSET))(npcComp);
		}
	};
}
