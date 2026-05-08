#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_989;
namespace System { class Action; }

#define MOLEMOLE_UIPREUNLOCKDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1559C610)

namespace MoleMole
{
	inline static constexpr unsigned int UIPreUnlockDialogPopWindowControllerContext_TypeDefinitionIndex = 62280;

	class UIPreUnlockDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* cancelBtnCallback; // 0x28
		::System::Action* okBtnCallback; // 0x30
		::Class_2_208CC9941471731A_989* cfg; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPREUNLOCKDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
