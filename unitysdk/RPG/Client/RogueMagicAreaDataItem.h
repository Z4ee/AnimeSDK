#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_823;
class Class_1_EA3716A61EF929AB_1;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueMagicFinishRecordDataItem; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class RogueMagicAreaRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCACHEDLINEUP_OFFSET UNITYSDK_OFFSET(0xB04EF80)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCACHEDSTYLETYPE_OFFSET UNITYSDK_OFFSET(0xB04F5F0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYMIRACLE_OFFSET UNITYSDK_OFFSET(0xB04F9B0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYSCEPTER_OFFSET UNITYSDK_OFFSET(0xB04F910)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYUNIT_OFFSET UNITYSDK_OFFSET(0xB04F960)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETDISPLAYMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xB04ECC0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETFIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xB04EB50)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMAXAVAILROGUESCORE_OFFSET UNITYSDK_OFFSET(0xB04E720)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMONSTERDROPITEMDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB04EC10)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMONSTERDROPITEMELITEDROPID_OFFSET UNITYSDK_OFFSET(0xB04E290)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xB04D730)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB04FAA0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAINDEX_OFFSET UNITYSDK_OFFSET(0xB04FB40)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_CUSTOMSTAGEUI3DIMGPATH_OFFSET UNITYSDK_OFFSET(0xB0500C0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_DEFAULTSTYLETYPE_OFFSET UNITYSDK_OFFSET(0xB050050)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xB04FE90)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB04FEB0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xB04FE00)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xB04FEF0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB04FE70)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xB04FCC0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_MAXPASSEDDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xB050010)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_MAXPASSEDLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xB04FED0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB04FAC0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_RECORDDATAITEM_OFFSET UNITYSDK_OFFSET(0xB050030)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xB04FBB0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB04EAF0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_ISCUSTOMAREA_OFFSET UNITYSDK_OFFSET(0xB04FA00)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SETCACHEDLINEUP_OFFSET UNITYSDK_OFFSET(0xB04F210)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SETCACHEDSTYLETYPE_OFFSET UNITYSDK_OFFSET(0xB04F7B0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xB04FAB0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xB04FEA0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB04FEC0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB04FE80)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_MAXPASSEDDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xB050020)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_MAXPASSEDLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xB04FEE0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_RECORDDATAITEM_OFFSET UNITYSDK_OFFSET(0xB050040)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xB04CC50)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB04C5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicAreaDataItem_TypeDefinitionIndex = 62088;

	class RogueMagicAreaDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicFinishRecordDataItem* _RecordDataItem_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>* _HyperParams; // 0x18
		::System::UInt32 _AreaID_k__BackingField; // 0x20
		::System::UInt32 _MaxPassedLayerIndex_k__BackingField; // 0x24
		::System::UInt32 _MaxPassedDiffCompLevel_k__BackingField; // 0x28
		::System::Boolean _IsFirstPassed_k__BackingField; // 0x2C
		::System::Boolean _IsFirstRewardTaken_k__BackingField; // 0x2D
		::System::Boolean _IsUnlocked_k__BackingField; // 0x2E

		::System::Void _ctor(::RPG::GameCore::RogueMagicAreaRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM__CTOR_OFFSET))(this, row);
		}

		static ::System::UInt32 GetMonsterDropItemEliteDropID(::System::UInt32 areaID, ::System::UInt32 worldLevel)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMONSTERDROPITEMELITEDROPID_OFFSET))(areaID, worldLevel);
		}

		::System::Void Sync(::Class_1_EA3716A61EF929AB_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA3716A61EF929AB_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 GetMaxAvailRogueScore(::System::UInt32 worldLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMAXAVAILROGUESCORE_OFFSET))(this, worldLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetFirstRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETFIRSTREWARDITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetMonsterDropItemDisplayData(::System::UInt32 worldLevel)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMONSTERDROPITEMDISPLAYDATA_OFFSET))(this, worldLevel);
		}

		::RPG::Client::MonsterData* GetDisplayMonsterData(::System::UInt32 worldLevel)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETDISPLAYMONSTERDATA_OFFSET))(this, worldLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetCachedLineup()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCACHEDLINEUP_OFFSET))(this);
		}

		::System::Void SetCachedLineup(::System::Collections::Generic::List_1<::System::UInt32>* lineupAvatarBaseIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SETCACHEDLINEUP_OFFSET))(this, lineupAvatarBaseIDs);
		}

		::RPG::GameCore::RogueMagicStyleType GetCachedStyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCACHEDSTYLETYPE_OFFSET))(this);
		}

		::System::Void SetCachedStyleType(::RPG::GameCore::RogueMagicStyleType styleType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SETCACHEDSTYLETYPE_OFFSET))(this, styleType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* GetCustomStageDisplayScepter()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYSCEPTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetCustomStageDisplayUnit()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYUNIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* GetCustomStageDisplayMiracle()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYMIRACLE_OFFSET))(this);
		}

		::System::Boolean IsCustomArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_ISCUSTOMAREA_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_AREAID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_AreaIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAINDEX_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicAreaGroupID get_AreaGroup()
		{
			return ((::RPG::GameCore::RogueMagicAreaGroupID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAGROUP_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_UNLOCKDESC_OFFSET))(this);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISHARD_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISFIRSTPASSED_OFFSET))(this);
		}

		::System::Void set_IsFirstPassed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISFIRSTPASSED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsFirstRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxPassedLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_MAXPASSEDLAYERINDEX_OFFSET))(this);
		}

		::System::Void set_MaxPassedLayerIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_MAXPASSEDLAYERINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_IsOptionalLayerPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISOPTIONALLAYERPASSED_OFFSET))(this);
		}

		::System::UInt32 get_MaxPassedDiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_MAXPASSEDDIFFCOMPLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxPassedDiffCompLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_MAXPASSEDDIFFCOMPLEVEL_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicFinishRecordDataItem* get_RecordDataItem()
		{
			return ((::RPG::Client::RogueMagicFinishRecordDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_RECORDDATAITEM_OFFSET))(this);
		}

		::System::Void set_RecordDataItem(::RPG::Client::RogueMagicFinishRecordDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicFinishRecordDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_RECORDDATAITEM_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicStyleType get_DefaultStyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_DEFAULTSTYLETYPE_OFFSET))(this);
		}

		::System::String* get_CustomStageUI3DImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_CUSTOMSTAGEUI3DIMGPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicAreaRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
