#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDATABINDSAMPLEV2POPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA8EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataBindSampleV2PopWindowController_Context_TypeDefinitionIndex = 53868;

	class UIDataBindSampleV2PopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATABINDSAMPLEV2POPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
