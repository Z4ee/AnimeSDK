#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7E63CB7D4EEAA220;
class Class_1_DB9F32FCA772D309_6;
namespace Proto { class ItemList; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC7AA980)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7A6C40)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC7B4010)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xC7B4030)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7B3FB0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xC7B3EF0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_DIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xC7B3F10)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC7B3FD0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xC7B3F70)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC7B3F30)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LASTLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0xC7B3F50)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7B3FF0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xC7B4050)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC7B4090)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7B3F90)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xC7B40B0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xC7B4070)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xC7B4020)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xC7B4040)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7B3FC0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xC7B3F00)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_DIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xC7B3F20)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC7B3FE0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xC7B3F80)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC7B3F40)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LASTLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0xC7B3F60)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7B4000)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xC7B4060)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC7B40A0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xC7B3FA0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xC7B40C0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xC7B4080)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISLAYERACTIVATED_OFFSET UNITYSDK_OFFSET(0xC7B3E40)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xC7B3EA0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B3DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicSettleData_TypeDefinitionIndex = 63032;

	class RogueMagicSettleData : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* FirstRewardItems; // 0x18
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _LineupAvatars_k__BackingField; // 0x20
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x28
		::System::UInt32 _AllRoomCount_k__BackingField; // 0x30
		::System::UInt32 _DiffCompLevel_k__BackingField; // 0x34
		::System::UInt32 _AddedRogueScore_k__BackingField; // 0x38
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x3C
		::System::UInt32 _PassedRoomCount_k__BackingField; // 0x40
		::RPG::Client::TextID _LastLayerNumText_k__BackingField; // 0x48
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x58
		::System::UInt32 _AreaID_k__BackingField; // 0x5C
		::System::UInt32 _AddedTalentCoin_k__BackingField; // 0x60
		::System::Boolean _IsOptionalLayerPassed_k__BackingField; // 0x64
		::System::Boolean _IsWin_k__BackingField; // 0x65
		::System::Boolean _IsExtraRoundAvailable_k__BackingField; // 0x66

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::RogueMagicSettleData* Create(::Class_1_7E63CB7D4EEAA220* a1, ::Proto::ItemList* a2)
		{
			return ((::RPG::Client::RogueMagicSettleData*(*)(::Class_1_7E63CB7D4EEAA220*, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckIsLayerActivated(::Class_1_DB9F32FCA772D309_6* a1)
		{
			return ((::System::Boolean(*)(::Class_1_DB9F32FCA772D309_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISLAYERACTIVATED_OFFSET))(a1);
		}

		static ::System::Boolean _CheckIsOptionalLayerPassed(::Class_1_DB9F32FCA772D309_6* a1)
		{
			return ((::System::Boolean(*)(::Class_1_DB9F32FCA772D309_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISOPTIONALLAYERPASSED_OFFSET))(a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_DIFFCOMPLEVEL_OFFSET))(this);
		}

		::System::Void set_DiffCompLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_DIFFCOMPLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISWIN_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LastLayerNumText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LASTLAYERNUMTEXT_OFFSET))(this);
		}

		::System::Void set_LastLayerNumText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LASTLAYERNUMTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOptionalLayerPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISOPTIONALLAYERPASSED_OFFSET))(this);
		}

		::System::Void set_IsOptionalLayerPassed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISOPTIONALLAYERPASSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_PASSEDROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassedRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_PASSEDROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_AllRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ALLROOMCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExtraRoundAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISEXTRAROUNDAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsExtraRoundAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISEXTRAROUNDAVAILABLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddedRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDROGUESCORE_OFFSET))(this);
		}

		::System::Void set_AddedRogueScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDROGUESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddedTalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDTALENTCOIN_OFFSET))(this);
		}

		::System::Void set_AddedTalentCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDTALENTCOIN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_LineupAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LINEUPAVATARS_OFFSET))(this);
		}

		::System::Void set_LineupAvatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LINEUPAVATARS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_SCEPTERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_MIRACLEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ROGUECOINNUM_OFFSET))(this, a1);
		}
	};
}
