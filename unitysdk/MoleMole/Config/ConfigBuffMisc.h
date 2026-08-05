#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CauseDisorderConfig.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_ConfigLumenMisc.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_ConfigTagBuffCdTime.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_DamageElementAbnormalItem.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

namespace MoleMole::Config { class ConfigBurnBuff; }
namespace MoleMole::Config { class ConfigCatalysisBuff; }
namespace MoleMole::Config { class ConfigChaosBuff; }
namespace MoleMole::Config { class ConfigCommonBuff; }
namespace MoleMole::Config { class ConfigElectricBuff; }
namespace MoleMole::Config { class ConfigErosionBuff; }
namespace MoleMole::Config { class ConfigFrozenBuff; }
namespace MoleMole::Config { class ConfigIgniteBuff; }
namespace MoleMole::Config { class ConfigOverloadBuff; }
namespace MoleMole::Config { class ConfigStrikeBuff; }
namespace MoleMole::Config { class ConfigVariantElementOverrideBuff; }
namespace MoleMole::Config { class ConfigWindBuff; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BD4F840)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4FC10)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BD4FEE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_TypeDefinitionIndex = 71674;

	class ConfigBuffMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigFrozenBuff* FrozenBuffConfig; // 0x58
		::MoleMole::Config::ConfigElectricBuff* ElectricBuffConfig; // 0x60
		::MoleMole::Config::ConfigBurnBuff* BurnBuffConfig; // 0x68
		::MoleMole::Config::ConfigErosionBuff* ErosionBuffConfig; // 0x70
		::MoleMole::Config::ConfigChaosBuff* ChaosBuffConfig; // 0x78
		::MoleMole::Config::ConfigIgniteBuff* IgniteBuffConfig; // 0x80
		::MoleMole::Config::ConfigOverloadBuff* OverloadBuffConfig; // 0x88
		::MoleMole::Config::ConfigStrikeBuff* StrikeBuffConfig; // 0x90
		::MoleMole::Config::ConfigCommonBuff* FrostbiteBuffConfig; // 0x98
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigFrozenBuff*>* FrozenBuffConfigs; // 0xA0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigElectricBuff*>* ElectricBuffConfigs; // 0xA8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigBurnBuff*>* BurnBuffConfigs; // 0xB0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigErosionBuff*>* ErosionBuffConfigs; // 0xB8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigChaosBuff*>* ChaosBuffConfigs; // 0xC0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigIgniteBuff*>* IgniteBuffConfigs; // 0xC8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigOverloadBuff*>* OverloadBuffConfigs; // 0xD0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigStrikeBuff*>* StrikeBuffConfigs; // 0xD8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCommonBuff*>* FrostbiteBuffConfigs; // 0xE0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigWindBuff*>* WindBuffConfigs; // 0xE8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCatalysisBuff*>* CatalysisBuffConfigs; // 0xF0
		::System::Single ShowReplaceBuffCDTime; // 0xF8
		::System::String* AnimEventBuffAbilityName; // 0x100
		::System::String* AnimEventBuffPrefix; // 0x108
		::System::String* ElementAbnormalBuffAbilityName; // 0x110
		::System::String* ElementAbnormalBuffPrefix; // 0x118
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::MoleMole::Config::ConfigBuffMisc_DamageElementAbnormalItem>* AbnormalElementItems; // 0x120
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigVariantElementOverrideBuff*>*>* VariantElementBuffInfos; // 0x128
		::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>* CauseDisorderBuffGroups; // 0x130
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::CauseDisorderConfig>* CauseDisorderInfos; // 0x138
		::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>* CauseDisorderBuffGroupsByAnimEvent; // 0x140
		::System::Int32 DisorderBuffID; // 0x148
		::System::Single DisorderProtectTime; // 0x14C
		::System::String* DisorderAudio; // 0x150
		::System::Collections::Generic::List_1<::System::Int32>* MuteDisorderBuffIds; // 0x158
		::System::Int32 CatalysisBuffID; // 0x160
		::System::Single CatalysisProtectTime; // 0x164
		::MoleMole::Config::ConfigBuffMisc_ConfigLumenMisc LumenConfig; // 0x168
		::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* AbnormalElements; // 0x188
		::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* SwitchPhaseRemoveBuffGroupNames; // 0x190
		::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* NoHitEffectBuff; // 0x198
		::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* BreakLevelHitBuff; // 0x1A0
		::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* OverrideBuffHitForwardType; // 0x1A8
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBuffMisc_ConfigTagBuffCdTime>* TagBuffCdTimes; // 0x1B0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>* BuffGroupListPatterns; // 0x1B8
		::Il2CppArray<::MoleMole::Config::BuffGroupName>* buffGroupKillBlackListTypes; // 0x1C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
