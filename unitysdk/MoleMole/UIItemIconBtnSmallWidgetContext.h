#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169284D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnSmallWidgetContext_TypeDefinitionIndex = 71622;

	class UIItemIconBtnSmallWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean EmptyShowBg; // 0x28
		::System::Boolean EnableJump; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
