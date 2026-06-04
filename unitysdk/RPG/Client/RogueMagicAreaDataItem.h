#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_874;
class Class_1_FBCD4FF549575A07_3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueMagicFinishRecordDataItem; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class RogueMagicAreaRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCACHEDLINEUP_OFFSET UNITYSDK_OFFSET(0xC79CDC0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCACHEDSTYLETYPE_OFFSET UNITYSDK_OFFSET(0xC79D3A0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYMIRACLE_OFFSET UNITYSDK_OFFSET(0xC79D7F0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYSCEPTER_OFFSET UNITYSDK_OFFSET(0xC79D750)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCUSTOMSTAGEDISPLAYUNIT_OFFSET UNITYSDK_OFFSET(0xC79D7A0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETDISPLAYMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xC79CB10)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETFIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC79C9A0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMAXAVAILROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC79C540)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMONSTERDROPITEMDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC79CA60)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMONSTERDROPITEMELITEDROPID_OFFSET UNITYSDK_OFFSET(0xC79C030)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xC79B4B0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xC79D8E0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_AREAINDEX_OFFSET UNITYSDK_OFFSET(0xC79D980)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_CUSTOMSTAGEUI3DIMGPATH_OFFSET UNITYSDK_OFFSET(0xC79DF00)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_DEFAULTSTYLETYPE_OFFSET UNITYSDK_OFFSET(0xC79DE90)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xC79DCD0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC79DCF0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xC79DC40)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xC79DD30)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC79DCB0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC79DB00)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_MAXPASSEDDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xC79DE50)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_MAXPASSEDLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC79DD10)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC79D900)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_RECORDDATAITEM_OFFSET UNITYSDK_OFFSET(0xC79DE70)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xC79D9F0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC79C940)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_ISCUSTOMAREA_OFFSET UNITYSDK_OFFSET(0xC79D840)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SETCACHEDLINEUP_OFFSET UNITYSDK_OFFSET(0xC79D050)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SETCACHEDSTYLETYPE_OFFSET UNITYSDK_OFFSET(0xC79D570)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xC79D8F0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0xC79DCE0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC79DD00)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC79DCC0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_MAXPASSEDDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xC79DE60)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_MAXPASSEDLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC79DD20)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_RECORDDATAITEM_OFFSET UNITYSDK_OFFSET(0xC79DE80)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xC79A9F0)
#define RPG_CLIENT_ROGUEMAGICAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC79A410)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicAreaDataItem_TypeDefinitionIndex = 63021;

	class RogueMagicAreaDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_874*>* _HyperParams; // 0x10
		::RPG::Client::RogueMagicFinishRecordDataItem* _RecordDataItem_k__BackingField; // 0x18
		::System::UInt32 _AreaID_k__BackingField; // 0x20
		::System::UInt32 _MaxPassedDiffCompLevel_k__BackingField; // 0x24
		::System::Boolean _IsFirstRewardTaken_k__BackingField; // 0x28
		::System::Boolean _IsUnlocked_k__BackingField; // 0x29
		::System::Boolean _IsFirstPassed_k__BackingField; // 0x2A
		::System::UInt32 _MaxPassedLayerIndex_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::RogueMagicAreaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::System::UInt32 GetMonsterDropItemEliteDropID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMONSTERDROPITEMELITEDROPID_OFFSET))(a1, a2);
		}

		::System::Void Sync(::Class_1_FBCD4FF549575A07_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxAvailRogueScore(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMAXAVAILROGUESCORE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetFirstRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETFIRSTREWARDITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetMonsterDropItemDisplayData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETMONSTERDROPITEMDISPLAYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetDisplayMonsterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETDISPLAYMONSTERDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetCachedLineup()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCACHEDLINEUP_OFFSET))(this);
		}

		::System::Void SetCachedLineup(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SETCACHEDLINEUP_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicStyleType GetCachedStyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GETCACHEDSTYLETYPE_OFFSET))(this);
		}

		::System::Void SetCachedStyleType(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SETCACHEDSTYLETYPE_OFFSET))(this, a1);
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

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_AREAID_OFFSET))(this, a1);
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

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISFIRSTPASSED_OFFSET))(this);
		}

		::System::Void set_IsFirstPassed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISFIRSTPASSED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsFirstRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPassedLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_MAXPASSEDLAYERINDEX_OFFSET))(this);
		}

		::System::Void set_MaxPassedLayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_MAXPASSEDLAYERINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOptionalLayerPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_ISOPTIONALLAYERPASSED_OFFSET))(this);
		}

		::System::UInt32 get_MaxPassedDiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_MAXPASSEDDIFFCOMPLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxPassedDiffCompLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_MAXPASSEDDIFFCOMPLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicFinishRecordDataItem* get_RecordDataItem()
		{
			return ((::RPG::Client::RogueMagicFinishRecordDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_GET_RECORDDATAITEM_OFFSET))(this);
		}

		::System::Void set_RecordDataItem(::RPG::Client::RogueMagicFinishRecordDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicFinishRecordDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREADATAITEM_SET_RECORDDATAITEM_OFFSET))(this, a1);
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
