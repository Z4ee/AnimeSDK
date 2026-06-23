#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYMAINLINETELEPORTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x181B54A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainLineTeleportWidgetControllerContext_TypeDefinitionIndex = 82244;

	class UIActivityMainLineTeleportWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickBtn; // 0x28
		::System::Int32 AccessID; // 0x30
		::System::Int32 TotalProgress; // 0x34
		::System::Int32 ItemID; // 0x38
		::System::Boolean BtnInteractable; // 0x3C
		::System::Int32 CurProgress; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINLINETELEPORTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
