#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/RPG/GameCore/GroupSaveType.h"
#include "unitysdk/RPG/GameCore/HoYoGroupType.h"
#include "unitysdk/RPG/GameCore/HoyoGroupStreamingTemplateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelGroupLoadSide.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace RPG::GameCore { class GroupState; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelAudienceInfo; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class LevelCurveInfo; }
namespace RPG::GameCore { class LevelDistrictInfo; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelGroupAtmosphereLoadConditionSet; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class LevelGroupRandomInitInfo; }
namespace RPG::GameCore { class LevelGroupSavedValueConditionSet; }
namespace RPG::GameCore { class LevelGroupSystemUnlockConditionSet; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPathwayInfo; }
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace RPG::GameCore { class LevelWaypointInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTLEVELGROUPINFOBASE_METHOD_2_6FCB1E01C18E4715_OFFSET UNITYSDK_OFFSET(0x19BECA60)
#define RPG_GAMECORE_RTLEVELGROUPINFOBASE_METHOD_2_CB070DEF2CA7CA6C_OFFSET UNITYSDK_OFFSET(0x19BEC8A0)
#define RPG_GAMECORE_RTLEVELGROUPINFOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEC880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelGroupInfoBase_TypeDefinitionIndex = 16484;

	class RtLevelGroupInfoBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GroupName; // 0x10
		::RPG::GameCore::GroupCategory Category; // 0x18
		::System::String* ConfigPrefabPath; // 0x20
		::System::String* LevelGraph; // 0x28
		::System::String* AreaAnchorName; // 0x30
		::RPG::GameCore::GroupSaveType SaveType; // 0x38
		::RPG::GameCore::LevelGroupMissionConditionSet* LoadCondition; // 0x40
		::RPG::GameCore::LevelGroupMissionConditionSet* UnloadCondition; // 0x48
		::RPG::GameCore::LevelGroupMissionConditionSet* ForceUnloadCondition; // 0x50
		::RPG::GameCore::LevelGroupSavedValueConditionSet* SavedValueCondition; // 0x58
		::RPG::GameCore::LevelGroupSystemUnlockConditionSet* SystemUnlockCondition; // 0x60
		::RPG::GameCore::LevelGroupAtmosphereLoadConditionSet* AtmosphereCondition; // 0x68
		::System::Boolean UseCustomSaveData; // 0x70
		::System::Boolean IsPendedLoad; // 0x71
		::System::Boolean IsPendedUnload; // 0x72
		::RPG::GameCore::LevelGroupLoadSide LoadSide; // 0x74
		::System::Boolean LoadOnInitial; // 0x78
		::System::UInt32 OwnerMainMissionID; // 0x7C
		::Il2CppArray<::System::String*>* AirlineInitPrefabPaths; // 0x80
		::RPG::GameCore::LevelGroupRandomInitInfo* RandomInit; // 0x88
		::Il2CppArray<::RPG::GameCore::GroupState*>* GroupStateList; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GroupPropertyConfig*>* GroupPropertyMap; // 0x98
		::System::UInt32 GroupRefreshID; // 0xA0
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0xA8
		::Il2CppArray<::System::UInt32>* ConflictIDList; // 0xB0
		::System::Boolean IsHoyoGroup; // 0xB8
		::RPG::GameCore::HoYoGroupType HoYoGroupType; // 0xBC
		::RPG::GameCore::HoyoGroupStreamingTemplateType StreamingTemplateType; // 0xC0
		::RPG::GameCore::GraphicQuality HoyoGroupLowestLoadPlatformQuality; // 0xC4
		::Il2CppArray<::System::UInt32>* ConflictWhiteList; // 0xC8
		::System::Boolean EnableGroupAI; // 0xD0
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0xD8
		::System::Boolean IsSaveNeedMergeBack; // 0xE0
		::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>* AnchorList; // 0xE8
		::Il2CppArray<::RPG::GameCore::LevelMonsterInfo*>* MonsterList; // 0xF0
		::Il2CppArray<::RPG::GameCore::LevelPropInfo*>* PropList; // 0xF8
		::Il2CppArray<::RPG::GameCore::LevelDistrictInfo*>* DistrictList; // 0x100
		::Il2CppArray<::RPG::GameCore::LevelWaypointInfo*>* WaypointList; // 0x108
		::Il2CppArray<::RPG::GameCore::LevelPathwayInfo*>* PathwayList; // 0x110
		::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>* BattleAreaList; // 0x118
		::Il2CppArray<::RPG::GameCore::LevelNPCInfo*>* NPCList; // 0x120
		::Il2CppArray<::RPG::GameCore::LevelCrowdInfo*>* CrowdList; // 0x128
		::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>* PedestrianList; // 0x130
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* PedestrianV2List; // 0x138
		::Il2CppArray<::RPG::GameCore::LevelAudienceInfo*>* AudienceList; // 0x140
		::Il2CppArray<::RPG::GameCore::LevelSmartObjectInfo*>* SmartObjectList; // 0x148
		::Il2CppArray<::RPG::GameCore::LevelCurveInfo*>* CurveList; // 0x150
		::Il2CppArray<::RPG::GameCore::LevelLittleGameInfo*>* LittleGameList; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFOBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB070DEF2CA7CA6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInfoBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInfoBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFOBASE_METHOD_2_CB070DEF2CA7CA6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6FCB1E01C18E4715(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInfoBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInfoBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFOBASE_METHOD_2_6FCB1E01C18E4715_OFFSET))(a1, a2);
		}
	};
}
