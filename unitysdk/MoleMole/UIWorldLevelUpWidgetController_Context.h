#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8F1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorldLevelUpWidgetController_Context_TypeDefinitionIndex = 41569;

	class UIWorldLevelUpWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::Int32 CurWorldLevel; // 0x30

		::System::Void _ctor(::System::Int32 curWorldLevel, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, curWorldLevel, onClose);
		}
	};
}
