#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C108C82C095C1A03;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xB050CC0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB050CE0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xB050C60)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB050CA0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xB050C20)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xB050BA0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB050BE0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xB050C40)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB050C80)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xB050C00)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xB050BC0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xB04E390)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xB050CD0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB050CF0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xB050C70)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB050CB0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xB050C30)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xB050BB0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB050BF0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xB050C50)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB050C90)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xB050C10)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xB050BD0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB04E300)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicFinishRecordDataItem_TypeDefinitionIndex = 62091;

	class RogueMagicFinishRecordDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _LineupAvatars_k__BackingField; // 0x18
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x20
		::System::UInt32 _AllLayerCount_k__BackingField; // 0x28
		::System::UInt32 _AllRoomCount_k__BackingField; // 0x2C
		::System::UInt32 _AddedRogueScore_k__BackingField; // 0x30
		::System::UInt32 _AddedTalentCoin_k__BackingField; // 0x34
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x38
		::System::UInt32 _PassedLayerCount_k__BackingField; // 0x3C
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x40
		::System::UInt32 _PassedRoomCount_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_C108C82C095C1A03* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C108C82C095C1A03*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_REFRESH_OFFSET))(this, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_LineupAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LINEUPAVATARS_OFFSET))(this);
		}

		::System::Void set_LineupAvatars(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LINEUPAVATARS_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_SCEPTERINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_MIRACLEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ROGUECOINNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_PassedLayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDLAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_PassedLayerCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDLAYERCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AllLayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLLAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_AllLayerCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLLAYERCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_PassedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassedRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_AllRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AddedRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDROGUESCORE_OFFSET))(this);
		}

		::System::Void set_AddedRogueScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDROGUESCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_AddedTalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDTALENTCOIN_OFFSET))(this);
		}

		::System::Void set_AddedTalentCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDTALENTCOIN_OFFSET))(this, value);
		}
	};
}
