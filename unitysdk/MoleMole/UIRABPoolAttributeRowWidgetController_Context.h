#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A825C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPoolAttributeRowWidgetController_Context_TypeDefinitionIndex = 65249;

	class UIRABPoolAttributeRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CharacterBaseId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
