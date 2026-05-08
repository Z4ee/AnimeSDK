#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDEVLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14E98080)

namespace MoleMole
{
	inline static constexpr unsigned int UIDevLevelPageController_Context_TypeDefinitionIndex = 64805;

	class UIDevLevelPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
