#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelDimensionCategory.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorCustomDataConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class SavedValueDimensionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELDIMENSIONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19871A00)
#define RPG_GAMECORE_LEVELDIMENSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19871E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionInfo_TypeDefinitionIndex = 16496;

	class LevelDimensionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* OverrideEnviroProfile; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>* OverrideBattleAreaList; // 0x20
		::System::String* OverrideCameraPrefabPath; // 0x28
		::RPG::GameCore::LevelDimensionCategory Category; // 0x30
		::RPG::GameCore::FloorCustomDataConfig* OverrideCustomData; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SavedValueDimensionConfig*>* SavedValueConfigDict; // 0x40
		::System::Boolean IsExclusiveSaveMapSection; // 0x48
		::System::Boolean UnlockAllMapSectionOnInitial; // 0x49
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x50
		::System::UInt32 OverrideStartGroupID; // 0x58
		::System::UInt32 OverrideStartAnchorID; // 0x5C
		::System::Boolean DisableExport; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
