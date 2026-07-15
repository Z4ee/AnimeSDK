#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirEquipItemChangeType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x19ED3030)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x19ED30E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x19ED30C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x19ED30D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED30B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipItemRemoveChangeInfo_TypeDefinitionIndex = 75246;

	class PixAirEquipItemRemoveChangeInfo : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipItemChangeType _ChangeType; // 0x10
		::System::Int32 _Position_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipItemRemoveChangeInfo* Create(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemRemoveChangeInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO_CREATE_OFFSET))(a1);
		}

		::System::Int32 get_Position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO_SET_POSITION_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipItemChangeType get_ChangeType()
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemChangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMREMOVECHANGEINFO_GET_CHANGETYPE_OFFSET))(this);
		}
	};
}
