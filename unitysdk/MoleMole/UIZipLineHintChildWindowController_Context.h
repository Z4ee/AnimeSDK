#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10427B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZipLineHintChildWindowController_Context_TypeDefinitionIndex = 52731;

	class UIZipLineHintChildWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
