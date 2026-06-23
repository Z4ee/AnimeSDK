#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CHARACTERCOMMONDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x12B97910)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterCommonDatas_TypeDefinitionIndex = 81646;

	class CharacterCommonDatas : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AllowPushAnimationState; // 0x58
		::UnityEngine::AnimationCurve* PushCurve; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* ForceImmediatelyTurnFaceAnimationState; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* RunStateAnimationStateLoop; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* RunStateAnimationStateEnd; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* WalkStateAnimationStateLoop; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* WalkStateAnimationStateEnd; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* RetreatAnimationTag; // 0x90
		::System::Collections::Generic::List_1<::System::String*>* AIAnimationStateTag; // 0x98
		::System::Collections::Generic::List_1<::System::String*>* ImmobileAnimationStateTag; // 0xA0
		::System::Collections::Generic::List_1<::System::String*>* StopClearAtkAnimationStateTag; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* ImmediateClearAtkAnimationStateTag; // 0xB0
		::System::Collections::Generic::List_1<::System::String*>* DelayClearAtkAnimationStateTag; // 0xB8
		::System::Collections::Generic::List_1<::System::String*>* CameraAvatarStableTag; // 0xC0
		::System::Collections::Generic::List_1<::System::String*>* CameraAvatarMovementTag; // 0xC8
		::System::Collections::Generic::List_1<::System::String*>* ContinuseAttackPatternInterruptTag; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* DestroyEffectHitStateTag; // 0xD8
		::System::Collections::Generic::List_1<::System::String*>* InvincibilityForbidFilterTag; // 0xE0
		::System::String* StandbyTag; // 0xE8
		::System::String* WallBounceTag; // 0xF0
		::System::String* HitTag; // 0xF8
		::System::String* ForceIgnoreOnStageLimitTag; // 0x100
		::System::Collections::Generic::List_1<::System::String*>* PerfectSwitchMonsterTagList; // 0x108
		::System::Collections::Generic::List_1<::System::String*>* ParryAidAttackTag; // 0x110
		::System::Collections::Generic::List_1<::System::String*>* AssaultAidAttackTag; // 0x118
		::System::Collections::Generic::List_1<::System::String*>* EvadeAidAttackTag; // 0x120
		::System::Collections::Generic::List_1<::System::String*>* SwitchAidAttackTag; // 0x128
		::System::Collections::Generic::List_1<::System::String*>* AICanNotMoveTag; // 0x130
		::System::Collections::Generic::List_1<::System::String*>* AvatarWallCollisionTag; // 0x138
		::System::Collections::Generic::List_1<::System::String*>* OffScreenSkillTag; // 0x140
		::System::String* ParryAidAttackPropertyTag; // 0x148
		::System::String* MultiParryAidAttackPropertyTag; // 0x150
		::System::Single PenetrationSperationRatio; // 0x158
		::System::Single BangbooPartyGamePSRatio; // 0x15C
		::System::String* MainCityCharOutlinekey; // 0x160
		::System::String* MainCityCharSecondkey; // 0x168
		::System::String* MainCityCharColorCorrectionkey; // 0x170
		::System::String* MainCityCharScreenEffectkey; // 0x178
		::System::String* MainCityCharEffectPrefabkey01; // 0x180
		::System::String* MainCityCharEffectPrefabkey02; // 0x188
		::System::Int32 MainCityCharDelayFrameCounter; // 0x190
		::System::String* UISwitchSkinOutlinekey; // 0x198
		::System::String* UISwitchSkinSecondkey; // 0x1A0
		::System::String* UISwitchSkinColorCorrectionkey; // 0x1A8
		::System::String* UISwitchSkinEffectPrefabkey; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERCOMMONDATAS__CTOR_OFFSET))(this);
		}
	};
}
