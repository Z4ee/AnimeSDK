#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class TreasureDungeonLevelData; }
namespace RPG::Client { class TreasureDungeonModule; }
namespace RPG::GameCore { class TreasureDungeoActivityQuestConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0xB383B40)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__TREASUREDUNGEONMODULE_OFFSET UNITYSDK_OFFSET(0xB383790)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB3839B0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDALLSEENDUNGEON_OFFSET UNITYSDK_OFFSET(0xB383600)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDSEENDUNGEON_OFFSET UNITYSDK_OFFSET(0xB383910)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0xB3831D0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3831B0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__RECORDSEENDUNGEONLEVEL_OFFSET UNITYSDK_OFFSET(0xB3837F0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHFINALREWARD_OFFSET UNITYSDK_OFFSET(0xB383C50)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHHASREWARDDUNGEON_OFFSET UNITYSDK_OFFSET(0xB383D60)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLISTBYLEVELDATA_OFFSET UNITYSDK_OFFSET(0xB383E90)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLIST_OFFSET UNITYSDK_OFFSET(0xB3834D0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0xB3833A0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB384170)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonActivityData_TypeDefinitionIndex = 56874;

	class TreasureDungeonActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HasRewardDungeonList; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* NewDungeonList; // 0xA8
		::System::Boolean IsFinalRewardCanTake; // 0xB0
		::System::Boolean _IsInited; // 0xB1

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void RefreshRedDot(::System::Boolean notify)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_REFRESHREDDOT_OFFSET))(this, notify);
		}

		::System::Void RecordAllSeenDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDALLSEENDUNGEON_OFFSET))(this);
		}

		::System::Void RecordSeenDungeon(::RPG::Client::TreasureDungeonLevelData* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDSEENDUNGEON_OFFSET))(this, levelData);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHREWARD_OFFSET))(this);
		}

		::System::Void _RefreshHasRewardDungeon(::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHHASREWARDDUNGEON_OFFSET))(this, row);
		}

		::System::Void _RefreshNewDungeonListByLevelData(::RPG::Client::TreasureDungeonLevelData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLISTBYLEVELDATA_OFFSET))(this, data);
		}

		::System::Void _RefreshNewDungeonList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLIST_OFFSET))(this);
		}

		::System::Void _RefreshFinalReward(::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHFINALREWARD_OFFSET))(this, row);
		}

		::System::Void _RecordSeenDungeonLevel(::RPG::Client::TreasureDungeonLevelData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__RECORDSEENDUNGEONLEVEL_OFFSET))(this, data);
		}

		::RPG::Client::TreasureDungeonModule* get__TreasureDungeonModule()
		{
			return ((::RPG::Client::TreasureDungeonModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__TREASUREDUNGEONMODULE_OFFSET))(this);
		}

		::System::UInt32 get__GuideMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__GUIDEMISSIONID_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
