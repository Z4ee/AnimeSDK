#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_947;

#define MOLEMOLE_UIOVERLORDFEASTTIPSDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D210F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTipsDialogPopWindowContext_TypeDefinitionIndex = 57984;

	class UIOverlordFeastTipsDialogPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_947* DevConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTIPSDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
