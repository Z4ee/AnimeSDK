#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1093;

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER_RIDUBOOLEVELABILITYTEMPLATEEXTANDLEVELID__CTOR_OFFSET UNITYSDK_OFFSET(0x160CB9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController_RiduBooLevelAbilityTemplateExtAndLevelID_TypeDefinitionIndex = 76791;

	class UIRidusGotBooSelectLevelPageController_RiduBooLevelAbilityTemplateExtAndLevelID : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_1093* Cfg; // 0x10
		::System::Int32 LevelID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER_RIDUBOOLEVELABILITYTEMPLATEEXTANDLEVELID__CTOR_OFFSET))(this);
		}
	};
}
