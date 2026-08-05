#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_B4AA4B9F04BE3CFD.h"

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF2A80)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingResultDialogPopWindowController_Context_TypeDefinitionIndex = 72798;

	class UISummerTideTreasureSellingResultDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_B4AA4B9F04BE3CFD WorldHandle; // 0x28
		::System::Int32 BeforeScore; // 0x38
		::Enum_3_0A3761FE34514D6C_10 StageType; // 0x3C
		::System::Int32 Limit; // 0x40
		::System::Int32 TotalScore; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGRESULTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
