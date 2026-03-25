#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_GET_COMMUNICATEID_OFFSET UNITYSDK_OFFSET(0x94741B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_GET_DATA_OFFSET UNITYSDK_OFFSET(0x94741D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x9474190)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_SET_COMMUNICATEID_OFFSET UNITYSDK_OFFSET(0x94741C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_SET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x94741A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9474180)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCommunicateShowInfo_TypeDefinitionIndex = 61910;

	class DiceCombatCommunicateShowInfo : public ::System::Object
	{
	public:
		::System::UInt32 _PlayerUID_k__BackingField; // 0x10
		::System::UInt32 _CommunicateID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 playerUID, ::System::UInt32 communicateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO__CTOR_OFFSET))(this, playerUID, communicateID);
		}

		::System::UInt32 get_PlayerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_GET_PLAYERUID_OFFSET))(this);
		}

		::System::Void set_PlayerUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_SET_PLAYERUID_OFFSET))(this, value);
		}

		::System::UInt32 get_CommunicateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_GET_COMMUNICATEID_OFFSET))(this);
		}

		::System::Void set_CommunicateID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_SET_COMMUNICATEID_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatCommunicateData* get_Data()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatCommunicateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOMMUNICATESHOWINFO_GET_DATA_OFFSET))(this);
		}
	};
}
