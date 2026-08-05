#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UISOCIALCIRCLEINTERKNOTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15190350)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInterknotDialogPopWindowController_Context_TypeDefinitionIndex = 76068;

	class UISocialCircleInterknotDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Int32>* CurrentSelect; // 0x28
		::System::Action_1<::System::Int32>* OnConfirmCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINTERKNOTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
