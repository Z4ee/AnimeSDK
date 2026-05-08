#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigMultiplayer_GameplayTagSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17452150)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x17452930)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17452CA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMultiplayer_TypeDefinitionIndex = 78797;

	class ConfigMultiplayer : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* StandAloneTag; // 0x58
		::System::String* MPAuthorityTag; // 0x60
		::System::String* MPNonAuthorityTag; // 0x68
		::System::String* MPRobotTag; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>* AnimatorZoneTagWhiteDict; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>* AnimatorZoneTagBlackDict; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>* AnimatorEventTagWhiteDict; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>* AnimatorEventTagBlackDict; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>* AnimatorZoneTagHashWhiteDict; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>* AnimatorZoneTagHashBlackDict; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>* AnimatorEventEntryTagHashWhiteDict; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>* AnimatorEventEntryTagHashBlackDict; // 0xB0
		::System::Single MonsterDamageBreakOccupyTime; // 0xB8
		::System::Int32 TotalReviveCount; // 0xBC
		::System::Single AvatarOverlapDitherDistance; // 0xC0
		::System::String* AvatarOverlapDitherKey; // 0xC8
		::System::Single AvatarOverlapDitherTime; // 0xD0
		::System::Single FeverObtainRatio; // 0xD4
		::System::Single SkillPointRecoverRatio; // 0xD8
		::System::Single PerfectSwitchChargeRecoveryRatio; // 0xDC
		::System::Int32 MaxPlayerResetStunCount; // 0xE0
		::System::Single ExQTELastKillWaitTime; // 0xE4
		::System::Int32 ParryOverrideSwitchIndex; // 0xE8
		::Il2CppArray<::System::String*>* InPlaceParryZoneTags; // 0xF0
		::System::Int32 AidAttackOpenWindowFrameCount; // 0xF8
		::System::String* ParryCommonAttackAnimEventID; // 0x100
		::System::Int32 ParrySimulateClearFrame; // 0x108
		::System::Single InPlaceParryOverrideFadeTime; // 0x10C
		::System::Single AidAttackValidAngleRange; // 0x110
		::System::Single SmallAidAttackSelectPositionAngleRange; // 0x114
		::System::Single MiddleAidAttackSelectPositionAngleRange; // 0x118
		::System::Single LargeAidAttackSelectPositionAngleRange; // 0x11C
		::System::Int32 SmallAidAttackSidePositionCount; // 0x120
		::System::Int32 MiddleAidAttackSidePositionCount; // 0x124
		::System::Int32 LargeAidAttackSidePositionCount; // 0x128
		::Il2CppArray<::System::String*>* IgnoreAidAttackPickMultPlayerPositionTags; // 0x130
		::System::String* AvatarTagIgnoreMonsterOverridePerfectSwitchPos; // 0x138
		::System::Int32 MPSoloSwitchMaxSwitchPositionSearchDistance; // 0x140
		::System::Single ItemReviveHPRatio; // 0x144
		::System::Single HelpReviveHPRatio; // 0x148
		::System::Single InitialMaxEnergyAfterDeath; // 0x14C
		::System::Single InitialEnergyAfterDeath; // 0x150
		::System::Single LoseEnergyPerSecAfterDeath; // 0x154
		::System::Single recoverCheckRadius; // 0x158
		::System::Single RecoverEnergyPerSec; // 0x15C
		::System::String* LinkArrowCircleEffName; // 0x160
		::System::String* LinkArrowEffName; // 0x168
		::System::String* ReviveAlertCircleEffName; // 0x170
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* RecoverRatioByNumber; // 0x178
		::Foundation::AssetPath MonsterHatredLineResPath; // 0x180
		::Foundation::AssetPath MonsterHatredHeadQuadResPath; // 0x190
		::System::String* MonsterHeadLineTag; // 0x1A0
		::System::String* MonsterHideHeadLineTag; // 0x1A8
		::System::String* HatredLineMonsterLinkAttachPoint; // 0x1B0
		::System::String* HatredLinePlayerLinkAttachPoint; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
