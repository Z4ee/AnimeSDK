#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_181;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8C540)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureToolDialogPopWindowController_Context_TypeDefinitionIndex = 84816;

	class UISummerTideTreasureToolDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_181* GeneralLevel; // 0x28
		::System::Action_1<::System::Int32>* OnToolConfirmed; // 0x30
		::System::Int32 StageId; // 0x38
		::System::Int32 CurrentToolId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETOOLDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
