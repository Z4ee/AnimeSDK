#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7E63CB7D4EEAA220;
class Class_1_DB9F32FCA772D309_6;
namespace Proto { class ItemList; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB05C9B0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB059010)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xB065B30)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB065B50)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB065AD0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB065A10)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_DIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xB065A30)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB065AF0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xB065A90)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB065A50)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LASTLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0xB065A70)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xB065B10)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xB065B70)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB065BB0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB065AB0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xB065BD0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xB065B90)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xB065B40)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB065B60)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB065AE0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xB065A20)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_DIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xB065A40)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB065B00)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xB065AA0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB065A60)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LASTLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0xB065A80)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xB065B20)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xB065B80)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB065BC0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB065AC0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xB065BE0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xB065BA0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISLAYERACTIVATED_OFFSET UNITYSDK_OFFSET(0xB065960)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xB0659C0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0658D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicSettleData_TypeDefinitionIndex = 62099;

	class RogueMagicSettleData : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* FirstRewardItems; // 0x18
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _LineupAvatars_k__BackingField; // 0x28
		::RPG::Client::TextID _LastLayerNumText_k__BackingField; // 0x30
		::System::UInt32 _AddedTalentCoin_k__BackingField; // 0x40
		::System::Boolean _IsWin_k__BackingField; // 0x44
		::System::Boolean _IsOptionalLayerPassed_k__BackingField; // 0x45
		::System::Boolean _IsExtraRoundAvailable_k__BackingField; // 0x46
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x48
		::System::UInt32 _DiffCompLevel_k__BackingField; // 0x4C
		::System::UInt32 _AreaID_k__BackingField; // 0x50
		::System::UInt32 _AllRoomCount_k__BackingField; // 0x54
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x58
		::System::UInt32 _PassedRoomCount_k__BackingField; // 0x5C
		::System::UInt32 _AddedRogueScore_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::RogueMagicSettleData* Create(::Class_1_7E63CB7D4EEAA220* proto, ::Proto::ItemList* firstRewardItems)
		{
			return ((::RPG::Client::RogueMagicSettleData*(*)(::Class_1_7E63CB7D4EEAA220*, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_CREATE_OFFSET))(proto, firstRewardItems);
		}

		static ::System::Boolean _CheckIsLayerActivated(::Class_1_DB9F32FCA772D309_6* protoLayer)
		{
			return ((::System::Boolean(*)(::Class_1_DB9F32FCA772D309_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISLAYERACTIVATED_OFFSET))(protoLayer);
		}

		static ::System::Boolean _CheckIsOptionalLayerPassed(::Class_1_DB9F32FCA772D309_6* protoLayer)
		{
			return ((::System::Boolean(*)(::Class_1_DB9F32FCA772D309_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISOPTIONALLAYERPASSED_OFFSET))(protoLayer);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_AREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_DiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_DIFFCOMPLEVEL_OFFSET))(this);
		}

		::System::Void set_DiffCompLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_DIFFCOMPLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISWIN_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_LastLayerNumText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LASTLAYERNUMTEXT_OFFSET))(this);
		}

		::System::Void set_LastLayerNumText(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LASTLAYERNUMTEXT_OFFSET))(this, value);
		}

		::System::Boolean get_IsOptionalLayerPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISOPTIONALLAYERPASSED_OFFSET))(this);
		}

		::System::Void set_IsOptionalLayerPassed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISOPTIONALLAYERPASSED_OFFSET))(this, value);
		}

		::System::UInt32 get_PassedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_PASSEDROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassedRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_PASSEDROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_AllRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ALLROOMCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsExtraRoundAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISEXTRAROUNDAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsExtraRoundAvailable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISEXTRAROUNDAVAILABLE_OFFSET))(this, value);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AddedRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDROGUESCORE_OFFSET))(this);
		}

		::System::Void set_AddedRogueScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDROGUESCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_AddedTalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDTALENTCOIN_OFFSET))(this);
		}

		::System::Void set_AddedTalentCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDTALENTCOIN_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_LineupAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LINEUPAVATARS_OFFSET))(this);
		}

		::System::Void set_LineupAvatars(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LINEUPAVATARS_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_SCEPTERINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_MIRACLEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ROGUECOINNUM_OFFSET))(this, value);
		}
	};
}
