#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C108C82C095C1A03;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC79EBC0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xC79EBE0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EB60)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EBA0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EB20)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xC79EAA0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC79EAE0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EB40)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EB80)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xC79EB00)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xC79EAC0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xC79C130)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC79EBD0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xC79EBF0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EB70)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EBB0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EB30)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xC79EAB0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC79EAF0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EB50)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC79EB90)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xC79EB10)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xC79EAD0)
#define RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC79C0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicFinishRecordDataItem_TypeDefinitionIndex = 63024;

	class RogueMagicFinishRecordDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x10
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _LineupAvatars_k__BackingField; // 0x20
		::System::UInt32 _PassedLayerCount_k__BackingField; // 0x28
		::System::UInt32 _AllLayerCount_k__BackingField; // 0x2C
		::System::UInt32 _AllRoomCount_k__BackingField; // 0x30
		::System::UInt32 _PassedRoomCount_k__BackingField; // 0x34
		::System::UInt32 _AddedRogueScore_k__BackingField; // 0x38
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x3C
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x40
		::System::UInt32 _AddedTalentCoin_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_C108C82C095C1A03* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C108C82C095C1A03*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_REFRESH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_LineupAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LINEUPAVATARS_OFFSET))(this);
		}

		::System::Void set_LineupAvatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LINEUPAVATARS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_SCEPTERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_MIRACLEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ROGUECOINNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedLayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDLAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_PassedLayerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDLAYERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllLayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLLAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_AllLayerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLLAYERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_PASSEDROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassedRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_PASSEDROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_AllRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ALLROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddedRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDROGUESCORE_OFFSET))(this);
		}

		::System::Void set_AddedRogueScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDROGUESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddedTalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_GET_ADDEDTALENTCOIN_OFFSET))(this);
		}

		::System::Void set_AddedTalentCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICFINISHRECORDDATAITEM_SET_ADDEDTALENTCOIN_OFFSET))(this, a1);
		}
	};
}
