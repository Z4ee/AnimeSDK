#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALVIRTUALPLAYEMPTYBTNCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169CF850)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralVirtualPlayEmptyBtnChildWindowController_Context_TypeDefinitionIndex = 76999;

	class UIGeneralVirtualPlayEmptyBtnChildWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::LogicButtonInputType LogicButtonInputType; // 0x28

		::System::Void _ctor(::MoleMole::LogicButtonInputType logicButtonInputType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIRTUALPLAYEMPTYBTNCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, logicButtonInputType);
		}
	};
}
