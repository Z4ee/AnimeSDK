#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UISOCIALCIRCLEINTERKNOTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14D70810)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInterknotDialogPopWindowController_Context_TypeDefinitionIndex = 40173;

	class UISocialCircleInterknotDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnConfirmCallback; // 0x28
		::Class_0_16E4307DCC41950C_12<::System::Int32>* CurrentSelect; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINTERKNOTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
