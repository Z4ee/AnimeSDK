#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_63;
namespace RPG::Client { class TreasureDungeonBaseGrid; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CLEARTUTORIAL_OFFSET UNITYSDK_OFFSET(0xA638540)
#define RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CLEAR_OFFSET UNITYSDK_OFFSET(0xA630030)
#define RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_GET_ISGETCHEST_OFFSET UNITYSDK_OFFSET(0xA6385B0)
#define RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA630650)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonNotifyParam_TypeDefinitionIndex = 55667;

	class TreasureDungeonNotifyParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* TriggeredTutorialKeys; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureDungeonBaseGrid*>* TypeChangedGrids; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* EmptyChangedGrids; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* NewFlippedGridList; // 0x28
		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_63*>* RecordData; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* RefreshedGridIDs; // 0x38
		::System::Boolean IsGetUltraItem; // 0x40
		::System::Boolean IsBuffUpdated; // 0x41
		::System::Boolean IsMapUpdated; // 0x42
		::System::Boolean IsFloorUpdated; // 0x43
		::System::Boolean IsFloorBuffReplaced; // 0x44
		::System::Boolean IsGetNewEnvBuff; // 0x45
		::System::UInt32 GotChestGridIndex; // 0x48
		::System::UInt32 GotChestItemID; // 0x4C
		::System::Boolean IsTeamUpdated; // 0x50
		::System::Boolean IsExplorePointUpdated; // 0x51
		::System::Boolean IsGetNewFloorBuff; // 0x52
		::System::Boolean IsItemUpdated; // 0x53

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CLEAR_OFFSET))(this);
		}

		::System::Void ClearTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CLEARTUTORIAL_OFFSET))(this);
		}

		::System::Boolean get_IsGetChest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_GET_ISGETCHEST_OFFSET))(this);
		}
	};
}
