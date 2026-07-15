#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x19ED5AD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_GET_BEFOREINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ED5A90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_GET_CURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ED5AB0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_SET_BEFOREINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ED5AA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_SET_CURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ED5AC0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED5B70)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipUpgradeViewModel_TypeDefinitionIndex = 75301;

	class PixAirEquipUpgradeViewModel : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipInstance* _CurrentInstance_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirEquipInstance* _BeforeInstance_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* get_BeforeInstance()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_GET_BEFOREINSTANCE_OFFSET))(this);
		}

		::System::Void set_BeforeInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_SET_BEFOREINSTANCE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* get_CurrentInstance()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_GET_CURRENTINSTANCE_OFFSET))(this);
		}

		::System::Void set_CurrentInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_SET_CURRENTINSTANCE_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirEquipUpgradeViewModel* Create(::RPG::Client::PixAir::PixAirEquipInstance* a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipUpgradeViewModel*(*)(::RPG::Client::PixAir::PixAirEquipInstance*, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}
	};
}
