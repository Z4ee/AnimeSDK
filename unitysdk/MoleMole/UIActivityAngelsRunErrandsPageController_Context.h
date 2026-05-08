#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYANGELSRUNERRANDSPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152C9EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAngelsRunErrandsPageController_Context_TypeDefinitionIndex = 60981;

	class UIActivityAngelsRunErrandsPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANGELSRUNERRANDSPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
