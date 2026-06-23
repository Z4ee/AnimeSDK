#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/ParallelTimelineTimeScaleType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TLStartEndEntityAnimatorParamControl; }
namespace MoleMole { class TimelineTransformCalculatorBase; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINEDATAEXTRA_GETIDS_OFFSET UNITYSDK_OFFSET(0x1740D630)
#define MOLEMOLE_TIMELINEDATAEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x1740D770)

namespace MoleMole
{
	inline static constexpr unsigned int TimelineDataExtra_TypeDefinitionIndex = 64267;

	class TimelineDataExtra : public ::System::Object
	{
	public:
		::System::Boolean EntityRenderVisible; // 0x10
		::System::Boolean IncludeAllEntities; // 0x11
		::System::Boolean IncludeAllLocalAvatar; // 0x12
		::System::Boolean IncludeAllServerEntities; // 0x13
		::System::Collections::Generic::List_1<::System::Int32>* ServerEntityTags; // 0x18
		::System::String* InvisibleTargetDataKey; // 0x20
		::Il2CppArray<::System::String*>* InvisibleTargetDataKeys; // 0x28
		::System::Boolean NeedClearEffectOnStartEnd; // 0x30
		::System::String* EffectCasterTargetDataKey; // 0x38
		::System::Boolean NeedClearBulletEffectOnStart; // 0x40
		::System::Boolean NeedClearCameraEffectOnStart; // 0x41
		::System::Boolean NeedResetAnimOnStartEnd; // 0x42
		::System::String* ResetAnimTargetDataKey; // 0x48
		::System::Boolean DynamicObjectSwitchOpen; // 0x50
		::System::Boolean DynamicObjectActive; // 0x51
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* TagList; // 0x58
		::MoleMole::GameplayTag TargetLayer; // 0x60
		::System::Boolean DisableHizCulling; // 0x70
		::System::Boolean ForceNPCLOD; // 0x71
		::System::Boolean ForceOpenDither; // 0x72
		::System::Boolean muteCameraDither; // 0x73
		::System::Boolean muteAllCameraDither; // 0x74
		::System::Boolean muteLocalAvatarCameraDither; // 0x75
		::System::Boolean muteAvatarCameraDither; // 0x76
		::System::Boolean muteMonsterCameraDither; // 0x77
		::System::Boolean muteBuddyCameraDither; // 0x78
		::System::Boolean muteCustomAbilityTarget; // 0x79
		::System::Collections::Generic::List_1<::System::String*>* CustomAbilityTargetKeyList; // 0x80
		::System::Boolean ForceSyncLoad; // 0x88
		::System::Boolean ForceDisableAllColliderInTimelinePrefab; // 0x89
		::System::Boolean muteBattleScreenEffect; // 0x8A
		::System::Boolean disableLightDistanceCulling; // 0x8B
		::System::Boolean ForceDisableRuntimeRebindEntityComp; // 0x8C
		::System::Boolean ForceStopAllOngoingChat; // 0x8D
		::System::String* ParentTransformEntityTag; // 0x90
		::System::String* ParentTransformSceneObjTag; // 0x98
		::MoleMole::TimelineTransformCalculatorBase* RootTransformCalculator; // 0xA0
		::System::Boolean IsFollowParentTransform; // 0xA8
		::System::Boolean CameraApplyOnTransitionYRatio; // 0xA9
		::System::Single CameraOnTransitionYRatioValue; // 0xAC
		::System::Single CameraOnTransitionPolarAngle; // 0xB0
		::System::Boolean AutoCalRecoverPolarAngle; // 0xB4
		::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::TLStartEndEntityAnimatorParamControl*>* EntityAnimatorParamControlDict; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RuntimeTimelineBindingReplaceDict; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RuntimeTimelineSyncTransformDict; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RuntimeTimelineObjReplaceDict; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RuntimeTimelineObjTransformDict; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RootTransformEntityTagRebindDict; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GameplayTag>* RootTransformSceneObjTagRebindDict; // 0xE8
		::System::Boolean EnableSeamlessTimeline; // 0xF0
		::System::Boolean EnableSeamlessTimelineBlendIn; // 0xF1
		::Cinemachine::CinemachineBlendDefinition SeamlessTimelineCameraCustomBlendIn; // 0xF8
		::System::Boolean EnableSeamlessTimelineBlendOut; // 0x108
		::Cinemachine::CinemachineBlendDefinition SeamlessTimelineCameraCustomBlendOut; // 0x110
		::System::Boolean UsePipelineBlendCamera; // 0x120
		::System::Boolean skipTimelineCutsceneFadeOut; // 0x121
		::MoleMole::ParallelTimelineTimeScaleType ParallelTimelineTickTimeScaleType; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATAEXTRA__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* GetIDs()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATAEXTRA_GETIDS_OFFSET))();
		}
	};
}
