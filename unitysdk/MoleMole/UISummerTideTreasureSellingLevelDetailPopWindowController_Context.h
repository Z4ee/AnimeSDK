#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x160F3250)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingLevelDetailPopWindowController_Context_TypeDefinitionIndex = 60758;

	class UISummerTideTreasureSellingLevelDetailPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LevelConfigId; // 0x28
		::System::Int32 SelectRoleId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
