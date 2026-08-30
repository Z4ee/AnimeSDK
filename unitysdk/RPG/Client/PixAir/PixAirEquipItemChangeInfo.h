#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirEquipItemChangeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C840190)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C840370)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_GET_NEWITEM_OFFSET UNITYSDK_OFFSET(0x1C8403B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_GET_OLDITEM_OFFSET UNITYSDK_OFFSET(0x1C840390)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_SET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C840380)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_SET_NEWITEM_OFFSET UNITYSDK_OFFSET(0x1C8403C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_SET_OLDITEM_OFFSET UNITYSDK_OFFSET(0x1C8403A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C840230)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO__GETCHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C8402F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO__INIT_OFFSET UNITYSDK_OFFSET(0x1C840240)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipItemChangeInfo_TypeDefinitionIndex = 78791;

	class PixAirEquipItemChangeInfo : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipInstance* _NewItem_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirEquipInstance* _OldItem_k__BackingField; // 0x18
		::RPG::Client::PixAir::PixAirEquipItemChangeType _ChangeType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipItemChangeInfo* Create(::RPG::Client::PixAir::PixAirEquipInstance* a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemChangeInfo*(*)(::RPG::Client::PixAir::PixAirEquipInstance*, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO__INIT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipItemChangeType _GetChangeType()
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemChangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO__GETCHANGETYPE_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipItemChangeType get_ChangeType()
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemChangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::Void set_ChangeType(::RPG::Client::PixAir::PixAirEquipItemChangeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipItemChangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_SET_CHANGETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* get_OldItem()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_GET_OLDITEM_OFFSET))(this);
		}

		::System::Void set_OldItem(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_SET_OLDITEM_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* get_NewItem()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_GET_NEWITEM_OFFSET))(this);
		}

		::System::Void set_NewItem(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCHANGEINFO_SET_NEWITEM_OFFSET))(this, a1);
		}
	};
}
