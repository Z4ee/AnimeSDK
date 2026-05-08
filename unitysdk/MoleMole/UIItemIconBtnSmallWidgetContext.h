#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x148290C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnSmallWidgetContext_TypeDefinitionIndex = 65395;

	class UIItemIconBtnSmallWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean EnableJump; // 0x28
		::System::Boolean EmptyShowBg; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
