#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1971CBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideItemProgressWidgetController_Context_TypeDefinitionIndex = 82855;

	class UIFilmGuideItemProgressWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
