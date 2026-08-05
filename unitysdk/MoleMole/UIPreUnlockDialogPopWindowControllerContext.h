#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_535;
namespace System { class Action; }

#define MOLEMOLE_UIPREUNLOCKDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1835E250)

namespace MoleMole
{
	inline static constexpr unsigned int UIPreUnlockDialogPopWindowControllerContext_TypeDefinitionIndex = 48835;

	class UIPreUnlockDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* okBtnCallback; // 0x28
		::Class_2_208CC9941471731A_535* cfg; // 0x30
		::System::Action* cancelBtnCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPREUNLOCKDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
