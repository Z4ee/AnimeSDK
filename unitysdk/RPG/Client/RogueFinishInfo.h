#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_50;
class Class_1_333B902B2174BECA_5;
class Class_1_D17272E82AE804C2_755;
class Class_1_FB0633E85BD6CF8E_15;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemList; }
namespace RPG::Client { class AddNewAvatarInfo; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEFINISHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB031A70)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_AREAFIRSTPASSSCORE_OFFSET UNITYSDK_OFFSET(0xB031EF0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_AVATARREWARDS_OFFSET UNITYSDK_OFFSET(0xB031F90)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xB031F70)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB031E50)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB031E90)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB031EB0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDAVATARS_OFFSET UNITYSDK_OFFSET(0xB031FF0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xB031FB0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xB031FD0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_ROGUEAREAID_OFFSET UNITYSDK_OFFSET(0xB031E70)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_ROOMSCORE_OFFSET UNITYSDK_OFFSET(0xB031F10)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB031F50)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB031ED0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xB031F30)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_AREAFIRSTPASSSCORE_OFFSET UNITYSDK_OFFSET(0xB031F00)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_AVATARREWARDS_OFFSET UNITYSDK_OFFSET(0xB031FA0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xB031F80)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB031E60)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB031EA0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB031EC0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xB031FC0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xB031FE0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_ROGUEAREAID_OFFSET UNITYSDK_OFFSET(0xB031E80)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_ROOMSCORE_OFFSET UNITYSDK_OFFSET(0xB031F20)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB031F60)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB031EE0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xB031F40)
#define RPG_CLIENT_ROGUEFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0316A0)
#define RPG_CLIENT_ROGUEFINISHINFO__INITBASEINFO_OFFSET UNITYSDK_OFFSET(0xB031740)
#define RPG_CLIENT_ROGUEFINISHINFO__INITFIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xB031940)
#define RPG_CLIENT_ROGUEFINISHINFO__INITRECORDAVATARS_OFFSET UNITYSDK_OFFSET(0xB031D60)
#define RPG_CLIENT_ROGUEFINISHINFO__INITRECORDBUFFS_OFFSET UNITYSDK_OFFSET(0xB031BA0)
#define RPG_CLIENT_ROGUEFINISHINFO__INITRECORDINFO_OFFSET UNITYSDK_OFFSET(0xB0318C0)
#define RPG_CLIENT_ROGUEFINISHINFO__INITRECORDMIRACLES_OFFSET UNITYSDK_OFFSET(0xB031CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFinishInfo_TypeDefinitionIndex = 62158;

	class RogueFinishInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_50*>* _RecordAvatars; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _RecordBuffDatas_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* _AvatarRewards_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewards_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _RecordMiracleIDs_k__BackingField; // 0x30
		::System::UInt32 _RogueAreaID_k__BackingField; // 0x38
		::System::UInt32 _AreaFirstPassScore_k__BackingField; // 0x3C
		::System::Boolean _IsWin_k__BackingField; // 0x40
		::System::UInt32 _TalentCoin_k__BackingField; // 0x44
		::System::UInt32 _ReachRoomCount_k__BackingField; // 0x48
		::System::UInt32 _TotalRoomCount_k__BackingField; // 0x4C
		::System::UInt32 _RoomScore_k__BackingField; // 0x50
		::System::UInt32 _PassRoomCount_k__BackingField; // 0x54
		::System::UInt32 _TotalScore_k__BackingField; // 0x58

		::System::Void _ctor(::Class_1_FB0633E85BD6CF8E_15* finishInfo, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* avatarRewardInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_15*, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__CTOR_OFFSET))(this, finishInfo, avatarRewardInfo);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitBaseInfo(::Class_1_FB0633E85BD6CF8E_15* finishInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITBASEINFO_OFFSET))(this, finishInfo);
		}

		::System::Void _InitFirstRewards(::Proto::ItemList* firstReward, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* avatarRewardInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITFIRSTREWARDS_OFFSET))(this, firstReward, avatarRewardInfo);
		}

		::System::Void _InitRecordInfo(::Class_1_333B902B2174BECA_5* recordInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITRECORDINFO_OFFSET))(this, recordInfo);
		}

		::System::Void _InitRecordBuffs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_755*>* buffs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_755*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITRECORDBUFFS_OFFSET))(this, buffs);
		}

		::System::Void _InitRecordMiracles(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* miracleIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITRECORDMIRACLES_OFFSET))(this, miracleIDs);
		}

		::System::Void _InitRecordAvatars(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_50*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_50*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITRECORDAVATARS_OFFSET))(this, avatars);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_ISWIN_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_ROGUEAREAID_OFFSET))(this);
		}

		::System::Void set_RogueAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_ROGUEAREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_PassRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_PASSROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_PASSROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ReachRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_REACHROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_ReachRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_REACHROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_TOTALROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_TOTALROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaFirstPassScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_AREAFIRSTPASSSCORE_OFFSET))(this);
		}

		::System::Void set_AreaFirstPassScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_AREAFIRSTPASSSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_ROOMSCORE_OFFSET))(this);
		}

		::System::Void set_RoomScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_ROOMSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_TOTALSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_TalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_TALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TalentCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_TALENTCOIN_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_FirstRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_FIRSTREWARDS_OFFSET))(this);
		}

		::System::Void set_FirstRewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_FIRSTREWARDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* get_AvatarRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_AVATARREWARDS_OFFSET))(this);
		}

		::System::Void set_AvatarRewards(::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_AVATARREWARDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_RecordBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_RecordBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_RECORDBUFFDATAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecordMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_RecordMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_RecordAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDAVATARS_OFFSET))(this);
		}
	};
}
