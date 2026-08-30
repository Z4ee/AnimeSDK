#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_METHOD_3_0B277CA1945401A6_OFFSET UNITYSDK_OFFSET(0x1CFC5700)
#define RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_METHOD_3_A5F460E2C5CD8F17_OFFSET UNITYSDK_OFFSET(0x1CFC57A0)
#define RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC5790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEquipmentOwnerSelectorConfig_TypeDefinitionIndex = 15741;

	class ChimeraDuelEquipmentOwnerSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B277CA1945401A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEquipmentOwnerSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEquipmentOwnerSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_METHOD_3_0B277CA1945401A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5F460E2C5CD8F17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEquipmentOwnerSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEquipmentOwnerSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_METHOD_3_A5F460E2C5CD8F17_OFFSET))(a1, a2);
		}
	};
}
