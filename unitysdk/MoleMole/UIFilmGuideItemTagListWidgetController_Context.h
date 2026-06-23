#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4A620)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideItemTagListWidgetController_Context_TypeDefinitionIndex = 71111;

	class UIFilmGuideItemTagListWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
