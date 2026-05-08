#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCD3CD60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTAVATARDATA_OFFSET UNITYSDK_OFFSET(0xCD3C340)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0xCD3AB00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0xCD3C7C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTSTATEMACHINEDATA_OFFSET UNITYSDK_OFFSET(0xCD3BC90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xCD39D10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xCD39D00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0xCD42BD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLELOOKATIK_OFFSET UNITYSDK_OFFSET(0xCD439C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEMONTAGE_OFFSET UNITYSDK_OFFSET(0xCD41FB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLETURNINGAROUND_OFFSET UNITYSDK_OFFSET(0xCD40FF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWALKINGSTAIRS_OFFSET UNITYSDK_OFFSET(0xCD41880)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWARPING_OFFSET UNITYSDK_OFFSET(0xCD409B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xCD39D70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0xCD39E90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_REFRESHANIMATIONVISIBLEDATA_OFFSET UNITYSDK_OFFSET(0xCD3BB40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD43ED0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCD43EB0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex = 70532;

	class AnimationSubManager_CollectPreUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		static ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>* StaticGet_StopBoneFlags()
		{
			return (::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFFA0);
		}
		static ::System::Int32* StaticGet_IsOnStairsHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFFA4);
		}
		static ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>* StaticGet_TurnAroundBoneFlags()
		{
			return (::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFFA8);
		}
		static ::System::Int32* StaticGet_TurnAngleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFFAC);
		}
		static ::System::Int32* StaticGet_IsMovingHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFFB0);
		}
		static ::System::Int32* StaticGet_TriggerTurnAroundHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFFB4);
		}
		static ::System::Int32* StaticGet_IntMoveValueHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0xFFB8);
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
