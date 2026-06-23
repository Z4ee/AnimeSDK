#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGalgamePageController_ImgExchangeTypeParams.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_DEFAULTEXCHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x173096C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_DefaultExchangeParams_TypeDefinitionIndex = 54904;

	class UIGalgamePageController_DefaultExchangeParams : public ::MoleMole::UIGalgamePageController_ImgExchangeTypeParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_DEFAULTEXCHANGEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
