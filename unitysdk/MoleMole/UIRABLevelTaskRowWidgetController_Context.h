#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_7ADAC692329D9ED8;

#define MOLEMOLE_UIRABLEVELTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C06BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelTaskRowWidgetController_Context_TypeDefinitionIndex = 68119;

	class UIRABLevelTaskRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_7ADAC692329D9ED8* data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
