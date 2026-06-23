#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187DE220)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideItemProgressWidgetController_Context_TypeDefinitionIndex = 79756;

	class UIFilmGuideItemProgressWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
