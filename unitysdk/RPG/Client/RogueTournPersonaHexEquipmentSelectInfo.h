#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentViewModel; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xC8433F0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_HEXINDEX_OFFSET UNITYSDK_OFFSET(0xC843100)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_HEX_OFFSET UNITYSDK_OFFSET(0xC8430E0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_ISSELECTEDEQUIPPEDHEX_OFFSET UNITYSDK_OFFSET(0xC843220)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_SELECTHEX_OFFSET UNITYSDK_OFFSET(0xC843600)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_SET_HEX_OFFSET UNITYSDK_OFFSET(0xC8430F0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC843480)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO__INIT_OFFSET UNITYSDK_OFFSET(0xC843490)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSelectInfo_TypeDefinitionIndex = 68096;

	class RogueTournPersonaHexEquipmentSelectInfo : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournHex* _Hex_k__BackingField; // 0x10
		::RPG::Client::RogueTournPersonaHexEquipmentViewModel* _ViewModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournHex* get_Hex()
		{
			return ((::RPG::Client::IRogueTournHex*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_HEX_OFFSET))(this);
		}

		::System::Void set_Hex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_SET_HEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_HexIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_HEXINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsSelectedEquippedHex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_ISSELECTEDEQUIPPEDHEX_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* Create(::RPG::Client::RogueTournPersonaHexEquipmentViewModel* a1)
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo*(*)(::RPG::Client::RogueTournPersonaHexEquipmentViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO__INIT_OFFSET))(this);
		}

		::System::Void SelectHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_SELECTHEX_OFFSET))(this, a1);
		}
	};
}
