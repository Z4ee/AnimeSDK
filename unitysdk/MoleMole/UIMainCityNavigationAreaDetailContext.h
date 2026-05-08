#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINCITYNAVIGATIONAREADETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x148D7EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationAreaDetailContext_TypeDefinitionIndex = 44575;

	class UIMainCityNavigationAreaDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 AreaID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONAREADETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
