#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x172FAA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuidePageController_Context_TypeDefinitionIndex = 56853;

	class UIFilmGuidePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
