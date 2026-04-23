#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/RPG/GameCore/StageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectMutexConfigData; }
namespace RPG::GameCore { class EffectSurfaceTypeConfig; }
namespace RPG::GameCore { class FieldEffectBudgetConfig; }
namespace RPG::GameCore { class FilterSystemConflictTypes; }
namespace RPG::GameCore { class ModifierAttachEffect; }
namespace RPG::GameCore { class ModifierBindEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EFFECTJSONCONFIG_METHOD_2_6D068E337B4A253A_OFFSET UNITYSDK_OFFSET(0x188966B0)
#define RPG_GAMECORE_EFFECTJSONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18896ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectJsonConfig_TypeDefinitionIndex = 15605;

	class EffectJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* EffectPriorityMap; // 0x10
		::Il2CppArray<::System::String*>* EffectHideWhiteList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EffectSurfaceTypeConfig*>* EffectSurfaceTypeMap; // 0x20
		::Il2CppArray<::System::UInt32>* TesellationCharacterIDList; // 0x28
		::Il2CppArray<::System::UInt32>* TesellationMonsterUniqueIDList; // 0x30
		::Il2CppArray<::System::UInt32>* MaterialScaleHugeMonsterIDList; // 0x38
		::Il2CppArray<::System::UInt32>* MaterialScaleHugeMonsterUniqueIDList; // 0x40
		::Il2CppArray<::System::String*>* CharacterEnhancedStateSuffixList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ModifierBindEffectConfig*>* ModifierBehaviorFlagBindEffectMap; // 0x50
		::RPG::GameCore::ModifierAttachEffect* ModifierBindEffectAttachConfig; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EffectMutexConfigData*>* EffectMutexMap; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PPEffectFilterType, ::RPG::GameCore::FilterSystemConflictTypes*>* FilterSystemConflictMap; // 0x68
		::Il2CppArray<::System::String*>* ForceSyncLoadEffectList; // 0x70
		::System::Int32 FadeOutMutextMaxCount; // 0x78
		::System::Single FieldEffectSoftZOffset; // 0x7C
		::RPG::GameCore::FieldEffectBudgetConfig* FieldEffectBudgetConfig; // 0x80
		::System::Int32 HighQualityHitEffectMaxCountPerHit; // 0x88
		::System::Int32 LowQualityHitEffectMaxCountPerHit; // 0x8C
		::Il2CppArray<::RPG::GameCore::StageType>* EnableLodLowStageTypes; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTJSONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6D068E337B4A253A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectJsonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectJsonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTJSONCONFIG_METHOD_2_6D068E337B4A253A_OFFSET))(a1, a2);
		}
	};
}
