#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_265;
class Class_2_208CC9941471731A_409;

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER_RIDUBOOOUTFITCONFIGTEMPLATEEXTWITHLEVELCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x198A2B20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController_RiduBooOutfitConfigTemplateExtWithLevelCfg_TypeDefinitionIndex = 86078;

	class UIRidusGotBooChangeClothPageController_RiduBooOutfitConfigTemplateExtWithLevelCfg : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_265* ClothCfg; // 0x10
		::Class_2_208CC9941471731A_409* LevelCfg; // 0x18
		::System::Boolean ShowPrice; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER_RIDUBOOOUTFITCONFIGTEMPLATEEXTWITHLEVELCFG__CTOR_OFFSET))(this);
		}
	};
}
