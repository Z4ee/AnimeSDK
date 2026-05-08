#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_694;
class Class_2_208CC9941471731A_877;

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER_RIDUBOOOUTFITCONFIGTEMPLATEEXTWITHLEVELCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x137650F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController_RiduBooOutfitConfigTemplateExtWithLevelCfg_TypeDefinitionIndex = 79201;

	class UIRidusGotBooChangeClothPageController_RiduBooOutfitConfigTemplateExtWithLevelCfg : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_694* ClothCfg; // 0x10
		::Class_2_208CC9941471731A_877* LevelCfg; // 0x18
		::System::Boolean ShowPrice; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER_RIDUBOOOUTFITCONFIGTEMPLATEEXTWITHLEVELCFG__CTOR_OFFSET))(this);
		}
	};
}
