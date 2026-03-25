#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C108C82C095C1A03_1;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xA31A070)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xA31A090)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xA31A010)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xA31A050)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA319FD0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xA319F50)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA319F90)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xA319FF0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xA31A030)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xA319FB0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xA319F70)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xA317740)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xA31A080)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xA31A0A0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xA31A020)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xA31A060)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA319FE0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xA319F60)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA319FA0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xA31A000)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xA31A040)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xA319FC0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xA319F80)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA3176B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicFinishRecordDataItem_TypeDefinitionIndex = 54903;

	class RogueMagicFinishRecordDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _LineupAvatars_k__BackingField; // 0x10
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x18
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x20
		::System::UInt32 _AddedTalentCoin_k__BackingField; // 0x28
		::System::UInt32 _AddedRogueScore_k__BackingField; // 0x2C
		::System::UInt32 _PassedLayerCount_k__BackingField; // 0x30
		::System::UInt32 _PassedRoomCount_k__BackingField; // 0x34
		::System::UInt32 _AllLayerCount_k__BackingField; // 0x38
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x3C
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x40
		::System::UInt32 _AllRoomCount_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_C108C82C095C1A03_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C108C82C095C1A03_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_REFRESH_OFFSET))(this, proto);
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
