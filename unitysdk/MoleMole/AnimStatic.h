#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMSTATIC_BUILDANIMSTATEMAP_OFFSET UNITYSDK_OFFSET(0x16283BF0)
#define MOLEMOLE_ANIMSTATIC_BUILDANIMTAGMAP_OFFSET UNITYSDK_OFFSET(0x16285BA0)
#define MOLEMOLE_ANIMSTATIC_BUILDOBJECTTAGMAP_OFFSET UNITYSDK_OFFSET(0x162839A0)
#define MOLEMOLE_ANIMSTATIC_BUILDPARAMMAP_OFFSET UNITYSDK_OFFSET(0x16286140)
#define MOLEMOLE_ANIMSTATIC_BUILDSTATEGROUP_OFFSET UNITYSDK_OFFSET(0x16289CD0)
#define MOLEMOLE_ANIMSTATIC_BUILDTAGGROUP_OFFSET UNITYSDK_OFFSET(0x162834D0)
#define MOLEMOLE_ANIMSTATIC_CLEANANIMSTATICDATA_OFFSET UNITYSDK_OFFSET(0x16289A30)
#define MOLEMOLE_ANIMSTATIC_GETPARAMNAMEBYHASH_OFFSET UNITYSDK_OFFSET(0x1628A1F0)
#define MOLEMOLE_ANIMSTATIC_GETSTATENAMEBYHASH_OFFSET UNITYSDK_OFFSET(0x1628A0B0)
#define MOLEMOLE_ANIMSTATIC_GETTAGNAMEBYHASH_OFFSET UNITYSDK_OFFSET(0x1628A440)
#define MOLEMOLE_ANIMSTATIC_INITANIMSTATICDATA_OFFSET UNITYSDK_OFFSET(0x16283410)
#define MOLEMOLE_ANIMSTATIC_ISANIMATORINTAG_OFFSET UNITYSDK_OFFSET(0x1628A330)
#define MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMEGREATEQUAL_OFFSET UNITYSDK_OFFSET(0x1628A680)
#define MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMELESSEQUAL_OFFSET UNITYSDK_OFFSET(0x1628A5E0)
#define MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMEPERCENT_OFFSET UNITYSDK_OFFSET(0x1628A580)
#define MOLEMOLE_ANIMSTATIC_ONASSETREADY_OFFSET UNITYSDK_OFFSET(0x16289840)
#define MOLEMOLE_ANIMSTATIC_TRYCACHEALLOWPUSHSTATEHASH_OFFSET UNITYSDK_OFFSET(0x1628A720)
#define MOLEMOLE_ANIMSTATIC_TRYCACHEIMMTURNFACEANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1628A910)
#define MOLEMOLE_ANIMSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1628AB10)
#define MOLEMOLE_ANIMSTATIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1628AB00)

namespace MoleMole
{
	inline static constexpr unsigned int AnimStatic_TypeDefinitionIndex = 77074;

