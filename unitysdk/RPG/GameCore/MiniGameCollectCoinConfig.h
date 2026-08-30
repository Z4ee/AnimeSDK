#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinTemplate; }
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinWave; }
namespace RPG::GameCore { class MiniGameCollectCoin_CurveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MINIGAMECOLLECTCOINCONFIG_METHOD_2_0AB4E1863F0C51FB_OFFSET UNITYSDK_OFFSET(0x1D29E220)
#define RPG_GAMECORE_MINIGAMECOLLECTCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29E890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameCollectCoinConfig_TypeDefinitionIndex = 18591;

	class MiniGameCollectCoinConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GameID; // 0x10
		::Il2CppArray<::System::String*>* CoinPresetNameRange; // 0x18
		::System::String* GameStateLevelVarName; // 0x20
		::System::Int16 StartLevelVarValue; // 0x28
		::System::Int16 EndLevelVarValue; // 0x2A
		::System::String* SpeedRatioLevelVarName; // 0x30
		::System::Single SpeedRatioAddPerSecond; // 0x38
		::System::Single SpeedRatioMax; // 0x3C
		::System::String* HpLevelVarName; // 0x40
		::System::UInt32 SlotBatchCount; // 0x48
		::System::UInt32 CurveSlotCount; // 0x4C
		::System::Single WaveTime; // 0x50
		::Il2CppArray<::RPG::GameCore::MiniGameCollectCoin_CurveConfig*>* CurveConfigs; // 0x58
		::Il2CppArray<::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate*>* FireCoinTemplate; // 0x60
		::Il2CppArray<::RPG::GameCore::FiveDimMiniGameCollectCoinWave*>* WaveConfig; // 0x68
		::System::Boolean EnablePersistentWaveConfig; // 0x70
		::RPG::GameCore::FiveDimMiniGameCollectCoinWave* PersistentWaveConfig; // 0x78
		::System::Single PersistentWaveCoinSpeedRandomRatio; // 0x80
		::System::Single PersistentWaveTime; // 0x84
		::System::UInt32 PersistentWaveSlotCoolDown; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMECOLLECTCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0AB4E1863F0C51FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameCollectCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameCollectCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMECOLLECTCOINCONFIG_METHOD_2_0AB4E1863F0C51FB_OFFSET))(a1, a2);
		}
	};
}
