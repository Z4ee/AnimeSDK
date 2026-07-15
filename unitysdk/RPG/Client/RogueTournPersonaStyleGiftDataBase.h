#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_46389E85463FF7CE;
class Class_1_CDB239B5BA2266D7;
namespace RPG::Client { class RogueTournPersonaStyleGiftRarityData; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0x1AA6CE90)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1AA6CDE0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_GIFTID_OFFSET UNITYSDK_OFFSET(0x1AA72A70)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AA72AD0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_ISSHOWINMENU_OFFSET UNITYSDK_OFFSET(0x1AA72AF0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AA72AB0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1AA72A90)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_GIFTID_OFFSET UNITYSDK_OFFSET(0x1AA72A80)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AA72AE0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_ISSHOWINMENU_OFFSET UNITYSDK_OFFSET(0x1AA72B00)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AA72AC0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x1AA72AA0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA631E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA633D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEGIFTDATABASE__INITFROMROW_OFFSET UNITYSDK_OFFSET(0x1AA63630)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleGiftDataBase_TypeDefinitionIndex = 64748;

	class RogueTournPersonaStyleGiftDataBase : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaStyleGiftRarityData* _Rarity_k__BackingField; // 0x10
		::Class_1_CDB239B5BA2266D7* _DescText; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::UInt32 _GiftID_k__BackingField; // 0x38
		::System::Boolean _IsShowInMenu_k__BackingField; // 0x3C

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
