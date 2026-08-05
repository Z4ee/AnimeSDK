#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceScreenEffect.h"
#include "unitysdk/MoleMole/Config/ConfigGachaTvResultGroupEffects.h"

namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EC860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceEffects_TypeDefinitionIndex = 83454;

	class ConfigGachaPerformanceEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single GaussianBlurTilling; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* PersistentScreenEffects; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* RaritySScreenEffects; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* RaritySScreenEffects_ItemStage; // 0x70
		::System::Single RaritySScreenEffectsOffset; // 0x78
		::MoleMole::Config::ConfigEntityGaussianBlurEffect* GaussianBlurResetParams; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* StageRotateScreenEffects; // 0x88
		::System::String* GachaRewardWindowEffect; // 0x90
		::System::Single ShowGachaRewardWindowEffectDelay; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>* SpeedUpScreenEffects; // 0xA0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>* TvRarityEffShowOffset; // 0xA8
		::System::String* CamRarityEff_Openning; // 0xB0
		::System::String* CamRarityEff_4Shot1; // 0xB8
		::System::String* CamRarityEff_4Shot4; // 0xC0
		::System::String* CamRarityEff_ItemStage; // 0xC8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>* CamRarityEffs_ItemStage; // 0xD0
		::System::String* CamRarityEff_Common; // 0xD8
		::System::String* CamEff_Rotate; // 0xE0
		::System::Single CamEff_Rotate_Delay_HalfCircle; // 0xE8
		::System::Single CamEff_Rotate_Delay_Circle; // 0xEC
		::System::String* SpeedUpCamEffect; // 0xF0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>* TvRarityEffAnimShowOffset; // 0xF8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>* TvRarityEffAnimations; // 0x100
		::System::String* TvCommonEffAnim_ItemStage; // 0x108
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaTvResultGroupEffects>* GachaTvResultGroupEffects; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
