#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_7.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ChessRogueAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_2E57B88467AF63C8_2;
class Class_1_47DBF8E83CEFB101;
class Class_1_6E708EAB438EC183_20;
namespace RPG::Client { class ChessRogueAreaLayerDataItem; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class RogueDLCAreaRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAREADATAITEM_CLEARLAYERS_OFFSET UNITYSDK_OFFSET(0x93624A0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_CLIENTUPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x9362450)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9361F00)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GETFIRSTPASSREWARDLIST_OFFSET UNITYSDK_OFFSET(0x9362510)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GETLAYERDATAITEM_OFFSET UNITYSDK_OFFSET(0x9362360)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREADESCID_OFFSET UNITYSDK_OFFSET(0x9362B90)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREAGROUPID_OFFSET UNITYSDK_OFFSET(0x9362D00)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x93626C0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_AREANAMEID_OFFSET UNITYSDK_OFFSET(0x9362A20)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x93634B0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_DISPLAYMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9363030)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_FIRSTREWARDID_OFFSET UNITYSDK_OFFSET(0x9362580)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9363570)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0x93635D0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9363590)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LAYERIDARRAY_OFFSET UNITYSDK_OFFSET(0x9362700)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LAYERITEMLIST_OFFSET UNITYSDK_OFFSET(0x93626E0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LEVELSCORE_OFFSET UNITYSDK_OFFSET(0x9363630)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LEVELSTATUS_OFFSET UNITYSDK_OFFSET(0x93635B0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_MONSTERDROPITEMS_OFFSET UNITYSDK_OFFSET(0x93632C0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x93628E0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_RECOMMENDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9362F80)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ROGUEDLCAREAROW_OFFSET UNITYSDK_OFFSET(0x9362870)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x9363370)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x9362E40)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x93626D0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9363580)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x93635A0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_LAYERITEMLIST_OFFSET UNITYSDK_OFFSET(0x93626F0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_LEVELSTATUS_OFFSET UNITYSDK_OFFSET(0x93635C0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x9362260)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNCUNLOCKEDINFO_OFFSET UNITYSDK_OFFSET(0x93622F0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x9362050)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9361ED0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9361EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaDataItem_TypeDefinitionIndex = 54422;

	class ChessRogueAreaDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>* _LayerItemList_k__BackingField; // 0x10
		::RPG::GameCore::RogueDLCAreaRow* _Row; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _DisplayMonsterData; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x28
		::System::Boolean _IsFirstRewardTaken_k__BackingField; // 0x29
		::System::Boolean _IsHard; // 0x2A
		::Enum_3_96F6662CA3713095_7 _LevelStatus_k__BackingField; // 0x2C
		::System::UInt32 _AreaID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM__CTOR_OFFSET))(this, areaID);
		}

		::System::Void _ctor_1(::RPG::GameCore::RogueDLCAreaRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM__CTOR_1_OFFSET))(this, row);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_2E57B88467AF63C8_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNC_OFFSET))(this, proto);
		}

		::System::Void SyncGameplayInfo(::Class_1_47DBF8E83CEFB101* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47DBF8E83CEFB101*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNCGAMEPLAYINFO_OFFSET))(this, info);
		}

		::System::Void SyncUnlockedInfo(::Class_1_6E708EAB438EC183_20* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SYNCUNLOCKEDINFO_OFFSET))(this, ntf);
		}

		::RPG::Client::ChessRogueAreaLayerDataItem* GetLayerDataItem(::System::UInt32 areaLayerID)
		{
			return ((::RPG::Client::ChessRogueAreaLayerDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GETLAYERDATAITEM_OFFSET))(this, areaLayerID);
		}

		::System::Void ClientUpdateStatus(::Enum_3_96F6662CA3713095_7 status)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_CLIENTUPDATESTATUS_OFFSET))(this, status);
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

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_AREAID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>* get_LayerItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LAYERITEMLIST_OFFSET))(this);
		}

		::System::Void set_LayerItemList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaLayerDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_LAYERITEMLIST_OFFSET))(this, value);
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

		::System::Void set_IsFirstRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::Enum_3_96F6662CA3713095_7 get_LevelStatus()
		{
			return ((::Enum_3_96F6662CA3713095_7(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_GET_LEVELSTATUS_OFFSET))(this);
		}

		::System::Void set_LevelStatus(::Enum_3_96F6662CA3713095_7 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM_SET_LEVELSTATUS_OFFSET))(this, value);
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
