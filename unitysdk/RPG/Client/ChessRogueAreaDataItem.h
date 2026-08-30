#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_8.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ChessRogueAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_23;
class Class_1_9C0610EDDB834F4B;
class Class_1_BF2908093F14DD44;
namespace RPG::Client { class ChessRogueAreaLayerDataItem; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class RogueDLCAreaRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAREADATAITEM_CLEARLAYERS_OFFSET UNITYSDK_OFFSET(0x1CB2A3C0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_CLIENTUPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x1CB2A370)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB29D80)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GETFIRSTPASSREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1CB2A460)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GETLAYERDATAITEM_OFFSET UNITYSDK_OFFSET(0x1CB2A270)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREADESCID_OFFSET UNITYSDK_OFFSET(0x1CB2AAC0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREAGROUPID_OFFSET UNITYSDK_OFFSET(0x1CB2AC30)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1CB2A600)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREANAMEID_OFFSET UNITYSDK_OFFSET(0x1CB2A950)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CB2B400)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_DISPLAYMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1CB2AF40)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_FIRSTREWARDID_OFFSET UNITYSDK_OFFSET(0x1CB2A4D0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1CB2B4C0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0x1CB2B520)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CB2B4E0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LAYERIDARRAY_OFFSET UNITYSDK_OFFSET(0x1CB2A640)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LAYERITEMLIST_OFFSET UNITYSDK_OFFSET(0x1CB2A620)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LEVELSCORE_OFFSET UNITYSDK_OFFSET(0x1CB2B580)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LEVELSTATUS_OFFSET UNITYSDK_OFFSET(0x1CB2B500)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_MONSTERDROPITEMS_OFFSET UNITYSDK_OFFSET(0x1CB2B220)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1CB2A820)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_RECOMMENDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CB2AE90)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ROGUEDLCAREAROW_OFFSET UNITYSDK_OFFSET(0x1CB2A7B0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x1CB2B2D0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x1CB2AD60)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1CB2A610)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1CB2B4D0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CB2B4F0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_LAYERITEMLIST_OFFSET UNITYSDK_OFFSET(0x1CB2A630)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_LEVELSTATUS_OFFSET UNITYSDK_OFFSET(0x1CB2B510)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1CB2A170)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNCUNLOCKEDINFO_OFFSET UNITYSDK_OFFSET(0x1CB2A200)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x1CB29EF0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB29D50)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB29D40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaDataItem_TypeDefinitionIndex = 66901;

	class ChessRogueAreaDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _DisplayMonsterData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>* _LayerItemList_k__BackingField; // 0x18
		::RPG::GameCore::RogueDLCAreaRow* _Row; // 0x20
		::System::UInt32 _AreaID_k__BackingField; // 0x28
		::Enum_3_96F6662CA3713095_8 _LevelStatus_k__BackingField; // 0x2C
		::System::Boolean _IsUnlocked_k__BackingField; // 0x30
		::System::Boolean _IsHard; // 0x31
		::System::Boolean _IsFirstRewardTaken_k__BackingField; // 0x32

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::RogueDLCAreaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9C0610EDDB834F4B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C0610EDDB834F4B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncGameplayInfo(::Class_1_BF2908093F14DD44* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF2908093F14DD44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNCGAMEPLAYINFO_OFFSET))(this, a1);
		}

		::System::Void SyncUnlockedInfo(::Class_1_075C34D03AFA1215_23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNCUNLOCKEDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueAreaLayerDataItem* GetLayerDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueAreaLayerDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GETLAYERDATAITEM_OFFSET))(this, a1);
		}

		::System::Void ClientUpdateStatus(::Enum_3_96F6662CA3713095_8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_CLIENTUPDATESTATUS_OFFSET))(this, a1);
		}

		::System::Void ClearLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_CLEARLAYERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetFirstPassRewardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GETFIRSTPASSREWARDLIST_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_AREAID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>* get_LayerItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LAYERITEMLIST_OFFSET))(this);
		}

		::System::Void set_LayerItemList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_LAYERITEMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_LayerIDArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LAYERIDARRAY_OFFSET))(this);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_FirstRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_FIRSTREWARDID_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaNameID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREANAMEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaDescID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREADESCID_OFFSET))(this);
		}

		::RPG::GameCore::ChessRogueAreaGroupID get_AreaGroupID()
		{
			return ((::RPG::GameCore::ChessRogueAreaGroupID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREAGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_UNLOCKID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendProperties()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_RECOMMENDPROPERTIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* get_DisplayMonsterData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_DISPLAYMONSTERDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_MonsterDropItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_MONSTERDROPITEMS_OFFSET))(this);
		}

		::RPG::GameCore::RogueSubMode get_RogueSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ROGUESUBMODE_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCAreaRow* get_RogueDLCAreaRow()
		{
			return ((::RPG::GameCore::RogueDLCAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ROGUEDLCAREAROW_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsFirstRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsFirstRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::Enum_3_96F6662CA3713095_8 get_LevelStatus()
		{
			return ((::Enum_3_96F6662CA3713095_8(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LEVELSTATUS_OFFSET))(this);
		}

		::System::Void set_LevelStatus(::Enum_3_96F6662CA3713095_8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_LEVELSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISHARD_OFFSET))(this);
		}

		::System::UInt32 get_LevelScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LEVELSCORE_OFFSET))(this);
		}
	};
}