	class AnimStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_HitThrow_OnGround_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D200);
		}
		static ::System::String** StaticGet_BoolIsInStun_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D208);
		}
		static ::System::String** StaticGet_Die_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D210);
		}
		static ::System::String** StaticGet_IntAirHitIndexThrowType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D218);
		}
		static ::System::String** StaticGet_Death_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D220);
		}
		static ::System::String** StaticGet_TriggerAtkB_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D228);
		}
		static ::System::String** StaticGet_Dodge_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D230);
		}
		static ::System::String** StaticGet_IsHoldAtkB_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D238);
		}
		static ::System::String** StaticGet_SwithInAttack_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D240);
		}
		static ::System::String** StaticGet_HitGround_L_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D248);
		}
		static ::System::String** StaticGet_Bool_IsExhausted_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D250);
		}
		static ::System::String** StaticGet_IntShootType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D258);
		}
		static ::System::String** StaticGet_HitFly_Death_Back_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D260);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_Camera_Temp_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D268);
		}
		static ::System::String** StaticGet_UI_Avatar_Control_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D270);
		}
		static ::System::String** StaticGet_HitFly_OnGround_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D278);
		}
		static ::System::String** StaticGet_RandomSkillType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D280);
		}
		static ::System::String** StaticGet_TriggerReleaseAtkA_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D288);
		}
		static ::System::String** StaticGet_Int_AttackIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D290);
		}
		static ::System::String** StaticGet_HitDirX_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D298);
		}
		static ::System::String** StaticGet_Born_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2A0);
		}
		static ::System::String** StaticGet_HitThrowEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2A8);
		}
		static ::System::String** StaticGet_TriggerLevelUp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2B0);
		}
		static ::System::String** StaticGet_TriggerInstantOut_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2B8);
		}
		static ::System::String** StaticGet_Trigger_Action_IdlePose_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2C0);
		}
		static ::System::String** StaticGet_Trigger_BreakStun_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2C8);
		}
		static ::System::String** StaticGet_FastMove_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2D0);
		}
		static ::System::String** StaticGet_AttackSpecialL_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2D8);
		}
		static ::System::String** StaticGet_WeaponIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2E0);
		}
		static ::System::String** StaticGet_HitThrowStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2E8);
		}
		static ::System::String** StaticGet_IsOperating_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2F0);
		}
		static ::System::String** StaticGet_IsQTEWindowOpen_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D2F8);
		}
		static ::System::String** StaticGet_TransOff_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D300);
		}
		static ::System::String** StaticGet_TriggerDie_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D308);
		}
		static ::System::String** StaticGet_HitForwardType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D310);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_AnimTagMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D318);
		}
		static ::System::String** StaticGet_SwitchOutAttack_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D320);
		}
		static ::System::String** StaticGet_ReflectBulletEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D328);
		}
		static ::System::String** StaticGet_Bool_IsInPerform_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D330);
		}
		static ::System::String** StaticGet_Trigger_Login()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D338);
		}
		static ::System::String** StaticGet_HitDown_OnGround_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D340);
		}
		static ::System::String** StaticGet_TriggerAction_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D348);
		}
		static ::System::String** StaticGet_BoolIsWalking_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D350);
		}
		static ::System::String** StaticGet_Int_CurrentPhase_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D358);
		}
		static ::System::String** StaticGet_CanUseRobotUlt_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D360);
		}
		static ::System::String** StaticGet_HitShake_HitShakeLayer_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D368);
		}
		static ::System::String** StaticGet_TriggerHitFlyEnd_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D370);
		}
		static ::System::String** StaticGet_BoolIsOnGround_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D378);
		}
		static ::System::String** StaticGet_HitDirY_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D380);
		}
		static ::System::String** StaticGet_TriggerCardsContainer3_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D388);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_Temp_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D390);
		}
		static ::System::String** StaticGet_IsAttack_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D398);
		}
		static ::System::String** StaticGet_IsHoldExQTE_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3A0);
		}
		static ::System::String** StaticGet_Idle_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3A8);
		}
		static ::System::String** StaticGet_WalkStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3B0);
		}
		static ::System::String** StaticGet_IsTryMoving_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3B8);
		}
		static ::System::String** StaticGet_MoveSpeedRatio_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3C0);
		}
		static ::System::String** StaticGet_FloatBlendDirRight_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3C8);
		}
		static ::System::String** StaticGet_IsAlive_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3D0);
		}
		static ::System::String** StaticGet_SkillDir_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3D8);
		}
		static ::System::String** StaticGet_TriggerBreakShield_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3E0);
		}
		static ::System::String** StaticGet_IntAIMoveType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3E8);
		}
		static ::System::String** StaticGet_TriggerCardsContainer1_Quick_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3F0);
		}
		static ::System::String** StaticGet_EvadeFront_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D3F8);
		}
		static ::System::String** StaticGet_TriggerDirectionSkillUp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D400);
		}
		static ::System::String** StaticGet_TriggerHitShake_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D408);
		}
		static ::System::String** StaticGet_AttackRush_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D410);
		}
		static ::System::String** StaticGet_Float_JoyStickForce_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D418);
		}
		static ::System::String** StaticGet_IsMegaSkill_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D420);
		}
		static ::System::String** StaticGet_BoolIsStun_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D428);
		}
		static ::System::String** StaticGet_TriggerSlideAtkBUp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D430);
		}
		static ::System::String** StaticGet_AttackNormal02_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D438);
		}
		static ::System::String** StaticGet_Trigger_Ultimate_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D440);
		}
		static ::System::String** StaticGet_Trigger_Exhausted_End_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D448);
		}
		static ::System::String** StaticGet_Trigger_Convert()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D450);
		}
		static ::System::String** StaticGet_IsDissolve_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D458);
		}
		static ::System::String** StaticGet_BoolEasyAssaultAid_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D460);
		}
		static ::System::String** StaticGet_BuffIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D468);
		}
		static ::System::String** StaticGet_JumpStartDown_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D470);
		}
		static ::System::String** StaticGet_Trigger_TurnAround()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D478);
		}
		static ::System::String** StaticGet_HitDown_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D480);
		}
		static ::System::String** StaticGet_Trigger_Exhausted_Start_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D488);
		}
		static ::System::String** StaticGet_TriggerSwitchIn_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D490);
		}
		static ::System::String** StaticGet_Bool_IsInOverload__Paralysis_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D498);
		}
		static ::System::String** StaticGet_Move_ZoneTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4A0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_AllowPushAnimationStateHashList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4A8);
		}
		static ::System::String** StaticGet_MoveRunStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4B0);
		}
		static ::System::String** StaticGet_BoolIsBulletHit_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4B8);
		}
		static ::System::String** StaticGet_TriggerAttackLanded_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4C0);
		}
		static ::System::String** StaticGet_Trigger_Execute_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4C8);
		}
		static ::System::String** StaticGet_TurnBack_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4D0);
		}
		static ::System::String** StaticGet_IsCounter_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4D8);
		}
		static ::System::String** StaticGet_HitFlyStartFront_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4E0);
		}
		static ::System::String** StaticGet_Bool_IsGachaPerform_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4E8);
		}
		static ::System::String** StaticGet_IsEnergyEmpty_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4F0);
		}
		static ::System::String** StaticGet_TriggerBuff_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D4F8);
		}
		static ::System::String** StaticGet_Idle_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D500);
		}
		static ::System::String** StaticGet_TriggerPressExQTE_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D508);
		}
		static ::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_s_AnimTagGroup()
		{
			return (::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D510);
		}
		static ::System::String** StaticGet_HitThrowLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D518);
		}
		static ::System::String** StaticGet_IsHoldAtkC_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D520);
		}
		static ::System::String** StaticGet_SwitchToRobotUltimate_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D528);
		}
		static ::System::String** StaticGet_Int_PlayedFrameCount_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D530);
		}
		static ::System::String** StaticGet_TriggerCardsContainer2_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D538);
		}
		static ::System::String** StaticGet_RunLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D540);
		}
		static ::System::String** StaticGet_TriggerDirectionSkillDown_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D548);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_paramMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D550);
		}
		static ::System::String** StaticGet_BoolIsCollideWall_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D558);
		}
		static ::System::String** StaticGet_Trigger_Action_Revive()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D560);
		}
		static ::System::String** StaticGet_IsHoldAtkA_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D568);
		}
		static ::System::String** StaticGet_TriggerDirectionSkillRight_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D570);
		}
		static ::System::String** StaticGet_RobotSkillRef_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D578);
		}
		static ::System::String** StaticGet_TriggerSelfDestruction_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D580);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_ImmTurnFaceAnimationStateList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D588);
		}
		static ::System::String** StaticGet_Reflector_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D590);
		}
		static ::System::String** StaticGet_HitFly_Death_Front_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D598);
		}
		static ::System::String** StaticGet_CharacterSelect_Loop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5A0);
		}
		static ::System::String** StaticGet_HitShake_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5A8);
		}
		static ::System::String** StaticGet_Int_ResistStaggerLevel_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5B0);
		}
		static ::System::String** StaticGet_TurnBack_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5B8);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_Camera_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5C0);
		}
		static ::System::String** StaticGet_Bool_SkipBorn_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5C8);
		}
		static ::System::String** StaticGet_CanUseRobot_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5D0);
		}
		static ::System::String** StaticGet_HitDown_OnGround_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5D8);
		}
		static ::System::String** StaticGet_PlaceHolder_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5E0);
		}
		static ::System::String** StaticGet_HitEffect_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5E8);
		}
		static ::System::String** StaticGet_HitFlyLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5F0);
		}
		static ::System::String** StaticGet_BranchIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D5F8);
		}
		static ::System::String** StaticGet_TriggerDying_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D600);
		}
		static ::System::String** StaticGet_Evade_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D608);
		}
		static ::System::String** StaticGet_SwitchToRobotNormal_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D610);
		}
		static ::System::String** StaticGet_IsHoldAid_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D618);
		}
		static ::System::String** StaticGet_Int_TextureSheetType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D620);
		}
		static ::System::String** StaticGet_BoolIsEnergyFull_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D628);
		}
		static ::System::String** StaticGet_MoveRunEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D630);
		}
		static ::System::String** StaticGet_HitThrow_Death_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D638);
		}
		static ::System::String** StaticGet_AttackCounter_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D640);
		}
		static ::System::String** StaticGet_NormalizedTime_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D648);
		}
		static ::System::String** StaticGet_RunEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D650);
		}
		static ::System::String** StaticGet_FrameCount_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D658);
		}
		static ::System::String** StaticGet_TriggerHitDownEnd_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D660);
		}
		static ::System::String** StaticGet_Trigger_SwitchPhase_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D668);
		}
		static ::System::String** StaticGet_AttackNormal06_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D670);
		}
		static ::System::String** StaticGet_Evade_Back_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D678);
		}
		static ::System::String** StaticGet_Trigger_Action_SkipEndPose_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D680);
		}
		static ::System::String** StaticGet_TriggerEvade_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D688);
		}
		static ::System::String** StaticGet_Bool_AIEnabled_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D690);
		}
		static ::System::String** StaticGet_HitDown_Death_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D698);
		}
		static ::System::String** StaticGet_NPC_Trigger_OpenBox_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6A0);
		}
		static ::System::String** StaticGet_Attack_Branch_01_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6A8);
		}
		static ::System::String** StaticGet_Hit_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6B0);
		}
		static ::System::String** StaticGet_Int_LoginPos()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6B8);
		}
		static ::System::String** StaticGet_Bool_IsInIgnite_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6C0);
		}
		static ::System::String** StaticGet_Move_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6C8);
		}
		static ::System::String** StaticGet_Trigger_Action_End_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6D0);
		}
		static ::System::String** StaticGet_Trigger_Action_Start_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6D8);
		}
		static ::System::String** StaticGet_HitGround_L_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6E0);
		}
		static ::System::String** StaticGet_Trigger_TurnAround_Success()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6E8);
		}
		static ::System::String** StaticGet_DieLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6F0);
		}
		static ::System::String** StaticGet_SwitchInNormal_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D6F8);
		}
		static ::System::String** StaticGet_SwitchOutNormal_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D700);
		}
		static ::System::String** StaticGet_Trigger_Action_ReviveEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D708);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_objectTagmap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D710);
		}
		static ::System::String** StaticGet_TriggerReleaseAtkB_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D718);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_CameraY_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D720);
		}
		static ::System::String** StaticGet_ReflectBullet_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D728);
		}
		static ::System::String** StaticGet_Bool_LoginIdle()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D730);
		}
		static ::System::String** StaticGet_TransType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D738);
		}
		static ::System::String** StaticGet_Idle_ZoneTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D740);
		}
		static ::System::String** StaticGet_IntDashLevel_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D748);
		}
		static ::System::String** StaticGet_IntMoveType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D750);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D758);
		}
		static ::System::String** StaticGet_TriggerDissolve_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D760);
		}
		static ::System::String** StaticGet_TriggerDashAttack_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D768);
		}
		static ::System::String** StaticGet_WalkEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D770);
		}
		static ::System::String** StaticGet_BoolIsFrozen_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D778);
		}
		static ::System::String** StaticGet_TriggerSlideAtkBLeft_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D780);
		}
		static ::System::String** StaticGet_Trigger_Overload_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D788);
		}
		static ::System::String** StaticGet_IntAirHitIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D790);
		}
		static ::System::String** StaticGet_TriggerWallHit_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D798);
		}
		static ::System::String** StaticGet_TriggerTurnBack_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7A0);
		}
		static ::System::String** StaticGet_Float_LookAvatarDir_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7A8);
		}
		static ::System::String** StaticGet_AttackNormal05_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7B0);
		}
		static ::System::String** StaticGet_TriggerSwitchOut_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7B8);
		}
		static ::System::String** StaticGet_HitGround_H_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7C0);
		}
		static ::System::String** StaticGet_Bool_HasLockTarget_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7C8);
		}
		static ::System::String** StaticGet_StageDynamicObject_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7D0);
		}
		static ::System::String** StaticGet_HitGroundH_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_AnimStateMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7E0);
		}
		static ::System::String** StaticGet_TriggerAirHitOnFloat_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7E8);
		}
		static ::System::String** StaticGet_FastMove_ZoneTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7F0);
		}
		static ::System::String** StaticGet_Float_LockTargetDir_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D7F8);
		}
		static ::System::String** StaticGet_DodgeDummy_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D800);
		}
		static ::System::String** StaticGet_TriggerCardsContainer2_Quick_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D808);
		}
		static ::System::String** StaticGet_FastRun_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D810);
		}
		static ::System::String** StaticGet_IntActionIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D818);
		}
		static ::System::String** StaticGet_TriggerCardsContainer3_Quick_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D820);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Byte, ::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_animStateGroup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Byte, ::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D828);
		}
		static ::System::String** StaticGet_IsHoldEvade_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D830);
		}
		static ::System::String** StaticGet_TriggerReleaseAtkC_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D838);
		}
		static ::System::String** StaticGet_HitGroundL_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D840);
		}
		static ::System::String** StaticGet_BoolIsCollideGroundParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D848);
		}
		static ::System::String** StaticGet_RunStartEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D850);
		}
		static ::System::String** StaticGet_IntSwitchTypeIn_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D858);
		}
		static ::System::String** StaticGet_FloatBlendTime_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D860);
		}
		static ::System::String** StaticGet_HitFlyEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D868);
		}
		static ::System::String** StaticGet_IsActive_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D870);
		}
		static ::System::String** StaticGet_IntSwitchTypeOut_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D878);
		}
		static ::System::String** StaticGet_WalkStartEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D880);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_CameraX_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D888);
		}
		static ::System::String** StaticGet_BoolIsOnFloor_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D890);
		}
		static ::System::String** StaticGet_Int_CurEp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D898);
		}
		static ::System::String** StaticGet_Float_TargetDirY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8A0);
		}
		static ::System::String** StaticGet_EvadeEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8A8);
		}
		static ::System::String** StaticGet_IsShooting_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8B0);
		}
		static ::System::String** StaticGet_Die_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8B8);
		}
		static ::System::String** StaticGet_Evade_Back_End_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8C0);
		}
		static ::System::String** StaticGet_TriggerVisible_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8C8);
		}
		static ::System::String** StaticGet_Evade_Back_Start_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8D0);
		}
		static ::System::String** StaticGet_TriggerHit_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8D8);
		}
		static ::System::String** StaticGet_AttackSpecialStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8E0);
		}
		static ::System::String** StaticGet_Float_SlidingDirectionString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8E8);
		}
		static ::System::String** StaticGet_Float_TimeScaleRatio_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8F0);
		}
		static ::System::String** StaticGet_TriggerReleaseExQTE_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D8F8);
		}
		static ::System::String** StaticGet_TriggerCardsContainer1_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D900);
		}
		static ::System::String** StaticGet_TriggerPerfectEvade_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D908);
		}
		static ::System::String** StaticGet_IntGroundHitIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D910);
		}
		static ::System::String** StaticGet_TriggerHitThrowEnd_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D918);
		}
		static ::System::String** StaticGet_IntDeathWay_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D920);
		}
		static ::System::String** StaticGet_TriggerEnterAtk_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D928);
		}
		static ::System::String** StaticGet_RunStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D930);
		}
		static ::System::String** StaticGet_Stun_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D938);
		}
		static ::System::String** StaticGet_CharSkillRef_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D940);
		}
		static ::System::String** StaticGet_WalkLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D948);
		}
		static ::System::String** StaticGet_RandomSkillGenre_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D950);
		}
		static ::System::String** StaticGet_AirHitEndIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D958);
		}
		static ::System::String** StaticGet_AttackNormal04_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D960);
		}
		static ::System::String** StaticGet_TriggerAirHitOnFall_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D968);
		}
		static ::System::String** StaticGet_Bool_IsInChaos_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D970);
		}
		static ::System::String** StaticGet_TriggerAid_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D978);
		}
		static ::System::String** StaticGet_Trigger_PartDestroyed_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D980);
		}
		static ::System::String** StaticGet_AttackNormal03_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D988);
		}
		static ::System::String** StaticGet_TriggerSkillEnd_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D990);
		}
		static ::System::String** StaticGet_TriggerReleaseEvade_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D998);
		}
		static ::System::String** StaticGet_HitThrow_OnGround_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9A0);
		}
		static ::System::String** StaticGet_TriggerSkillGet_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9A8);
		}
		static ::System::String** StaticGet_TriggerShowUp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9B0);
		}
		static ::System::String** StaticGet_Death_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9B8);
		}
		static ::System::String** StaticGet_TriggerAtkA_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9C0);
		}
		static ::System::String** StaticGet_HitGround_H_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9C8);
		}
		static ::System::String** StaticGet_Trigger_SwitchPhaseNormal_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9D0);
		}
		static ::System::String** StaticGet_AttackNormal01_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9D8);
		}
		static ::System::String** StaticGet_BoolMainCityKeepRunning_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9E0);
		}
		static ::System::String** StaticGet_Float_Aim_Pitch()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9E8);
		}
		static ::System::String** StaticGet_Revive01_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9F0);
		}
		static ::System::String** StaticGet_JumpStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2D9F8);
		}
		static ::System::String** StaticGet_Trigger_SwitchPhaseByHit_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA00);
		}
		static ::System::String** StaticGet_Trigger_Action_Revive_MP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA08);
		}
		static ::System::String** StaticGet_Trigger_Chaos_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA10);
		}
		static ::System::String** StaticGet_HitFly_OnGround_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA18);
		}
		static ::System::String** StaticGet_Bool_IsLockZoneRotate_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA20);
		}
		static ::System::String** StaticGet_Death_Loop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA28);
		}
		static ::System::String** StaticGet_SwitchOutInstant_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA30);
		}
		static ::System::String** StaticGet_Bool_IsInOverload_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA38);
		}
		static ::System::String** StaticGet_TriggerDirectionSkillLeft_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA40);
		}
		static ::System::String** StaticGet_BoolIsCD_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA48);
		}
		static ::System::String** StaticGet_MoveRunLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA50);
		}
		static ::System::String** StaticGet_Trigger_Ignite_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA58);
		}
		static ::System::String** StaticGet_TriggerDisappear_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA60);
		}
		static ::System::String** StaticGet_Int_LivingState_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA68);
		}
		static ::System::String** StaticGet_Run_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA70);
		}
		static ::System::String** StaticGet_Attack_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA78);
		}
		static ::System::String** StaticGet_IsMoving_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA80);
		}
		static ::System::String** StaticGet_Trigger_Gacha_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA88);
		}
		static ::System::String** StaticGet_Trigger_SpecialFeedback_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA90);
		}
		static ::System::String** StaticGet_TriggerShoot_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DA98);
		}
		static ::System::String** StaticGet_TriggerReleaseAid_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DAA0);
		}
		static ::System::String** StaticGet_TriggerAtkC_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DAA8);
		}
		static ::System::String** StaticGet_FloatBlendDirLeft_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DAB0);
		}
		static ::System::String** StaticGet_Sprint_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DAB8);
		}
		static ::System::String** StaticGet_TriggerReflectBullet_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DAC0);
		}
		static ::System::String** StaticGet_TriggerTransOff_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2DAC8);
		}
		static ::System::Int32* StaticGet_Bool_SkipBorn_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99C0);
		}
		static ::System::Int32* StaticGet_RobotSkillRef_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99C4);
		}
		static ::System::Int32* StaticGet_Float_JoyStickForce_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99C8);
		}
		static ::System::Int32* StaticGet_AttackNormal01_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99CC);
		}
		static ::System::Int32* StaticGet_IntDashLevel_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99D0);
		}
		static ::System::Int32* StaticGet_IntAirHitIndexThrowType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99D4);
		}
		static ::System::Int32* StaticGet_Reflector_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99D8);
		}
		static ::System::Int32* StaticGet_AttackNormal02_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99DC);
		}
		static ::System::Int32* StaticGet_FastMove_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99E0);
		}
		static ::System::Int32* StaticGet_TriggerDisappear_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99E4);
		}
		static ::System::Int32* StaticGet_TransOff_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99E8);
		}
		static ::System::Int32* StaticGet_Bool_IsInOverload__Paralysis_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99EC);
		}
		static ::System::Int32* StaticGet_Int_ResistStaggerLevel_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99F0);
		}
		static ::System::Int32* StaticGet_HitFly_OnGround_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99F4);
		}
		static ::System::Int32* StaticGet_Bool_IsInOverload_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99F8);
		}
		static ::System::Int32* StaticGet_HitDirY_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x99FC);
		}
		static ::System::Int32* StaticGet_Death_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A00);
		}
		static ::System::Int32* StaticGet_SwitchOutAttack_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A04);
		}
		static ::System::Int32* StaticGet_IntActionIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A08);
		}
		static ::System::Int32* StaticGet_IntAttackIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A0C);
		}
		static ::System::Int32* StaticGet_AttackNormal04_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A10);
		}
		static ::System::Int32* StaticGet_Attack_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A14);
		}
		static ::System::Int32* StaticGet_IsDissolve_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A18);
		}
		static ::System::Int32* StaticGet_IntGroundHitIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A1C);
		}
		static ::System::Int32* StaticGet_HitFly_OnGround_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A20);
		}
		static ::System::Boolean* StaticGet_dataInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A24);
		}
		static ::System::Int32* StaticGet_TriggerSlideAtkBLeft_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A28);
		}
		static ::System::Int32* StaticGet_FloatBlendDirRight_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A2C);
		}
		static ::System::Int32* StaticGet_Revive01_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A30);
		}
		static ::System::Int32* StaticGet_Bool_IsInPerform_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A34);
		}
		static ::System::Int32* StaticGet_TriggerHitDownEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A38);
		}
		static ::System::Int32* StaticGet_FloatBlendDirLeft_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A3C);
		}
		static ::System::Int32* StaticGet_BoolIsFrozen_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A40);
		}
		static ::System::Int32* StaticGet_FastRun_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A44);
		}
		static ::System::Int32* StaticGet_WalkStartEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A48);
		}
		static ::System::Int32* StaticGet_NPC_Trigger_OpenBox_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A4C);
		}
		static ::System::Int32* StaticGet_WeaponIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A50);
		}
		static ::System::Int32* StaticGet_HitDown_OnGround_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A54);
		}
		static ::System::Int32* StaticGet_Trigger_TurnAround_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A58);
		}
		static ::System::Int32* StaticGet_SkillDir_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A5C);
		}
		static ::System::Int32* StaticGet_Trigger_Action_Start_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A60);
		}
		static ::System::Int32* StaticGet_DieLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A64);
		}
		static ::System::Int32* StaticGet_BoolIsInStun_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A68);
		}
		static ::System::Int32* StaticGet_JumpStartDown_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A6C);
		}
		static ::System::Int32* StaticGet_UI_Avatar_Control_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A70);
		}
		static ::System::Int32* StaticGet_MoveRunLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A74);
		}
		static ::System::Int32* StaticGet_IsActive_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A78);
		}
		static ::System::Int32* StaticGet_Float_TargetDirY_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A7C);
		}
		static ::System::Int32* StaticGet_RandomSkillType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A80);
		}
		static ::System::Int32* StaticGet_TriggerAtkB_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A84);
		}
		static ::System::Int32* StaticGet_BoolMainCityKeepRunning_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A88);
		}
		static ::System::Int32* StaticGet_TriggerSkillGet_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A8C);
		}
		static ::System::Int32* StaticGet_CanUseRobotUlt_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A90);
		}
		static ::System::Int32* StaticGet_HitThrow_OnGround_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A94);
		}
		static ::System::Int32* StaticGet_Idle_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A98);
		}
		static ::System::Int32* StaticGet_Int_LivingState_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9A9C);
		}
		static ::System::Int32* StaticGet_Int_TextureSheetType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AA0);
		}
		static ::System::Int32* StaticGet_TriggerVisible_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AA4);
		}
		static ::System::Int32* StaticGet_IsEnergyEmpty_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AA8);
		}
		static ::System::Int32* StaticGet_Int_CurrentPhase_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AAC);
		}
		static ::System::Int32* StaticGet_FrameCount_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AB0);
		}
		static ::System::Int32* StaticGet_HitFly_Death_Back_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AB4);
		}
		static ::System::Int32* StaticGet_TriggerDashAttack_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AB8);
		}
		static ::System::Int32* StaticGet_Trigger_SwitchPhaseByHit_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9ABC);
		}
		static ::System::Int32* StaticGet_Death_Loop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AC0);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_CameraY_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AC4);
		}
		static ::System::Int32* StaticGet_TriggerSwitchOut_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AC8);
		}
		static ::System::Int32* StaticGet_IsHoldAid_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9ACC);
		}
		static ::System::Int32* StaticGet_IntSwitchTypeOut_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AD0);
		}
		static ::System::Int32* StaticGet_Trigger_Chaos_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AD4);
		}
		static ::System::Int32* StaticGet_Trigger_Action_IdlePose_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AD8);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer3_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9ADC);
		}
		static ::System::Int32* StaticGet_BoolIsAlive_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AE0);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer1_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AE4);
		}
		static ::System::Int32* StaticGet_Bool_LoginIdle_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AE8);
		}
		static ::System::Int32* StaticGet_IsHoldAtkA_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AEC);
		}
		static ::System::Int32* StaticGet_Trigger_TurnAround_Success_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AF0);
		}
		static ::System::Int32* StaticGet_AttackRush_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AF4);
		}
		static ::System::Int32* StaticGet_Float_LockTargetDir_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AF8);
		}
		static ::System::Int32* StaticGet_TriggerLevelUp_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9AFC);
		}
		static ::System::Int32* StaticGet_Evade_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B00);
		}
		static ::System::Int32* StaticGet_TriggerReleaseEvade_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B04);
		}
		static ::System::Int32* StaticGet_SwitchInNormal_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B08);
		}
		static ::System::Int32* StaticGet_BoolIsBulletHit_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B0C);
		}
		static ::System::Int32* StaticGet_HitFly_Death_Front_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B10);
		}
		static ::System::Int32* StaticGet_TriggerHitShake_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B14);
		}
		static ::System::Int32* StaticGet_TriggerSkillEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B18);
		}
		static ::System::Int32* StaticGet_Die_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B1C);
		}
		static ::System::Int32* StaticGet_Bool_AIEnabled_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B20);
		}
		static ::System::Int32* StaticGet_BoolIsCD_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B24);
		}
		static ::System::Int32* StaticGet_IsCounter_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B28);
		}
		static ::System::Int32* StaticGet_IsHoldEvade_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B2C);
		}
		static ::System::Int32* StaticGet_SwitchOutInstant_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B30);
		}
		static ::System::Int32* StaticGet_IntDeathWay_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B34);
		}
		static ::System::Int32* StaticGet_IsQTEWindowOpen_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B38);
		}
		static ::System::Int32* StaticGet_Bool_IsLockZoneRotate_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B3C);
		}
		static ::System::Int32* StaticGet_Move_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B40);
		}
		static ::System::Int32* StaticGet_HitEffect_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B44);
		}
		static ::System::Int32* StaticGet_JumpStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B48);
		}
		static ::System::Int32* StaticGet_Empty_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B4C);
		}
		static ::System::Int32* StaticGet_BoolIsCollideWall_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B50);
		}
		static ::System::Int32* StaticGet_WalkEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B54);
		}
		static ::System::Int32* StaticGet_TriggerPressExQTE_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B58);
		}
		static ::System::Int32* StaticGet_SwitchOutNormal_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B5C);
		}
		static ::System::Int32* StaticGet_HitGround_L_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B60);
		}
		static ::System::Int32* StaticGet_WalkStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B64);
		}
		static ::System::Int32* StaticGet_SwitchToRobotNormal_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B68);
		}
		static ::System::Int32* StaticGet_AirHitEndIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B6C);
		}
		static ::System::Int32* StaticGet_TriggerBreakShield_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B70);
		}
		static ::System::Int32* StaticGet_TriggerDying_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B74);
		}
		static ::System::Int32* StaticGet_Trigger_Ignite_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B78);
		}
		static ::System::Int32* StaticGet_Trigger_Exhausted_End_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B7C);
		}
		static ::System::Int32* StaticGet_TriggerDirectionSkillDown_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B80);
		}
		static ::System::Int32* StaticGet_TriggerSelfDestruction_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B84);
		}
		static ::System::Int32* StaticGet_Attack_Branch_01_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B88);
		}
		static ::System::Int32* StaticGet_TriggerTurnBack_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B8C);
		}
		static ::System::Int32* StaticGet_TriggerReleaseAid_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B90);
		}
		static ::System::Int32* StaticGet_Trigger_Ultimate_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B94);
		}
		static ::System::Int32* StaticGet_HitDirX_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B98);
		}
		static ::System::Int32* StaticGet_Trigger_Action_Revive_MP_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9B9C);
		}
		static ::System::Int32* StaticGet_TriggerBuff_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BA0);
		}
		static ::System::Int32* StaticGet_EvadeFront_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BA4);
		}
		static ::System::Int32* StaticGet_FloatBlendTime_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BA8);
		}
		static ::System::Int32* StaticGet_Idle_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BAC);
		}
		static ::System::Int32* StaticGet_TriggerReflectBullet_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BB0);
		}
		static ::System::Int32* StaticGet_Trigger_BreakStun_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BB4);
		}
		static ::System::Int32* StaticGet_Int_LoginPos_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BB8);
		}
		static ::System::Int32* StaticGet_IntSwitchTypeIn_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BBC);
		}
		static ::System::Int32* StaticGet_HitGroundH_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BC0);
		}
		static ::System::Int32* StaticGet_HitThrowEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BC4);
		}
		static ::System::Int32* StaticGet_HitDown_Death_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BC8);
		}
		static ::System::Int32* StaticGet_ReflectBullet_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BCC);
		}
		static ::System::Int32* StaticGet_TriggerAtkC_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BD0);
		}
		static ::System::Int32* StaticGet_WalkLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BD4);
		}
		static ::System::Int32* StaticGet_Trigger_Action_SkipEndPose_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BD8);
		}
		static ::System::Int32* StaticGet_BoolIsEnergyFull_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BDC);
		}
		static ::System::Int32* StaticGet_Death_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BE0);
		}
		static ::System::Int32* StaticGet_EvadeBackEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BE4);
		}
		static ::System::Int32* StaticGet_BoolIsOnGround_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BE8);
		}
		static ::System::Int32* StaticGet_RunLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BEC);
		}
		static ::System::Int32* StaticGet_HitThrowLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BF0);
		}
		static ::System::Int32* StaticGet_HitGroundL_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BF4);
		}
		static ::System::Int32* StaticGet_MoveRunStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BF8);
		}
		static ::System::Int32* StaticGet_Bool_IsInIgnite_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9BFC);
		}
		static ::System::Int32* StaticGet_IsShooting_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C00);
		}
		static ::System::Int32* StaticGet_Trigger_Action_End_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C04);
		}
		static ::System::Int32* StaticGet_HitShake_HitShakeLayer_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C08);
		}
		static ::System::Int32* StaticGet_BoolIsWalking_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C0C);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_CameraX_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C10);
		}
		static ::System::Int32* StaticGet_TriggerAirHitOnFall_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C14);
		}
		static ::System::Int32* StaticGet_TriggerAirHitOnFloat_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C18);
		}
		static ::System::Int32* StaticGet_Trigger_SwitchPhase_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C1C);
		}
		static ::System::Int32* StaticGet_Die_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C20);
		}
		static ::System::Int32* StaticGet_CanUseRobot_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C24);
		}
		static ::System::Int32* StaticGet_Stun_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C28);
		}
		static ::System::Int32* StaticGet_Trigger_SpecialFeedback_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C2C);
		}
		static ::System::Int32* StaticGet_Bool_HasLockTarget_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C30);
		}
		static ::System::Int32* StaticGet_MoveRunEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C34);
		}
		static ::System::Int32* StaticGet_TransType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C38);
		}
		static ::System::Int32* StaticGet_TriggerReleaseAtkC_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C3C);
		}
		static ::System::Int32* StaticGet_RunEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C40);
		}
		static ::System::Int32* StaticGet_HitGround_L_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C44);
		}
		static ::System::Int32* StaticGet_AttackNormal05_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C48);
		}
		static ::System::Int32* StaticGet_TriggerTransOff_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C4C);
		}
		static ::System::Int32* StaticGet_HitGround_H_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C50);
		}
		static ::System::Int32* StaticGet_HitDown_OnGround_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C54);
		}
		static ::System::Int32* StaticGet_IsHoldAtkB_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C58);
		}
		static ::System::Int32* StaticGet_Trigger_Gacha_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C5C);
		}
		static ::System::Int32* StaticGet_TriggerDirectionSkillRight_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C60);
		}
		static ::System::Int32* StaticGet_TriggerPerfectEvade_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C64);
		}
		static ::System::Int32* StaticGet_AttackSpecialStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C68);
		}
		static ::System::Int32* StaticGet_Trigger_Login_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C6C);
		}
		static ::System::Int32* StaticGet_Dodge_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C70);
		}
		static ::System::Int32* StaticGet_ANIMATOR_STATE_TYPE_INDEX_FLY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C74);
		}
		static ::System::Int32* StaticGet_EvadeBackStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C78);
		}
		static ::System::Int32* StaticGet_Float_Aim_Pitch_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C7C);
		}
		static ::System::Int32* StaticGet_Trigger_Action_Revive_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C80);
		}
		static ::System::Int32* StaticGet_Trigger_Exhausted_Start_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C84);
		}
		static ::System::Int32* StaticGet_TriggerHitFlyEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C88);
		}
		static ::System::Int32* StaticGet_TriggerReleaseAtkB_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C8C);
		}
		static ::System::Int32* StaticGet_Born_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C90);
		}
		static ::System::Int32* StaticGet_HitFlyEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C94);
		}
		static ::System::Int32* StaticGet_TriggerHit_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C98);
		}
		static ::System::Int32* StaticGet_TriggerReleaseAtkA_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9C9C);
		}
		static ::System::Int32* StaticGet_CharSkillRef_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CA0);
		}
		static ::System::Int32* StaticGet_Trigger_PartDestroyed_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CA4);
		}
		static ::System::Int32* StaticGet_EvadeBack_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CA8);
		}
		static ::System::Int32* StaticGet_Bool_IsInChaos_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CAC);
		}
		static ::System::Int32* StaticGet_SwitchInAttack_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CB0);
		}
		static ::System::Int32* StaticGet_IsAttack_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CB4);
		}
		static ::System::Int32* StaticGet_TriggerDie_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CB8);
		}
		static ::System::Int32* StaticGet_RunStartEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CBC);
		}
		static ::System::Int32* StaticGet_TriggerDissolve_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CC0);
		}
		static ::System::Int32* StaticGet_SwitchToRobotUltimate_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CC4);
		}
		static ::System::Int32* StaticGet_IntShootType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CC8);
		}
		static ::System::Int32* StaticGet_HitGround_H_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CCC);
		}
		static ::System::Int32* StaticGet_IntMoveType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CD0);
		}
		static ::System::Int32* StaticGet_TriggerDirectionSkillLeft_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CD4);
		}
		static ::System::Int32* StaticGet_Bool_IsGachaPerform_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CD8);
		}
		static ::System::Int32* StaticGet_IsOperating_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CDC);
		}
		static ::System::Int32* StaticGet_BoolIsOnFloor_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CE0);
		}
		static ::System::Int32* StaticGet_HitFlyLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CE4);
		}
		static ::System::Int32* StaticGet_RunStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CE8);
		}
		static ::System::Int32* StaticGet_TriggerDirectionSkillUp_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CEC);
		}
		static ::System::Int32* StaticGet_Run_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CF0);
		}
		static ::System::Int32* StaticGet_BranchIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CF4);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_Camera_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CF8);
		}
		static ::System::Int32* StaticGet_Hit_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9CFC);
		}
		static ::System::Int32* StaticGet_TurnBack_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D00);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer3_Quick_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D04);
		}
		static ::System::Int32* StaticGet_HitThrow_Death_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D08);
		}
		static ::System::Int32* StaticGet_PlaceHolder_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D0C);
		}
		static ::System::Int32* StaticGet_HitFlyStartFront_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D10);
		}
		static ::System::Int32* StaticGet_CharacterSelect_Loop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D14);
		}
		static ::System::Int32* StaticGet_BuffIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D18);
		}
		static ::System::Int32* StaticGet_Float_LookAvatarDir_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D1C);
		}
		static ::System::Int32* StaticGet_BoolEasyAssaultAid_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D20);
		}
		static ::System::Int32* StaticGet_MoveSpeedRatio_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D24);
		}
		static ::System::Int32* StaticGet_TriggerAttackLanded_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D28);
		}
		static ::System::Int32* StaticGet_IsTryMoving_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D2C);
		}
		static ::System::Int32* StaticGet_Float_SlidingDirection_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D30);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer2_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D34);
		}
		static ::System::Int32* StaticGet_Bool_IsExhausted_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D38);
		}
		static ::System::Int32* StaticGet_TriggerAtkA_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D3C);
		}
		static ::System::Int32* StaticGet_HitThrow_OnGround_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D40);
		}
		static ::System::Int32* StaticGet_Float_TimeScaleRatio_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D44);
		}
		static ::System::Int32* StaticGet_Trigger_Action_ReviveEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D48);
		}
		static ::System::Int32* StaticGet_TriggerHitThrowEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D4C);
		}
		static ::System::Int32* StaticGet_BoolIsStun_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D50);
		}
		static ::System::Int32* StaticGet_TriggerShoot_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D54);
		}
		static ::System::Int32* StaticGet_Int_PlayedFrameCount_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D58);
		}
		static ::System::Int32* StaticGet_HitThrowStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D5C);
		}
		static ::System::Int32* StaticGet_TriggerInstantOut_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D60);
		}
		static ::System::Int32* StaticGet_AttackSpecialL_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D64);
		}
		static ::System::Int32* StaticGet_IsHoldExQTE_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D68);
		}
		static ::System::Int32* StaticGet_HitDown_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D6C);
		}
		static ::System::Int32* StaticGet_Trigger_Convert_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D70);
		}
		static ::System::Int32* StaticGet_IsMoving_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D74);
		}
		static ::System::Int32* StaticGet_HitForwardType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D78);
		}
		static ::System::Int32* StaticGet_DodgeDummy_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D7C);
		}
		static ::System::Int32* StaticGet_AttackCounter_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D80);
		}
		static ::System::Int32* StaticGet_TriggerSwitchIn_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D84);
		}
		static ::System::Int32* StaticGet_AttackNormal03_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D88);
		}
		static ::System::Int32* StaticGet_TriggerShowUp_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D8C);
		}
		static ::System::Int32* StaticGet_ANIMATOR_STATE_TYPE_INDEX_DOWN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D90);
		}
		static ::System::Int32* StaticGet_IntAirHitIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D94);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer2_Quick_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D98);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_Camera_Temp_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9D9C);
		}
		static ::System::Int32* StaticGet_HitShake_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DA0);
		}
		static ::System::Int32* StaticGet_TriggerAid_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DA4);
		}
		static ::System::Int32* StaticGet_StageDynamicObject_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DA8);
		}
		static ::System::Int32* StaticGet_AttackNormal06_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DAC);
		}
		static ::System::Int32* StaticGet_IsHoldAtkC_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DB0);
		}
		static ::System::Int32* StaticGet_TriggerEvade_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DB4);
		}
		static ::System::Int32* StaticGet_TurnBack_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DB8);
		}
		static ::System::Int32* StaticGet_Trigger_Overload_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DBC);
		}
		static ::System::Int32* StaticGet_TriggerSlideAtkBUp_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DC0);
		}
		static ::System::Int32* StaticGet_RandomSkillGenre_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DC4);
		}
		static ::System::Int32* StaticGet_NormalizedTime_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DC8);
		}
		static ::System::Int32* StaticGet_ReflectBulletEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DCC);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer1_Quick_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DD0);
		}
		static ::System::Int32* StaticGet_Trigger_SwitchPhaseNormal_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DD4);
		}
		static ::System::Int32* StaticGet_Sprint_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DD8);
		}
		static ::System::Int32* StaticGet_TriggerEnterAtk_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DDC);
		}
		static ::System::Int32* StaticGet_EvadeEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DE0);
		}
		static ::System::Int32* StaticGet_IsMegaSkill_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DE4);
		}
		static ::System::Int32* StaticGet_ANIMATOR_STATE_TYPE_INDEX_STAND()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DE8);
		}
		static ::System::Int32* StaticGet_Trigger_Execute_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DEC);
		}
		static ::System::Int32* StaticGet_TriggerAction_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DF0);
		}
		static ::System::Int32* StaticGet_TriggerReleaseExQTE_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DF4);
		}
		static ::System::Int32* StaticGet_IntAIMoveType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DF8);
		}
		static ::System::Int32* StaticGet_TriggerWallHit_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9DFC);
		}
		static ::System::Int32* StaticGet_BoolIsCollideGround_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9E00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC__CCTOR_OFFSET))();
		}

		static ::System::Void InitAnimStaticData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_INITANIMSTATICDATA_OFFSET))();
		}

		static ::System::Void OnAssetReady()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_ONASSETREADY_OFFSET))();
		}

		static ::System::Void CleanAnimStaticData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_CLEANANIMSTATICDATA_OFFSET))();
		}

		static ::System::Void BuildTagGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDTAGGROUP_OFFSET))();
		}

		static ::System::Void BuildObjectTagMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDOBJECTTAGMAP_OFFSET))();
		}

		static ::System::Void BuildStateGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDSTATEGROUP_OFFSET))();
		}

		static ::System::Void BuildAnimStateMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDANIMSTATEMAP_OFFSET))();
		}

		static ::System::Void BuildAnimTagMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDANIMTAGMAP_OFFSET))();
		}

		static ::System::Void BuildParamMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDPARAMMAP_OFFSET))();
		}

		static ::System::String* GetStateNameByHash(::System::Int32 nStateHash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_GETSTATENAMEBYHASH_OFFSET))(nStateHash);
		}

		static ::System::String* GetParamNameByHash(::System::Int32 nParamHash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_GETPARAMNAMEBYHASH_OFFSET))(nParamHash);
		}

		::System::Boolean IsAnimatorInTag(::UnityEngine::AnimatorStateInfo stateInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_ISANIMATORINTAG_OFFSET))(this, stateInfo);
		}

		static ::System::String* GetTagNameByHash(::System::Int32 nTagHash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_GETTAGNAMEBYHASH_OFFSET))(nTagHash);
		}

		static ::System::Single NormalizedTimePercent(::System::Single fNormalizedTime)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMEPERCENT_OFFSET))(fNormalizedTime);
		}

		static ::System::Boolean NormalizedTimeLessEqual(::System::Single fTime1, ::System::Single fTime2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMELESSEQUAL_OFFSET))(fTime1, fTime2);
		}

		static ::System::Boolean NormalizedTimeGreatEqual(::System::Single fTime1, ::System::Single fTime2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMEGREATEQUAL_OFFSET))(fTime1, fTime2);
		}

		static ::System::Void TryCacheAllowPushStateHash(::System::Collections::Generic::List_1<::System::String*>* configs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_TRYCACHEALLOWPUSHSTATEHASH_OFFSET))(configs);
		}

		static ::System::Void TryCacheImmTurnFaceAnimationState(::System::Collections::Generic::List_1<::System::String*>* configs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_TRYCACHEIMMTURNFACEANIMATIONSTATE_OFFSET))(configs);
		}
	};
}
