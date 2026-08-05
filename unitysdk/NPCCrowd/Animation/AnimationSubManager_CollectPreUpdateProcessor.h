#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_BUILDTURNAROUNDFLAGS_OFFSET UNITYSDK_OFFSET(0x1064DBD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1064E1D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1064D130)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0x1064B810)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1064D630)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTSTATEMACHINEDATA_OFFSET UNITYSDK_OFFSET(0x1064CA50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1064A680)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1064A670)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0x10653D30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x106553C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEMONTAGE_OFFSET UNITYSDK_OFFSET(0x10653620)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLETURNINGAROUND_OFFSET UNITYSDK_OFFSET(0x10652630)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWALKINGSTAIRS_OFFSET UNITYSDK_OFFSET(0x10652EC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWARPING_OFFSET UNITYSDK_OFFSET(0x10651FF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x1064A6E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1064A800)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_REFRESHANIMATIONVISIBLEDATA_OFFSET UNITYSDK_OFFSET(0x1064C900)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x106558D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x106558B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex = 88322;

	class AnimationSubManager_CollectPreUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		static ::Il2CppArray<::System::ValueTuple_2<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone, ::System::Func_2<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::String*>*>>** StaticGet_TurnAroundBoneMap()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone, ::System::Func_2<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::String*>*>>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x49520);
		}
		static ::System::Int32* StaticGet_IsMovingHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10DF0);
		}
		static ::System::Int32* StaticGet_TriggerTurnAroundHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10DF4);
		}
		static ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>* StaticGet_TurnAroundBoneFlags()
		{
			return (::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10DF8);
		}
		static ::System::Int32* StaticGet_IsOnStairsHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10DFC);
		}
		static ::System::Int32* StaticGet_IntMoveValueHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10E00);
		}
		static ::System::Int32* StaticGet_TurnAngleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10E04);
		}
		static ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>* StaticGet_StopBoneFlags()
		{
			return (::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10E08);
		}
		// static const ::System::String* IsMoving; // 0x0
		// static const ::System::String* TriggerTurnAround; // 0x0
		// static const ::System::String* TurnAngle; // 0x0
		// static const ::System::String* IsOnStairs; // 0x0
		// static const ::System::String* IntMoveValue; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CCTOR_OFFSET))();
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		::System::Boolean CollectData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTDATA_OFFSET))(this, manager);
		}

		static ::System::Void RefreshAnimationVisibleData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_REFRESHANIMATIONVISIBLEDATA_OFFSET))(manager);
		}

		static ::System::Boolean CollectStateMachineData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTSTATEMACHINEDATA_OFFSET))(manager);
		}

		static ::System::Boolean CollectAvatarData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTAVATARDATA_OFFSET))(manager);
		}

		static ::System::Boolean CollectMontageData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTMONTAGEDATA_OFFSET))(manager);
		}

		static ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> BuildTurnAroundFlags(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_BUILDTURNAROUNDFLAGS_OFFSET))(config);
		}

		static ::System::Void CollectAnimationDataFromComponent(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMCOMPONENT_OFFSET))(animation, avatar);
		}

		static ::System::Void HandleWarping(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWARPING_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleTurningAround(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLETURNINGAROUND_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleWalkingStairs(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWALKINGSTAIRS_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleMontage(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Int32 instanceId, ::System::Boolean& addedClip)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEMONTAGE_OFFSET))(animation, avatar, instanceId, addedClip);
		}

		static ::System::Void HandleBlendShape(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Int32 instanceId, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEBLENDSHAPE_OFFSET))(animation, avatar, instanceId, forceRefresh);
		}

		static ::System::Void HandleLookAtIK(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLELOOKATIK_OFFSET))(animation, instanceId);
		}
	};
}
