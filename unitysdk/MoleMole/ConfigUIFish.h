#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class FishCameraConfigGroup; }
namespace MoleMole { class FishDamageCurve; }
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUIFISH__CTOR_OFFSET UNITYSDK_OFFSET(0xE9861B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIFish_TypeDefinitionIndex = 53165;

	class ConfigUIFish : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FishPosConfig*>* FishPosConfigs; // 0x58
		::MoleMole::FishCameraConfigGroup* FishCameraConfigGroups; // 0x60
		::MoleMole::Config::ConfigHollowCameraShake* QTEShake; // 0x68
		::System::Single QTEShakeDuration; // 0x70
		::MoleMole::Config::ConfigHollowCameraShake* ClickShake; // 0x78
		::System::Single ClickShakeDuration; // 0x80
		::System::String* WaitFishEffect; // 0x88
		::System::String* StartQTEEffect; // 0x90
		::System::String* FishFollowLeftEffect; // 0x98
		::System::String* FishFollowRightEffect; // 0xA0
		::System::String* FishBattleEffect; // 0xA8
		::System::String* LineEffect; // 0xB0
		::System::String* WeaponPointName; // 0xB8
		::System::Single WeaponFadeTime; // 0xC0
		::System::Single LineEffectRate; // 0xC4
		::System::Single WeaponFadeSpeed; // 0xC8
		::System::String* QteBlur; // 0xD0
		::System::Single WaitStartFishTime; // 0xD8
		::System::Single WaitStartBattleTime; // 0xDC
		::UnityEngine::AnimationCurve* QTEEffectAlphaCurve; // 0xE0
		::System::Single QTEEffectScale; // 0xE8
		::System::Single PopAutoCloseTime; // 0xEC
		::UnityEngine::AnimationCurve* SkillDamageCurve; // 0xF0
		::System::Single SkillDamageDuration; // 0xF8
		::System::Collections::Generic::List_1<::MoleMole::FishMoveParam*>* FishMoveParams; // 0x100
		::UnityEngine::Vector3 LeftPosOffset; // 0x108
		::UnityEngine::Vector3 RightPosOffset; // 0x114
		::System::Collections::Generic::List_1<::MoleMole::FishDamageCurve*>* DamageCurves; // 0x120
		::System::Int32 FishModelNormalNpcId; // 0x128
		::System::Int32 FishModelSpecialNpcId; // 0x12C
		::UnityEngine::Vector3 FishPoleEuler; // 0x130
		::System::Single CountDownTime; // 0x13C
		::System::Single FinalTime; // 0x140
		::System::String* FinalPostEffect; // 0x148
		::System::String* BossPostEffect; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISH__CTOR_OFFSET))(this);
		}
	};
}
