#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentViewModel; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB0F0DF0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_HEXINDEX_OFFSET UNITYSDK_OFFSET(0xB0F0AB0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_HEX_OFFSET UNITYSDK_OFFSET(0xB0F0A90)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_ISSELECTEDEQUIPPEDHEX_OFFSET UNITYSDK_OFFSET(0xB0F0BE0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_SELECTHEX_OFFSET UNITYSDK_OFFSET(0xB0F0F70)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_SET_HEX_OFFSET UNITYSDK_OFFSET(0xB0F0AA0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F0E80)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO__INIT_OFFSET UNITYSDK_OFFSET(0xB0F0E90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSelectInfo_TypeDefinitionIndex = 67153;

	class RogueTournPersonaHexEquipmentSelectInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaHexEquipmentViewModel* _ViewModel; // 0x10
		::RPG::Client::IRogueTournHex* _Hex_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournHex* get_Hex()
		{
			return ((::RPG::Client::IRogueTournHex*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_HEX_OFFSET))(this);
		}

		::System::Void set_Hex(::RPG::Client::IRogueTournHex* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_SET_HEX_OFFSET))(this, value);
		}

		::System::UInt32 get_HexIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_HEXINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsSelectedEquippedHex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_GET_ISSELECTEDEQUIPPEDHEX_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* Create(::RPG::Client::RogueTournPersonaHexEquipmentViewModel* viewModel)
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo*(*)(::RPG::Client::RogueTournPersonaHexEquipmentViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_CREATE_OFFSET))(viewModel);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO__INIT_OFFSET))(this);
		}

		::System::Void SelectHex(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSELECTINFO_SELECTHEX_OFFSET))(this, hex);
		}
	};
}
