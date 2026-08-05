#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1AB80)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellPreparePageController_Context_TypeDefinitionIndex = 50468;

	class UISummerTideTreasureSellPreparePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ReturnToSummerMainPage; // 0x28
		::System::Int32 LevelConfigId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
