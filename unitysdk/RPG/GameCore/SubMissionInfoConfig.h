#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BeginHintType.h"
#include "unitysdk/RPG/GameCore/FinishWayCheckType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionActivePlaneType.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/RPG/GameCore/MissionProgressType.h"
#include "unitysdk/RPG/GameCore/MissionVerseParam.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/RPG/GameCore/QuestParaType.h"
#include "unitysdk/RPG/GameCore/SubmissionLogicType.h"
#include "unitysdk/RPG/GameCore/SubmissionOptionalTrackMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FinishActionConfig; }
namespace RPG::GameCore { class MissionCustomValueRewardConfig; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionWaypointDataPack; }
namespace System { class String; }

#define RPG_GAMECORE_SUBMISSIONINFOCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EAE8F0)
#define RPG_GAMECORE_SUBMISSIONINFOCONFIG_IFIGNOREVERSEPARAM_OFFSET UNITYSDK_OFFSET(0x18EAFF30)
#define RPG_GAMECORE_SUBMISSIONINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAFF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionInfoConfig_TypeDefinitionIndex = 18042;

	class SubMissionInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 MainMissionID; // 0x14
		::RPG::GameCore::MissionActivePlaneType MissionActivePlaneType; // 0x18
		::System::UInt64 SpecifiedPlaneTypeBits; // 0x20
		::System::String* MissionJsonPath; // 0x28
		::System::UInt32 SortID; // 0x30
		::System::UInt32 LevelPlaneID; // 0x34
		::System::UInt32 LevelFloorID; // 0x38
		::System::UInt32 LevelDimensionId; // 0x3C
		::System::String* AudioEmotionState; // 0x40
		::System::String* SoundEffectState; // 0x48
		::System::Boolean IsCanDelete; // 0x50
		::RPG::GameCore::SubmissionLogicType LogicType; // 0x54
		::RPG::GameCore::MissionBeginType TakeType; // 0x58
		::Il2CppArray<::System::UInt32>* TakeParamIntList; // 0x60
		::System::UInt32 TakePriority; // 0x68
		::Il2CppArray<::System::String*>* TakeParamStrList; // 0x70
		::System::UInt32 MazePlaneID; // 0x78
		::System::UInt32 MazeFloorID; // 0x7C
		::System::UInt32 MazeDimensionID; // 0x80
		::RPG::GameCore::QuestFinishType FinishType; // 0x84
		::RPG::GameCore::QuestParaType ParamType; // 0x88
		::System::UInt32 ParamInt1; // 0x8C
		::System::UInt32 ParamInt2; // 0x90
		::System::UInt32 ParamInt3; // 0x94
		::System::String* ParamStr1; // 0x98
		::Il2CppArray<::System::UInt32>* ParamIntList; // 0xA0
		::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* ParamItemList; // 0xA8
		::Il2CppArray<::RPG::GameCore::FinishActionConfig*>* FinishActionList; // 0xB0
		::System::UInt32 Progress; // 0xB8
		::System::Boolean IsBackTrack; // 0xBC
		::RPG::GameCore::FinishWayCheckType CheckType; // 0xC0
		::System::UInt32 CheckParamInt1; // 0xC4
		::Il2CppArray<::System::String*>* CustomValueList; // 0xC8
		::System::Boolean CheckFloor; // 0xD0
		::System::UInt32 ProcessGroup; // 0xD4
		::System::UInt32 SubRewardID; // 0xD8
		::Il2CppArray<::RPG::GameCore::MissionCustomValueRewardConfig*>* CustomValueReward; // 0xE0
		::Il2CppArray<::System::UInt32>* GroupIDList; // 0xE8
		::Il2CppArray<::System::UInt32>* RequiredNPCSeriesIDList; // 0xF0
		::System::Boolean IsShow; // 0xF8
		::System::Boolean MuteNav; // 0xF9
		::System::UInt32 ProgressGroup; // 0xFC
		::System::Boolean IsShowProgress; // 0x100
		::RPG::GameCore::MissionProgressType MissionProgressType; // 0x104
		::System::UInt32 IsShowFinishEffect; // 0x108
		::RPG::GameCore::BeginHintType IsShowStartHint; // 0x10C
		::RPG::GameCore::MissionWayPointType WayPointType; // 0x110
		::System::Boolean IsTrackByMessage; // 0x114
		::System::UInt32 MessageGroupID; // 0x118
		::System::Boolean IsGotoUIPage; // 0x11C
		::System::UInt32 GotoID; // 0x120
		::Il2CppArray<::System::Int32>* GotoParam; // 0x128
		::System::UInt32 WayPointFloorID; // 0x130
		::System::UInt32 WayPointGroupID; // 0x134
		::System::UInt32 WayPointEntityID; // 0x138
		::System::UInt32 WayPointLittleGameEntityID; // 0x13C
		::System::Int32 WayPointShowRangeMin; // 0x140
		::System::Single MapWaypointRange; // 0x144
		::System::Boolean FroceMapHint; // 0x148
		::Il2CppArray<::System::UInt32>* StoryLineIDList; // 0x150
		::System::UInt32 StoryLineID; // 0x158
		::Il2CppArray<::RPG::GameCore::MissionVerseParam>* IgnoreVerseParamList; // 0x160
		::RPG::GameCore::SubmissionOptionalTrackMode OptionalTrackMode; // 0x168
		::Il2CppArray<::RPG::GameCore::MissionWaypointDataPack*>* MultiPhaseWaypoint; // 0x170
		::System::Single OverrideHintMaxDistance; // 0x178
		::System::Boolean FixTransferRotation; // 0x17C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SubMissionInfoConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubMissionInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONINFOCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		::System::Boolean IfIgnoreVerseParam(::RPG::GameCore::MissionVerseParam verseParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionVerseParam))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONINFOCONFIG_IFIGNOREVERSEPARAM_OFFSET))(this, verseParam);
		}
	};
}
