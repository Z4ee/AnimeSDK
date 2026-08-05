#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E47330)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovPageController_Context_TypeDefinitionIndex = 49126;

	class UIBangkovPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 NewbieID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
