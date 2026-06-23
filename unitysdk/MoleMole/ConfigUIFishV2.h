#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class FishCameraConfigGroupV2; }
namespace MoleMole { class FishDamageCurve; }
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUIFISHV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA84990)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIFishV2_TypeDefinitionIndex = 67310;

	class ConfigUIFishV2 : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FishPosConfig*>* FishPosConfigs; // 0x58
		::MoleMole::FishCameraConfigGroupV2* FishCameraConfigGroups; // 0x60
		::MoleMole::Config::ConfigHollowCameraShake* QTEShake; // 0x68
		::System::Single QTEShakeDuration; // 0x70
		::MoleMole::Config::ConfigHollowCameraShake* ClickShake; // 0x78
		::System::Single ClickShakeDuration; // 0x80
		::MoleMole::Config::ConfigHollowCameraShake* ShieldBreakShake; // 0x88
		::System::Single ShieldBreakShakeDuration; // 0x90
		::MoleMole::Config::ConfigHollowCameraShake* BattleQteShake; // 0x98
		::System::Single BattleQteShakeDuration; // 0xA0
		::System::String* WaitFishEffect; // 0xA8
		::System::String* StartQTEEffect; // 0xB0
		::System::String* FishFollowLeftEffect; // 0xB8
		::System::String* FishFollowRightEffect; // 0xC0
		::System::String* FishBattleEffect; // 0xC8
		::System::String* LineEffect; // 0xD0
		::System::String* WeaponPointName; // 0xD8
		::System::Single WeaponFadeTime; // 0xE0
		::System::Single LineEffectRate; // 0xE4
		::System::Single WeaponFadeSpeed; // 0xE8
		::System::String* QteBlur; // 0xF0
		::System::Single WaitStartFishTime; // 0xF8
		::System::Single WaitStartBattleTime; // 0xFC
		::UnityEngine::AnimationCurve* QTEEffectAlphaCurve; // 0x100
		::System::Single QTEEffectScale; // 0x108
		::System::Single PopAutoCloseTime; // 0x10C
		::UnityEngine::AnimationCurve* SkillDamageCurve; // 0x110
		::System::Single SkillDamageDuration; // 0x118
		::System::Collections::Generic::List_1<::MoleMole::FishMoveParam*>* FishMoveParams; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PosOffsetList; // 0x128
		::System::Collections::Generic::List_1<::MoleMole::FishDamageCurve*>* DamageCurves; // 0x130
		::System::Int32 FishModelNormalNpcId; // 0x138
		::System::Int32 FishModelSpecialNpcId; // 0x13C
		::System::Int32 FishModelNormalBossNpcId; // 0x140
		::System::Int32 FishModelSpecialBossNpcId; // 0x144
		::UnityEngine::Vector3 FishPoleEuler; // 0x148
		::System::Single CountDownTime; // 0x154
		::System::Single FinalTime; // 0x158
		::System::String* FinalPostEffect; // 0x160
		::System::Single LongPressProtectTime; // 0x168
		::System::Single MiddleBattleBeginScale; // 0x16C
		::System::Single MiddleBattleEndScale; // 0x170
		::UnityEngine::AnimationCurve* MiddleBattleScaleCurve; // 0x178
		::System::Int32 MiddleBattleResetMsDelay; // 0x180
		::System::Single ShieldBreakAttackGapTime; // 0x184
		::System::Single ShieldBreakRecoverHintTime; // 0x188
		::System::String* ShieldBreakMaterialAnimKey; // 0x190
		::System::String* BossPostEffect; // 0x198
		::System::String* BossParticleEffect; // 0x1A0
		::System::String* BossBreakPostEffect; // 0x1A8
		::System::String* BossBreakParticleEffect; // 0x1B0
		::System::Single AutoRodRefreshDelay; // 0x1B8
		::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* SuccessTimelineDic; // 0x1C0
		::System::Int32 SkillAssistReturnToPlayerDelay; // 0x1C8
		::System::Int32 SkillTriggerAnimatorAfterReturnToPlayerDelay; // 0x1CC
		::System::Int32 SkillDamageAfterAnimatorDelay; // 0x1D0
		::System::Int32 SkillBreakShieldDelay; // 0x1D4
		::System::Int32 SkillCatchFishDelay; // 0x1D8
		::System::String* SkillPlayerMaterialAnimKey; // 0x1E0
		::System::String* SkillPlayerParticleEffect; // 0x1E8
		::System::String* SkillPlayerScreenEffect; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2__CTOR_OFFSET))(this);
		}
	};
}
