#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarEffectsPreloadItem; }
namespace RPG::GameCore { class BattleEventEffectsPreloadList; }
namespace RPG::GameCore { class MonsterEffectsPreloadItem; }
namespace RPG::GameCore { class PreloadItem; }
namespace RPG::GameCore { class PreloadItemList; }
namespace RPG::GameCore { class SummonMonsterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLEPRELOADCONFIG_METHOD_2_C84071CA97A15959_OFFSET UNITYSDK_OFFSET(0x16FDF2A0)
#define RPG_GAMECORE_BATTLEPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDF710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePreloadConfig_TypeDefinitionIndex = 14977;

	class BattlePreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* CommonAssetPreloadList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterEffectsPreloadItem*>* MonsterEffectPreloadConfigMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarEffectsPreloadItem*>* AvatarEffectPreloadConfigMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SummonMonsterConfig*>* SummonMonsterPreloadConfigMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleEventEffectsPreloadList*>* BattleEventEffectPreloadConfigMap; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleEventEffectsPreloadList*>* BattleEventMonsterEffectPreloadConfigMap; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PreloadItemList*>* BattleStanceBreakEffectPreloadConfigMap; // 0x40
		::Il2CppArray<::RPG::GameCore::PreloadItem*>* BattleUIPreloadList; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::RPG::GameCore::PreloadItemList*>* BattleUIPreloadListByStageType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C84071CA97A15959(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPRELOADCONFIG_METHOD_2_C84071CA97A15959_OFFSET))(a1, a2);
		}
	};
}
