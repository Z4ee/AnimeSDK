#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesMiniGameRewardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesModule; }
namespace RPG::GameCore { class PlanetFesGameGachaSymbolRow; }
namespace RPG::GameCore { class PlanetFesGameRewardRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0x1A977290)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GETDIAMONDNUM_OFFSET UNITYSDK_OFFSET(0x1A97AF20)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_DIAMONDICON_OFFSET UNITYSDK_OFFSET(0x1A97B300)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_GAMEREWARDID_OFFSET UNITYSDK_OFFSET(0x1A97B740)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_GOLDICON_OFFSET UNITYSDK_OFFSET(0x1A97B520)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_GOLDNUM_OFFSET UNITYSDK_OFFSET(0x1A97B7C0)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_GOTSTR_OFFSET UNITYSDK_OFFSET(0x1A97B860)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A97B260)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A97B1C0)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0x1A97B090)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_REWARDROW_OFFSET UNITYSDK_OFFSET(0x1A97B760)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A97B1E0)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1A97B200)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_UNKNOWNICON_OFFSET UNITYSDK_OFFSET(0x1A97BAB0)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x1A97B130)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET__UNKNOWNSYMBOLID_OFFSET UNITYSDK_OFFSET(0x1A97BBA0)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_SET_GAMEREWARDID_OFFSET UNITYSDK_OFFSET(0x1A97B750)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A97B1D0)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD_SET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A97B1F0)
#define RPG_CLIENT_PLANETFESMINIGAMEREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A97AF10)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameReward_TypeDefinitionIndex = 63661;

	class PlanetFesMiniGameReward : public ::System::Object
	{
	public:
		::System::UInt32 _GameRewardID_k__BackingField; // 0x10
		::RPG::GameCore::PlanetFesMiniGameRewardType _RewardType_k__BackingField; // 0x14
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesMiniGameReward* Create(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PlanetFesMiniGameRewardType a3)
		{
			return ((::RPG::Client::PlanetFesMiniGameReward*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PlanetFesMiniGameRewardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 GetDiamondNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GETDIAMONDNUM_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlanetFesMiniGameRewardType get_RewardType()
		{
			return ((::RPG::GameCore::PlanetFesMiniGameRewardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_REWARDTYPE_OFFSET))(this);
		}

		::System::Void set_RewardType(::RPG::GameCore::PlanetFesMiniGameRewardType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesMiniGameRewardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_SET_REWARDTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlanetFesGameGachaSymbolRow* get_Row()
		{
			return ((::RPG::GameCore::PlanetFesGameGachaSymbolRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_ROW_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_DiamondIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_DIAMONDICON_OFFSET))(this);
		}

		::System::String* get_GoldIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_GOLDICON_OFFSET))(this);
		}

		::System::UInt32 get_GameRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_GAMEREWARDID_OFFSET))(this);
		}

		::System::Void set_GameRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_SET_GAMEREWARDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlanetFesGameRewardRow* get_RewardRow()
		{
			return ((::RPG::GameCore::PlanetFesGameRewardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_REWARDROW_OFFSET))(this);
		}

		::System::UInt32 get_GoldNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_GOLDNUM_OFFSET))(this);
		}

		::System::String* get_GotStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_GOTSTR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ItemList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_ITEMLIST_OFFSET))(this);
		}

		::System::String* get_UnknownIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET_UNKNOWNICON_OFFSET))(this);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET__MODULE_OFFSET))(this);
		}

		::System::UInt32 get__UnknownSymbolID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEREWARD_GET__UNKNOWNSYMBOLID_OFFSET))(this);
		}
	};
}
