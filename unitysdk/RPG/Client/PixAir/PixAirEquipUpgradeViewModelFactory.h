#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirEquipUpgradeViewModel; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODELFACTORY_CREATEFORPREVIEW_OFFSET UNITYSDK_OFFSET(0x19ED5B80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODELFACTORY_CREATEPREVIEWINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ED5C20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipUpgradeViewModelFactory_TypeDefinitionIndex = 75302;

	class PixAirEquipUpgradeViewModelFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirEquipUpgradeViewModel* CreateForPreview(::RPG::Client::PixAir::PixAirEquipInstance* a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipUpgradeViewModel*(*)(::RPG::Client::PixAir::PixAirEquipInstance*, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODELFACTORY_CREATEFORPREVIEW_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PixAir::PixAirEquipInstance* CreatePreviewInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPUPGRADEVIEWMODELFACTORY_CREATEPREVIEWINSTANCE_OFFSET))(a1);
		}
	};
}
