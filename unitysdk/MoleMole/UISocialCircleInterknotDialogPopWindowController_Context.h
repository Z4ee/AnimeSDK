#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class Class_0_16E4307DCC419505_153;

#define MOLEMOLE_UISOCIALCIRCLEINTERKNOTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152B8FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInterknotDialogPopWindowController_Context_TypeDefinitionIndex = 58870;

	class UISocialCircleInterknotDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnConfirmCallback; // 0x28
		::Class_0_16E4307DCC419505_153<::System::Int32>* CurrentSelect; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINTERKNOTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
