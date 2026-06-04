#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_46389E85463FF7CE;
class Class_1_CDB239B5BA2266D7;
namespace RPG::Client { class RogueTournPersonaStyleGiftRarityData; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xC84C0B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC84C000)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_GIFTID_OFFSET UNITYSDK_OFFSET(0xC852640)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC8526A0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ISSHOWINMENU_OFFSET UNITYSDK_OFFSET(0xC8526C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC852680)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xC852660)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_GIFTID_OFFSET UNITYSDK_OFFSET(0xC852650)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC8526B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ISSHOWINMENU_OFFSET UNITYSDK_OFFSET(0xC8526D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC852690)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xC852670)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8521C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0xC852240)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMROW_OFFSET UNITYSDK_OFFSET(0xC8523E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleGiftDataBase_TypeDefinitionIndex = 63381;

	class RogueTournPersonaStyleGiftDataBase : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::RogueTournPersonaStyleGiftRarityData* _Rarity_k__BackingField; // 0x18
		::Class_1_CDB239B5BA2266D7* _DescText; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::Boolean _IsShowInMenu_k__BackingField; // 0x38
		::System::UInt32 _GiftID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitFromExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMEXCEL_OFFSET))(this);
		}

		::System::Void _InitFromRow(::Class_1_46389E85463FF7CE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_46389E85463FF7CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMROW_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_GiftID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_GIFTID_OFFSET))(this);
		}

		::System::Void set_GiftID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_GIFTID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaStyleGiftRarityData* get_Rarity()
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftRarityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::RPG::Client::RogueTournPersonaStyleGiftRarityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_RARITY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowInMenu()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ISSHOWINMENU_OFFSET))(this);
		}

		::System::Void set_IsShowInMenu(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ISSHOWINMENU_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_DESC_OFFSET))(this);
		}
	};
}
