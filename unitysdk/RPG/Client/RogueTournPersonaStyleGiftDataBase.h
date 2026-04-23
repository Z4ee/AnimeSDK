#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_412DDC84C44F8B4B;
class Class_1_46389E85463FF7CE;
namespace RPG::Client { class RogueTournPersonaStyleGiftRarityData; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xB0F96B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB0F9600)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_GIFTID_OFFSET UNITYSDK_OFFSET(0xB0FF580)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0FF5E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ISSHOWINMENU_OFFSET UNITYSDK_OFFSET(0xB0FF600)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0FF5C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB0FF5A0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_GIFTID_OFFSET UNITYSDK_OFFSET(0xB0FF590)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0FF5F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ISSHOWINMENU_OFFSET UNITYSDK_OFFSET(0xB0FF610)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB0FF5D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xB0FF5B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0FF110)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0xB0FF190)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMROW_OFFSET UNITYSDK_OFFSET(0xB0FF320)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleGiftDataBase_TypeDefinitionIndex = 62448;

	class RogueTournPersonaStyleGiftDataBase : public ::System::Object
	{
	public:
		::Class_1_412DDC84C44F8B4B* _DescText; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::RogueTournPersonaStyleGiftRarityData* _Rarity_k__BackingField; // 0x20
		::System::UInt32 _GiftID_k__BackingField; // 0x28
		::System::Boolean _IsShowInMenu_k__BackingField; // 0x2C
		::RPG::Client::TextID _Name_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitFromExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMEXCEL_OFFSET))(this);
		}

		::System::Void _InitFromRow(::Class_1_46389E85463FF7CE* row)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_46389E85463FF7CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMROW_OFFSET))(this, row);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_GiftID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_GIFTID_OFFSET))(this);
		}

		::System::Void set_GiftID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_GIFTID_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournPersonaStyleGiftRarityData* get_Rarity()
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftRarityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::RPG::Client::RogueTournPersonaStyleGiftRarityData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaStyleGiftRarityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_RARITY_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowInMenu()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ISSHOWINMENU_OFFSET))(this);
		}

		::System::Void set_IsShowInMenu(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ISSHOWINMENU_OFFSET))(this, value);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_DESC_OFFSET))(this);
		}
	};
}
