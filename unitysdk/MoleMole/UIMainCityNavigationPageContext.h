#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIMainCityNavigationPageContext_NavOriginType.h"

#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14C36AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageContext_TypeDefinitionIndex = 45267;

	class UIMainCityNavigationPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIMainCityNavigationPageContext_NavOriginType NavType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
